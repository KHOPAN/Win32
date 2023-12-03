package com.khopan.win32.constants;

public interface HRESULT {
	/**
	 * Operation successful
	 */
	public static final long S_OK = 0x00000000;

	/**
	 * Operation aborted
	 */
	public static final long E_ABORT = 0x80004004;

	/**
	 * General access denied error
	 */
	public static final long E_ACCESSDENIED = 0x80070005;

	/**
	 * Unspecified failure
	 */
	public static final long E_FAIL = 0x80004005;

	/**
	 * Handle that is not valid
	 */
	public static final long E_HANDLE = 0x80070006;

	/**
	 * One or more arguments are not valid
	 */
	public static final long E_INVALIDARG = 0x80070057;

	/**
	 * No such interface supported
	 */
	public static final long E_NOINTERFACE = 0x80004002;

	/**
	 * Not implemented
	 */
	public static final long E_NOTIMPL = 0x80004001;

	/**
	 * Failed to allocate necessary memory
	 */
	public static final long E_OUTOFMEMORY = 0x8007000E;

	/**
	 * Pointer that is not valid
	 */
	public static final long E_POINTER = 0x80004003;

	/**
	 * Unexpected failure
	 */
	public static final long E_UNEXPECTED = 0x8000FFFF;
}
