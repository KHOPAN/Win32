package com.khopan.win32.mediafoundation;

import com.khopan.win32.struct.MemoryStruct;

public class IMFAttributes extends MemoryStruct {
	public IMFAttributes() {

	}

	public native long SetGUID(GUID guidKey, GUID guidValue);
}
