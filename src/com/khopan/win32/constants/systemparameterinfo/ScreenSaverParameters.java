package com.khopan.win32.constants.systemparameterinfo;

public interface ScreenSaverParameters {
	/**
	 * Determines whether screen saving is
	 * enabled. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if screen saving is enabled, or
	 * FALSE otherwise. Windows 7, Windows
	 * Server 2008 R2 and Windows 2000: The
	 * function returns TRUE even when screen
	 * saving is not enabled.
	 */
	public static final int SPI_GETSCREENSAVEACTIVE = 0x0010;

	/**
	 * Determines whether a screen saver is
	 * currently running on the window station
	 * of the calling process. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if a screen saver is
	 * currently running, or FALSE otherwise.
	 * Note that only the interactive window
	 * station, WinSta0, can have a screen
	 * saver running.
	 */
	public static final int SPI_GETSCREENSAVERRUNNING = 0x0072;

	/**
	 * Determines whether the screen saver
	 * requires a password to display the
	 * Windows desktop. The pvParam parameter
	 * must point to a BOOL variable that
	 * receives TRUE if the screen saver
	 * requires a password, or FALSE otherwise.
	 * The uiParam parameter is ignored.
	 * Windows Server 2003 and Windows XP/2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_GETSCREENSAVESECURE = 0x0076;

	/**
	 * Retrieves the screen saver time-out
	 * value, in seconds. The pvParam parameter
	 * must point to an integer variable that
	 * receives the value.
	 */
	public static final int SPI_GETSCREENSAVETIMEOUT = 0x000E;

	/**
	 * Sets the state of the screen saver. The
	 * uiParam parameter specifies TRUE to
	 * activate screen saving, or FALSE to
	 * deactivate it. If the machine has
	 * entered power saving mode or system lock
	 * state, an ERROR_OPERATION_IN_PROGRESS
	 * exception occurs.
	 */
	public static final int SPI_SETSCREENSAVEACTIVE = 0x0011;

	/**
	 * Sets whether the screen saver requires
	 * the user to enter a password to display
	 * the Windows desktop. The uiParam
	 * parameter is a BOOL variable. The
	 * pvParam parameter is ignored. Set
	 * uiParam to TRUE to require a password,
	 * or FALSE to not require a password. If
	 * the machine has entered power saving
	 * mode or system lock state, an
	 * ERROR_OPERATION_IN_PROGRESS exception
	 * occurs. Windows Server 2003 and Windows
	 * XP/2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_SETSCREENSAVESECURE = 0x0077;

	/**
	 * Sets the screen saver time-out value to
	 * the value of the uiParam parameter. This
	 * value is the amount of time, in seconds,
	 * that the system must be idle before the
	 * screen saver activates. If the machine
	 * has entered power saving mode or system
	 * lock state, an
	 * ERROR_OPERATION_IN_PROGRESS exception
	 * occurs.
	 */
	public static final int SPI_SETSCREENSAVETIMEOUT = 0x000F;
}
