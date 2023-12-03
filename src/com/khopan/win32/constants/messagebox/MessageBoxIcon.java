package com.khopan.win32.constants.messagebox;

public interface MessageBoxIcon {
	/**
	 * An exclamation-point icon appears in the
	 * message box.
	 */
	public static final long MB_ICONEXCLAMATION = 0x00000030L;

	/**
	 * An exclamation-point icon appears in the
	 * message box.
	 */
	public static final long MB_ICONWARNING = 0x00000030L;

	/**
	 * An icon consisting of a lowercase letter
	 * i in a circle appears in the message
	 * box.
	 */
	public static final long MB_ICONINFORMATION = 0x00000040L;

	/**
	 * An icon consisting of a lowercase letter
	 * i in a circle appears in the message
	 * box.
	 */
	public static final long MB_ICONASTERISK = 0x00000040L;

	/**
	 * A question-mark icon appears in the
	 * message box. The question-mark message
	 * icon is no longer recommended because it
	 * does not clearly represent a specific
	 * type of message and because the phrasing
	 * of a message as a question could apply
	 * to any message type. In addition, users
	 * can confuse the message symbol question
	 * mark with Help information. Therefore,
	 * do not use this question mark message
	 * symbol in your message boxes. The system
	 * continues to support its inclusion only
	 * for backward compatibility.
	 */
	public static final long MB_ICONQUESTION = 0x00000020L;

	/**
	 * A stop-sign icon appears in the message
	 * box.
	 */
	public static final long MB_ICONSTOP = 0x00000010L;

	/**
	 * A stop-sign icon appears in the message
	 * box.
	 */
	public static final long MB_ICONERROR = 0x00000010L;

	/**
	 * A stop-sign icon appears in the message
	 * box.
	 */
	public static final long MB_ICONHAND = 0x00000010L;
}
