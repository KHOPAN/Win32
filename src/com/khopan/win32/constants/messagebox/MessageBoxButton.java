package com.khopan.win32.constants.messagebox;

public interface MessageBoxButton {
	/**
	 * The message box contains three push
	 * buttons: Abort, Retry, and Ignore.
	 */
	public static final long MB_ABORTRETRYIGNORE = 0x00000002L;

	/**
	 * The message box contains three push
	 * buttons: Cancel, Try Again, Continue.
	 * Use this message box type instead of
	 * MB_ABORTRETRYIGNORE.
	 */
	public static final long MB_CANCELTRYCONTINUE = 0x00000006L;

	/**
	 * Adds a Help button to the message box.
	 * When the user clicks the Help button or
	 * presses F1, the system sends a WM_HELP
	 * message to the owner.
	 */
	public static final long MB_HELP = 0x00004000L;

	/**
	 * The message box contains one push
	 * button: OK. This is the default.
	 */
	public static final long MB_OK = 0x00000000L;

	/**
	 * The message box contains two push
	 * buttons: OK and Cancel.
	 */
	public static final long MB_OKCANCEL = 0x00000001L;

	/**
	 * The message box contains two push
	 * buttons: Retry and Cancel.
	 */
	public static final long MB_RETRYCANCEL = 0x00000005L;

	/**
	 * The message box contains two push
	 * buttons: Yes and No.
	 */
	public static final long MB_YESNO = 0x00000004L;

	/**
	 * The message box contains three push
	 * buttons: Yes, No, and Cancel.
	 */
	public static final long MB_YESNOCANCEL = 0x00000003L;
}
