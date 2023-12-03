package com.khopan.win32.constants.systemparameterinfo;

public interface IconParameters {
	/**
	 * Retrieves the metrics associated with
	 * icons. The pvParam parameter must point
	 * to an ICONMETRICS structure that
	 * receives the information. Set the cbSize
	 * member of this structure and the uiParam
	 * parameter to sizeof(ICONMETRICS).
	 */
	public static final int SPI_GETICONMETRICS = 0x002D;

	/**
	 * Retrieves the logical font information
	 * for the current icon-title font. The
	 * uiParam parameter specifies the size of
	 * a LOGFONT structure, and the pvParam
	 * parameter must point to the LOGFONT
	 * structure to fill in.
	 */
	public static final int SPI_GETICONTITLELOGFONT = 0x001F;

	/**
	 * Determines whether icon-title wrapping
	 * is enabled. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if enabled, or FALSE otherwise.
	 */
	public static final int SPI_GETICONTITLEWRAP = 0x0019;

	/**
	 * Sets or retrieves the width, in pixels,
	 * of an icon cell. The system uses this
	 * rectangle to arrange icons in large icon
	 * view. To set this value, set uiParam to
	 * the new value and set pvParam to NULL.
	 * You cannot set this value to less than
	 * SM_CXICON. To retrieve this value,
	 * pvParam must point to an integer that
	 * receives the current value.
	 */
	public static final int SPI_ICONHORIZONTALSPACING = 0x000D;

	/**
	 * Sets or retrieves the height, in pixels,
	 * of an icon cell. To set this value, set
	 * uiParam to the new value and set pvParam
	 * to NULL. You cannot set this value to
	 * less than SM_CYICON. To retrieve this
	 * value, pvParam must point to an integer
	 * that receives the current value.
	 */
	public static final int SPI_ICONVERTICALSPACING = 0x0018;

	/**
	 * Sets the metrics associated with icons.
	 * The pvParam parameter must point to an
	 * ICONMETRICS structure that contains the
	 * new parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(ICONMETRICS).
	 */
	public static final int SPI_SETICONMETRICS = 0x002E;

	/**
	 * Reloads the system icons. Set the
	 * uiParam parameter to zero and the
	 * pvParam parameter to NULL.
	 */
	public static final int SPI_SETICONS = 0x0058;

	/**
	 * Sets the font that is used for icon
	 * titles. The uiParam parameter specifies
	 * the size of a LOGFONT structure, and the
	 * pvParam parameter must point to a
	 * LOGFONT structure.
	 */
	public static final int SPI_SETICONTITLELOGFONT = 0x0022;

	/**
	 * Turns icon-title wrapping on or off. The
	 * uiParam parameter specifies TRUE for on,
	 * or FALSE for off.
	 */
	public static final int SPI_SETICONTITLEWRAP = 0x001A;
}
