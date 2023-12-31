package com.khopan.win32.constants.messagebox;

public interface MessageBoxOther {
	/**
	 * Same as desktop of the interactive
	 * window station. For more information,
	 * see Window Stations. If the current
	 * input desktop is not the default
	 * desktop, MessageBox does not return
	 * until the user switches to the default
	 * desktop.
	 */
	public static final long MB_DEFAULT_DESKTOP_ONLY = 0x00020000L;

	/**
	 * The text is right-justified.
	 */
	public static final long MB_RIGHT = 0x00080000L;

	/**
	 * Displays message and caption text using
	 * right-to-left reading order on Hebrew
	 * and Arabic systems.
	 */
	public static final long MB_RTLREADING = 0x00100000L;

	/**
	 * The message box becomes the foreground
	 * window. Internally, the system calls the
	 * SetForegroundWindow function for the
	 * message box.
	 */
	public static final long MB_SETFOREGROUND = 0x00010000L;

	/**
	 * The message box is created with the
	 * WS_EX_TOPMOST window style.
	 */
	public static final long MB_TOPMOST = 0x00040000L;

	/**
	 * The caller is a service notifying the
	 * user of an event. The function displays
	 * a message box on the current active
	 * desktop, even if there is no user logged
	 * on to the computer. Terminal Services:
	 * If the calling thread has an
	 * impersonation token, the function
	 * directs the message box to the session
	 * specified in the impersonation token. If
	 * this flag is set, the hWnd parameter
	 * must be NULL. This is so that the
	 * message box can appear on a desktop
	 * other than the desktop corresponding to
	 * the hWnd. For information on security
	 * considerations in regard to using this
	 * flag, see Interactive Services. In
	 * particular, be aware that this flag can
	 * produce interactive content on a locked
	 * desktop and should therefore be used for
	 * only a very limited set of scenarios,
	 * such as resource exhaustion.
	 */
	public static final long MB_SERVICE_NOTIFICATION = 0x00200000L;
}
