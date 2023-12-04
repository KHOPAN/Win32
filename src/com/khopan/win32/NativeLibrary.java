package com.khopan.win32;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;

class NativeLibrary {
	private NativeLibrary() {}

	static {
		NativeLibrary.loadLibrary();
	}

	static void load() {
		// Load the static block
	}

	private static void loadLibrary() {
		if(Win32Library.IsLibraryLoaded) {
			return;
		}

		if(Win32Library.LibraryPath != null) {
			System.load(Win32Library.LibraryPath);
			return;
		}

		File copyPath;

		if(Win32Library.CopyLibraryPath == null) {
			File userHome = new File(System.getProperty("user.home"));
			copyPath = new File(userHome, "Win32.dll");
		} else {
			copyPath = new File(Win32Library.CopyLibraryPath);
		}

		try {
			InputStream stream = NativeLibrary.class.getResourceAsStream("Win32.dll");
			byte[] data = stream.readAllBytes();
			stream.close();
			FileOutputStream output = new FileOutputStream(copyPath);
			output.write(data);
			output.close();
			System.load(copyPath.getAbsolutePath());
			Win32Library.IsLoaded = true;
		} catch(Throwable Errors) {
			throw new RuntimeException(Errors);
		}
	}
}
