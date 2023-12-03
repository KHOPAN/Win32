package com.khopan.win32.struct.memory;

import com.khopan.win32.struct.MemoryStruct;

public class HBRUSH extends MemoryStruct {
	public HBRUSH() {

	}

	public HBRUSH(long memoryAddress) {
		this.memoryAddress = memoryAddress;
	}
}
