package com.khopan.win32.constants;

public interface StockObjects {
	/**
	 * Black brush.
	 */
	public static final int BLACK_BRUSH = 0x04;

	/**
	 * Dark gray brush.
	 */
	public static final int DKGRAY_BRUSH = 0x03;

	/**
	 * Solid color brush. The default color
	 * is white. The color can be changed by
	 * using the SetDCBrushColor function.
	 * For more information, see the Remarks
	 * section.
	 */
	public static final int DC_BRUSH = 0x12;

	/**
	 * Gray brush.
	 */
	public static final int GRAY_BRUSH = 0x02;

	/**
	 * Hollow brush (equivalent to NULL_BRUSH).
	 */
	public static final int HOLLOW_BRUSH = 0x05;

	/**
	 * Light gray brush.
	 */
	public static final int LTGRAY_BRUSH = 0x01;

	/**
	 * Null brush (equivalent to HOLLOW_BRUSH).
	 */
	public static final int NULL_BRUSH = 0x05;

	/**
	 * White brush.
	 */
	public static final int WHITE_BRUSH = 0x00;

	/**
	 * Black pen.
	 */
	public static final int BLACK_PEN = 0x07;

	/**
	 * Solid pen color. The default color
	 * is black. The color can be changed by
	 * using the SetDCPenColor function.
	 * For more information, see the Remarks
	 * section.
	 */
	public static final int DC_PEN = 0x13;

	/**
	 * Null pen. The null pen draws nothing.
	 */
	public static final int NULL_PEN = 0x08;

	/**
	 * White pen.
	 */
	public static final int WHITE_PEN = 0x06;

	/**
	 * Windows fixed-pitch (monospace)
	 * system font.
	 */
	public static final int ANSI_FIXED_FONT = 0x0B;

	/**
	 * Windows variable-pitch
	 * (proportional space) system font.
	 */
	public static final int ANSI_VAR_FONT = 0x09;

	/**
	 * Device-dependent font.
	 */
	public static final int DEVICE_DEFAULT_FONT = 0x0E;

	/**
	 * Default font for user interface objects
	 * such as menus and dialog boxes.
	 * It is not recommended that you use
	 * DEFAULT_GUI_FONT or SYSTEM_FONT to
	 * obtain the font used by dialogs and
	 * windows; for more information, see the
	 * remarks section.
	 * The default font is Tahoma.
	 */
	public static final int DEFAULT_GUI_FONT = 0x11;

	/**
	 * Original equipment manufacturer
	 * (OEM) dependent fixed-pitch
	 * (monospace) font.
	 */
	public static final int OEM_FIXED_FONT = 0x0A;

	/**
	 * System font. By default, the system
	 * uses the system font to draw menus,
	 * dialog box controls, and text.
	 * It is not recommended that you use
	 * DEFAULT_GUI_FONT or SYSTEM_FONT to
	 * obtain the font used by dialogs and
	 * windows; for more information, see the
	 * remarks section.
	 * The default system font is Tahoma.
	 */
	public static final int SYSTEM_FONT = 0x0D;

	/**
	 * Fixed-pitch (monospace) system font.
	 * This stock object is provided only for
	 * compatibility with 16-bit Windows
	 * versions earlier than 3.0.
	 */
	public static final int SYSTEM_FIXED_FONT = 0x10;

	/**
	 * Default palette. This palette consists
	 * of the static colors in the system palette.
	 */
	public static final int DEFAULT_PALETTE = 0x0F;
}
