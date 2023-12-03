package com.khopan.win32.struct.holder;

import com.khopan.win32.struct.memory.HWND;

public class MSG {
	public HWND hwnd;
	public int message;
	public long wParam;
	public long lParam;
	public long time;
	public POINT pt;

	public MSG() {

	}
}
