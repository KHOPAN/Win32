package com.khopan.win32.mediafoundation;

public class GUID {
	public long Data1;
	public long Data2;
	public long Data3;
	public long Data40;
	public long Data41;
	public long Data42;
	public long Data43;
	public long Data44;
	public long Data45;
	public long Data46;
	public long Data47;

	public GUID() {

	}

	public GUID(long Data1, long Data2, long Data3, long Data40, long Data41, long Data42, long Data43, long Data44, long Data45, long Data46, long Data47) {
		this.Data1 = Data1;
		this.Data2 = Data2;
		this.Data3 = Data3;
		this.Data40 = Data40;
		this.Data41 = Data41;
		this.Data42 = Data42;
		this.Data43 = Data43;
		this.Data44 = Data44;
		this.Data45 = Data45;
		this.Data46 = Data46;
		this.Data47 = Data47;
	}
}
