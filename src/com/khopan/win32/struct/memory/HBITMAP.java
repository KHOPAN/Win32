package com.khopan.win32.struct.memory;

import com.khopan.win32.struct.MemoryStruct;

public class HBITMAP extends MemoryStruct {
	public HBITMAP() {

	}

	public HBITMAP(long memoryAddress) {
		this.memoryAddress = memoryAddress;
	}
}
