package com.khopan.win32.struct.holder;

import com.khopan.win32.struct.memory.HDC;

public class PAINTSTRUCT {
	public HDC hdc;
	public boolean fErase;
	public RECT rcPaint;
	public boolean fRestore;
	public boolean fIncUpdate;
	public byte[] rgbReserved;

	public PAINTSTRUCT() {

	}
}
