package com.khopan.win32.constants.messagebox;

public interface MessageBoxModal {
	/**
	 * The user must respond to the message box
	 * before continuing work in the window
	 * identified by the hWnd parameter.
	 * However, the user can move to the
	 * windows of other threads and work in
	 * those windows. Depending on the
	 * hierarchy of windows in the application,
	 * the user may be able to move to other
	 * windows within the thread. All child
	 * windows of the parent of the message box
	 * are automatically disabled, but pop-up
	 * windows are not. MB_APPLMODAL is the
	 * default if neither MB_SYSTEMMODAL nor
	 * MB_TASKMODAL is specified.
	 */
	public static final long MB_APPLMODAL = 0x00000000L;

	/**
	 * Same as MB_APPLMODAL except that the
	 * message box has the WS_EX_TOPMOST style.
	 * Use system-modal message boxes to notify
	 * the user of serious, potentially
	 * damaging errors that require immediate
	 * attention (for example, running out of
	 * memory). This flag has no effect on the
	 * user's ability to interact with windows
	 * other than those associated with hWnd.
	 */
	public static final long MB_SYSTEMMODAL = 0x00001000L;

	/**
	 * Same as MB_APPLMODAL except that all the
	 * top-level windows belonging to the
	 * current thread are disabled if the hWnd
	 * parameter is NULL. Use this flag when
	 * the calling application or library does
	 * not have a window handle available but
	 * still needs to prevent input to other
	 * windows in the calling thread without
	 * suspending other threads.
	 */
	public static final long MB_TASKMODAL = 0x00002000L;
}
