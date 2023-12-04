package com.khopan.win32;

public class Win32Library {
	private Win32Library() {}

	static boolean IsLoaded;
	static boolean IsLibraryLoaded;
	static String LibraryPath;
	static String CopyLibraryPath;

	public static void libraryLoaded() {
		if(Win32Library.IsLoaded) {
			throw new UnsupportedOperationException("Native library is already loaded");
		}

		Win32Library.IsLibraryLoaded = true;
	}

	public static void setLibraryPath(String libraryPath) {
		if(Win32Library.IsLoaded) {
			throw new UnsupportedOperationException("Native library is already loaded");
		}

		Win32Library.LibraryPath = libraryPath;
	}

	public static void setCopyLibraryPath(String copyLibraryPath) {
		if(Win32Library.IsLoaded) {
			throw new UnsupportedOperationException("Native library is already loaded");
		}

		Win32Library.CopyLibraryPath = copyLibraryPath;
	}
}
