package com.khopan.win32.constants.messagebox;

public interface MessageBoxDefaultButton {
	/**
	 * The first button is the default button.
	 * MB_DEFBUTTON1 is the default unless
	 * MB_DEFBUTTON2, MB_DEFBUTTON3, or
	 * MB_DEFBUTTON4 is specified.
	 */
	public static final long MB_DEFBUTTON1 = 0x00000000L;

	/**
	 * The second button is the default button.
	 */
	public static final long MB_DEFBUTTON2 = 0x00000100L;

	/**
	 * The third button is the default button.
	 */
	public static final long MB_DEFBUTTON3 = 0x00000200L;

	/**
	 * The fourth button is the default button.
	 */
	public static final long MB_DEFBUTTON4 = 0x00000300L;
}
