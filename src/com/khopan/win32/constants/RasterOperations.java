package com.khopan.win32.constants;

public interface RasterOperations {
	/**
	 * Fills the destination rectangle using
	 * the color associated with index 0 in the
	 * physical palette. (This color is black
	 * for the default physical palette.)
	 */
	public static final int BLACKNESS = 0x00000042;

	/**
	 * Includes any windows that are layered on
	 * top of your window in the resulting
	 * image. By default, the image only
	 * contains your window. Note that this
	 * generally cannot be used for printing
	 * device contexts.
	 */
	public static final int CAPTUREBLT = 0x40000000;

	/**
	 * Inverts the destination rectangle.
	 */
	public static final int DSTINVERT = 0x00550009;

	/**
	 * Merges the colors of the source
	 * rectangle with the brush currently
	 * selected in hdcDest, by using the
	 * Boolean AND operator.
	 */
	public static final int MERGECOPY = 0x00C000CA;

	/**
	 * Merges the colors of the inverted source
	 * rectangle with the colors of the
	 * destination rectangle by using the
	 * Boolean OR operator.
	 */
	public static final int MERGEPAINT = 0x00BB0226;

	/**
	 * Prevents the bitmap from being mirrored.
	 */
	public static final int NOMIRRORBITMAP = 0x80000000;

	/**
	 * Copies the inverted source rectangle to
	 * the destination.
	 */
	public static final int NOTSRCCOPY = 0x00330008;

	/**
	 * Combines the colors of the source and
	 * destination rectangles by using the
	 * Boolean OR operator and then inverts the
	 * resultant color.
	 */
	public static final int NOTSRCERASE = 0x001100A6;

	/**
	 * Copies the brush currently selected in
	 * hdcDest, into the destination bitmap.
	 */
	public static final int PATCOPY = 0x00F00021;

	/**
	 * Combines the colors of the brush
	 * currently selected in hdcDest, with the
	 * colors of the destination rectangle by
	 * using the Boolean XOR operator.
	 */
	public static final int PATINVERT = 0x005A0049;

	/**
	 * Combines the colors of the brush
	 * currently selected in hdcDest, with the
	 * colors of the inverted source rectangle
	 * by using the Boolean OR operator. The
	 * result of this operation is combined
	 * with the colors of the destination
	 * rectangle by using the Boolean OR
	 * operator.
	 */
	public static final int PATPAINT = 0x00FB0A09;

	/**
	 * Combines the colors of the source and
	 * destination rectangles by using the
	 * Boolean AND operator.
	 */
	public static final int SRCAND = 0x008800C6;

	/**
	 * Copies the source rectangle directly to
	 * the destination rectangle.
	 */
	public static final int SRCCOPY = 0x00CC0020;

	/**
	 * Combines the inverted colors of the
	 * destination rectangle with the colors of
	 * the source rectangle by using the
	 * Boolean AND operator.
	 */
	public static final int SRCERASE = 0x00440328;

	/**
	 * Combines the colors of the source and
	 * destination rectangles by using the
	 * Boolean XOR operator.
	 */
	public static final int SRCINVERT = 0x00660046;

	/**
	 * Combines the colors of the source and
	 * destination rectangles by using the
	 * Boolean OR operator.
	 */
	public static final int SRCPAINT = 0x00EE0086;

	/**
	 * Fills the destination rectangle using
	 * the color associated with index 1 in the
	 * physical palette. (This color is white
	 * for the default physical palette.)
	 */
	public static final int WHITENESS = 0x00FF0062;
}
