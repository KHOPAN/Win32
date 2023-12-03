package com.khopan.win32.struct.memory;

import com.khopan.win32.struct.MemoryStruct;

public class HWND extends MemoryStruct {
	public HWND() {

	}

	public HWND(long memoryAddress) {
		this.memoryAddress = memoryAddress;
	}
}
