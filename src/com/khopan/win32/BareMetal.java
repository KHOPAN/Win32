package com.khopan.win32;

public class BareMetal {
	private BareMetal() {}

	static {
		NativeLibrary.load();
	}

	public static native long GetMemoryAddress(Object object);
	public static native void UpdateObject(long memoryAddress, Object object);
}
