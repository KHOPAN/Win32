package com.khopan.win32.constants;

public interface DrawTextFormat {
	/**
	 * Justifies the text to the bottom of the
	 * rectangle. This value is used only with
	 * the DT_SINGLELINE value.
	 */
	public static final int DT_BOTTOM = 0x00000008;

	/**
	 * Determines the width and height of the
	 * rectangle. If there are multiple lines
	 * of text, DrawText uses the width of the
	 * rectangle pointed to by the lpRect
	 * parameter and extends the base of the
	 * rectangle to bound the last line of
	 * text. If the largest word is wider than
	 * the rectangle, the width is expanded. If
	 * the text is less than the width of the
	 * rectangle, the width is reduced. If
	 * there is only one line of text, DrawText
	 * modifies the right side of the rectangle
	 * so that it bounds the last character in
	 * the line. In either case, DrawText
	 * returns the height of the formatted text
	 * but does not draw the text.
	 */
	public static final int DT_CALCRECT = 0x00000400;

	/**
	 * Centers text horizontally in the
	 * rectangle.
	 */
	public static final int DT_CENTER = 0x00000001;

	/**
	 * Duplicates the text-displaying
	 * characteristics of a multiline edit
	 * control. Specifically, the average
	 * character width is calculated in the
	 * same manner as for an edit control, and
	 * the function does not display a
	 * partially visible last line.
	 */
	public static final int DT_EDITCONTROL = 0x00002000;

	/**
	 * For displayed text, if the end of a
	 * string does not fit in the rectangle, it
	 * is truncated and ellipses are added. If
	 * a word that is not at the end of the
	 * string goes beyond the limits of the
	 * rectangle, it is truncated without
	 * ellipses. The string is not modified
	 * unless the DT_MODIFYSTRING flag is
	 * specified. Compare with DT_PATH_ELLIPSIS
	 * and DT_WORD_ELLIPSIS.
	 */
	public static final int DT_END_ELLIPSIS = 0x00008000;

	/**
	 * Expands tab characters. The default
	 * number of characters per tab is eight.
	 * The DT_WORD_ELLIPSIS, DT_PATH_ELLIPSIS,
	 * and DT_END_ELLIPSIS values cannot be
	 * used with the DT_EXPANDTABS value.
	 */
	public static final int DT_EXPANDTABS = 0x00000040;

	/**
	 * Includes the font external leading in
	 * line height. Normally, external leading
	 * is not included in the height of a line
	 * of text.
	 */
	public static final int DT_EXTERNALLEADING = 0x00000200;

	/**
	 * Ignores the ampersand (&) prefix
	 * character in the text. The letter that
	 * follows will not be underlined, but
	 * other mnemonic-prefix characters are
	 * still processed. Example: input string:
	 * "A&bc&&d" normal: "Abc&d" DT_HIDEPREFIX:
	 * "Abc&d" Compare with DT_NOPREFIX and
	 * DT_PREFIXONLY.
	 */
	public static final int DT_HIDEPREFIX = 0x00100000;

	/**
	 * Uses the system font to calculate text
	 * metrics.
	 */
	public static final int DT_INTERNAL = 0x00001000;

	/**
	 * Aligns text to the left.
	 */
	public static final int DT_LEFT = 0x00000000;

	/**
	 * Modifies the specified string to match
	 * the displayed text. This value has no
	 * effect unless DT_END_ELLIPSIS or
	 * DT_PATH_ELLIPSIS is specified.
	 */
	public static final int DT_MODIFYSTRING = 0x00010000;

	/**
	 * Draws without clipping. DrawText is
	 * somewhat faster when DT_NOCLIP is used.
	 */
	public static final int DT_NOCLIP = 0x00000100;

	/**
	 * Prevents a line break at a DBCS
	 * (double-wide character string), so that
	 * the line breaking rule is equivalent to
	 * SBCS strings. For example, this can be
	 * used in Korean windows, for more
	 * readability of icon labels. This value
	 * has no effect unless DT_WORDBREAK is
	 * specified.
	 */
	public static final int DT_NOFULLWIDTHCHARBREAK = 0x00080000;

	/**
	 * Turns off processing of prefix
	 * characters. Normally, DrawText
	 * interprets the mnemonic-prefix character
	 * & as a directive to underscore the
	 * character that follows, and the
	 * mnemonic-prefix characters && as a
	 * directive to print a single &. By
	 * specifying DT_NOPREFIX, this processing
	 * is turned off. For example, Example:
	 * input string: "A&bc&&d" normal: "Abc&d"
	 * DT_NOPREFIX: "A&bc&&d" Compare with
	 * DT_HIDEPREFIX and DT_PREFIXONLY.
	 */
	public static final int DT_NOPREFIX = 0x00000800;

	/**
	 * For displayed text, replaces characters
	 * in the middle of the string with
	 * ellipses so that the result fits in the
	 * specified rectangle. If the string
	 * contains backslash (\\) characters,
	 * DT_PATH_ELLIPSIS preserves as much as
	 * possible of the text after the last
	 * backslash. The string is not modified
	 * unless the DT_MODIFYSTRING flag is
	 * specified. Compare with DT_END_ELLIPSIS
	 * and DT_WORD_ELLIPSIS.
	 */
	public static final int DT_PATH_ELLIPSIS = 0x00004000;

	/**
	 * Draws only an underline at the position
	 * of the character following the ampersand
	 * (&) prefix character. Does not draw any
	 * other characters in the string. For
	 * example, Example: input string:
	 * "A&bc&&d"n normal: "Abc&d"
	 * DT_PREFIXONLY: " _ " Compare with
	 * DT_HIDEPREFIX and DT_NOPREFIX.
	 */
	public static final int DT_PREFIXONLY = 0x00200000;

	/**
	 * Aligns text to the right.
	 */
	public static final int DT_RIGHT = 0x00000002;

	/**
	 * Layout in right-to-left reading order
	 * for bidirectional text when the font
	 * selected into the hdc is a Hebrew or
	 * Arabic font. The default reading order
	 * for all text is left-to-right.
	 */
	public static final int DT_RTLREADING = 0x00020000;

	/**
	 * Displays text on a single line only.
	 * Carriage returns and line feeds do not
	 * break the line.
	 */
	public static final int DT_SINGLELINE = 0x00000020;

	/**
	 * Sets tab stops. Bits 15-8 (high-order
	 * byte of the low-order word) of the
	 * uFormat parameter specify the number of
	 * characters for each tab. The default
	 * number of characters per tab is eight.
	 * The DT_CALCRECT, DT_EXTERNALLEADING,
	 * DT_INTERNAL, DT_NOCLIP, and DT_NOPREFIX
	 * values cannot be used with the
	 * DT_TABSTOP value.
	 */
	public static final int DT_TABSTOP = 0x00000080;

	/**
	 * Justifies the text to the top of the
	 * rectangle.
	 */
	public static final int DT_TOP = 0x00000000;

	/**
	 * Centers text vertically. This value is
	 * used only with the DT_SINGLELINE value.
	 */
	public static final int DT_VCENTER = 0x00000004;

	/**
	 * Breaks words. Lines are automatically
	 * broken between words if a word would
	 * extend past the edge of the rectangle
	 * specified by the lpRect parameter. A
	 * carriage return-line feed sequence also
	 * breaks the line. If this is not
	 * specified, output is on one line.
	 */
	public static final int DT_WORDBREAK = 0x00000010;

	/**
	 * Truncates any word that does not fit in
	 * the rectangle and adds ellipses. Compare
	 * with DT_END_ELLIPSIS and
	 * DT_PATH_ELLIPSIS.
	 */
	public static final int DT_WORD_ELLIPSIS = 0x00040000;
}
