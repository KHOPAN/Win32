package com.khopan.win32.constants;

public interface CoInit {
	/**
	 * Initializes the thread for apartment-threaded object concurrency (see Remarks).
	 */
	public static final long COINIT_APARTMENTTHREADED = 0x02;

	/**
	 * Initializes the thread for multithreaded object concurrency (see Remarks).
	 */
	public static final long COINIT_MULTITHREADED = 0x00;

	/**
	 * Disables DDE for OLE1 support.
	 */
	public static final long COINIT_DISABLE_OLE1DDE = 0x04;

	/**
	 * Increase memory usage in an attempt to increase performance.
	 */
	public static final long COINIT_SPEED_OVER_MEMORY = 0x08;
}
