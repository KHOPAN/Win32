package com.khopan.win32.constants;

import com.khopan.win32.struct.memory.HWND;

public interface HWNDInsertAfter {
	public static final HWND HWND_BOTTOM = new HWND(1);
	public static final HWND HWND_NOTOPMOST = new HWND(-2);
	public static final HWND HWND_TOP = new HWND(0);
	public static final HWND HWND_TOPMOST = new HWND(-1);
}
