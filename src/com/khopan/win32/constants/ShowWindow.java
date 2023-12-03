package com.khopan.win32.constants;

public interface ShowWindow {
	/**
	 * Hides the window and activates another
	 * window.
	 */
	public static final int SW_HIDE = 0x0000;

	/**
	 * Activates and displays a window. If the
	 * window is minimized, maximized, or
	 * arranged, the system restores it to its
	 * original size and position. An
	 * application should specify this flag
	 * when displaying the window for the first
	 * time.
	 */
	public static final int SW_SHOWNORMAL = 0x0001;

	/**
	 * Activates the window and displays it as
	 * a minimized window.
	 */
	public static final int SW_SHOWMINIMIZED = 0x0002;

	/**
	 * Activates the window and displays it as
	 * a maximized window.
	 */
	public static final int SW_SHOWMAXIMIZED = 0x0003;

	/**
	 * Displays a window in its most recent
	 * size and position. This value is similar
	 * to SW_SHOWNORMAL, except that the window
	 * is not activated.
	 */
	public static final int SW_SHOWNOACTIVATE = 0x0004;

	/**
	 * Activates the window and displays it in
	 * its current size and position.
	 */
	public static final int SW_SHOW = 0x0005;

	/**
	 * Minimizes the specified window and
	 * activates the next top-level window in
	 * the Z order.
	 */
	public static final int SW_MINIMIZE = 0x0006;

	/**
	 * Displays the window as a minimized
	 * window. This value is similar to
	 * SW_SHOWMINIMIZED, except the window is
	 * not activated.
	 */
	public static final int SW_SHOWMINNOACTIVE = 0x0007;

	/**
	 * Displays the window in its current size
	 * and position. This value is similar to
	 * SW_SHOW, except that the window is not
	 * activated.
	 */
	public static final int SW_SHOWNA = 0x0008;

	/**
	 * Activates and displays the window. If
	 * the window is minimized, maximized, or
	 * arranged, the system restores it to its
	 * original size and position. An
	 * application should specify this flag
	 * when restoring a minimized window.
	 */
	public static final int SW_RESTORE = 0x0009;

	/**
	 * Sets the show state based on the SW_
	 * value specified in the STARTUPINFO
	 * structure passed to the CreateProcess
	 * function by the program that started the
	 * application.
	 */
	public static final int SW_SHOWDEFAULT = 0x000A;

	/**
	 * Minimizes a window, even if the thread
	 * that owns the window is not responding.
	 * This flag should only be used when
	 * minimizing windows from a different
	 * thread.
	 */
	public static final int SW_FORCEMINIMIZE = 0x000B;
}
