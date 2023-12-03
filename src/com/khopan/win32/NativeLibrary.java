package com.khopan.win32;

class NativeLibrary {
	static {
		/*try {
			InputStream stream = NativeLibrary.class.getResourceAsStream("Win32.dll");
			FileOutputStream output = new FileOutputStream(new File("C:\\Win32.dll"));
			output.write(stream.readAllBytes());
			stream.close();
			output.close();
			System.load("C:\\Win32.dll");
		} catch(Throwable Errors) {
			throw new RuntimeException(Errors);
		}*/

		System.load("D:\\GitHub Repository\\Win32\\WindowsAPI\\x64\\Debug\\WindowsAPI.dll");
	}

	private NativeLibrary() {}

	static void load() {
		// Load the static block
	}
}
