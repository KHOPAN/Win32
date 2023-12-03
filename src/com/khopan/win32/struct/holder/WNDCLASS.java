package com.khopan.win32.struct.holder;

import com.khopan.win32.struct.function.WNDPROC;
import com.khopan.win32.struct.memory.HBRUSH;
import com.khopan.win32.struct.memory.HCURSOR;
import com.khopan.win32.struct.memory.HICON;
import com.khopan.win32.struct.memory.HINSTANCE;

public class WNDCLASS {
	public int style;
	public WNDPROC lpfnWndProc;
	public int cbClsExtra;
	public int cbWndExtra;
	public HINSTANCE hInstance;
	public HICON hIcon;
	public HCURSOR hCursor;
	public HBRUSH hbrBackground;
	public String lpszMenuName;
	public String lpszClassName;

	public WNDCLASS() {

	}
}
