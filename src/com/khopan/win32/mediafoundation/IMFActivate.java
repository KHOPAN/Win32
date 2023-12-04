package com.khopan.win32.mediafoundation;

import com.khopan.win32.struct.MemoryStruct;
import com.khopan.win32.utils.MutableString;

public class IMFActivate extends MemoryStruct {
	public IMFActivate() {

	}

	public native long GetAllocatedString(GUID guidKey, MutableString ppwszValue);
}
