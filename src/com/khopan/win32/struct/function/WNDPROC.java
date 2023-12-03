package com.khopan.win32.struct.function;

import com.khopan.win32.struct.memory.HWND;

public interface WNDPROC {
	long windowProcedure(HWND window, int message, long wparam, long lparam);
}
