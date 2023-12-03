package com.khopan.win32.constants.systemparameterinfo;

public interface DesktopParameters {
	/**
	 * Determines whether ClearType is enabled.
	 * The pvParam parameter must point to a
	 * BOOL variable that receives TRUE if
	 * ClearType is enabled, or FALSE
	 * otherwise. ClearType is a software
	 * technology that improves the readability
	 * of text on liquid crystal display (LCD)
	 * monitors. Windows Server 2003 and
	 * Windows XP/2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_GETCLEARTYPE = 0x1048;

	/**
	 * Retrieves the full path of the bitmap
	 * file for the desktop wallpaper. The
	 * pvParam parameter must point to a buffer
	 * to receive the null-terminated path
	 * string. Set the uiParam parameter to the
	 * size, in characters, of the pvParam
	 * buffer. The returned string will not
	 * exceed MAX_PATH characters. If there is
	 * no desktop wallpaper, the returned
	 * string is empty.
	 */
	public static final int SPI_GETDESKWALLPAPER = 0x0073;

	/**
	 * Determines whether the drop shadow
	 * effect is enabled. The pvParam parameter
	 * must point to a BOOL variable that
	 * returns TRUE if enabled or FALSE if
	 * disabled. Windows 2000: This parameter
	 * is not supported.
	 */
	public static final int SPI_GETDROPSHADOW = 0x1024;

	/**
	 * Determines whether native User menus
	 * have flat menu appearance. The pvParam
	 * parameter must point to a BOOL variable
	 * that returns TRUE if the flat menu
	 * appearance is set, or FALSE otherwise.
	 * Windows 2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_GETFLATMENU = 0x1022;

	/**
	 * Determines whether the font smoothing
	 * feature is enabled. This feature uses
	 * font antialiasing to make font curves
	 * appear smoother by painting pixels at
	 * different gray levels. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if the feature is
	 * enabled, or FALSE if it is not.
	 */
	public static final int SPI_GETFONTSMOOTHING = 0x004A;

	/**
	 * Retrieves a contrast value that is used
	 * in ClearType smoothing. The pvParam
	 * parameter must point to a UINT that
	 * receives the information. Valid contrast
	 * values are from 1000 to 2200. The
	 * default value is 1400. Windows 2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_GETFONTSMOOTHINGCONTRAST = 0x200C;

	/**
	 * Retrieves the font smoothing
	 * orientation. The pvParam parameter must
	 * point to a UINT that receives the
	 * information. The possible values are
	 * FE_FONTSMOOTHINGORIENTATIONBGR
	 * (blue-green-red) and
	 * FE_FONTSMOOTHINGORIENTATIONRGB
	 * (red-green-blue). Windows XP/2000: This
	 * parameter is not supported until Windows
	 * XP with SP2.
	 */
	public static final int SPI_GETFONTSMOOTHINGORIENTATION = 0x2012;

	/**
	 * Retrieves the type of font smoothing.
	 * The pvParam parameter must point to a
	 * UINT that receives the information. The
	 * possible values are
	 * FE_FONTSMOOTHINGSTANDARD and
	 * FE_FONTSMOOTHINGCLEARTYPE. Windows 2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_GETFONTSMOOTHINGTYPE = 0x200A;

	/**
	 * Retrieves the size of the work area on
	 * the primary display monitor. The work
	 * area is the portion of the screen not
	 * obscured by the system taskbar or by
	 * application desktop toolbars. The
	 * pvParam parameter must point to a RECT
	 * structure that receives the coordinates
	 * of the work area, expressed in physical
	 * pixel size. Any DPI virtualization mode
	 * of the caller has no effect on this
	 * output. To get the work area of a
	 * monitor other than the primary display
	 * monitor, call the GetMonitorInfo
	 * function.
	 */
	public static final int SPI_GETWORKAREA = 0x0030;

	/**
	 * Turns ClearType on or off. The pvParam
	 * parameter is a BOOL variable. Set
	 * pvParam to TRUE to enable ClearType, or
	 * FALSE to disable it. ClearType is a
	 * software technology that improves the
	 * readability of text on LCD monitors.
	 * Windows Server 2003 and Windows XP/2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_SETCLEARTYPE = 0x1049;

	/**
	 * Reloads the system cursors. Set the
	 * uiParam parameter to zero and the
	 * pvParam parameter to NULL.
	 */
	public static final int SPI_SETCURSORS = 0x0057;

	/**
	 * Sets the current desktop pattern by
	 * causing Windows to read the Pattern=
	 * setting from the WIN.INI file.
	 */
	public static final int SPI_SETDESKPATTERN = 0x0015;

	/**
	 * Note When the SPI_SETDESKWALLPAPER flag
	 * is used, SystemParametersInfo returns
	 * TRUE unless there is an error (like when
	 * the specified file doesn't exist).
	 */
	public static final int SPI_SETDESKWALLPAPER = 0x0014;

	/**
	 * Enables or disables the drop shadow
	 * effect. Set pvParam to TRUE to enable
	 * the drop shadow effect or FALSE to
	 * disable it. You must also have
	 * CS_DROPSHADOW in the window class style.
	 * Windows 2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_SETDROPSHADOW = 0x1025;

	/**
	 * Enables or disables flat menu appearance
	 * for native User menus. Set pvParam to
	 * TRUE to enable flat menu appearance or
	 * FALSE to disable it. When enabled, the
	 * menu bar uses COLOR_MENUBAR for the
	 * menubar background, COLOR_MENU for the
	 * menu-popup background, COLOR_MENUHILIGHT
	 * for the fill of the current menu
	 * selection, and COLOR_HILIGHT for the
	 * outline of the current menu selection.
	 * If disabled, menus are drawn using the
	 * same metrics and colors as in Windows
	 * 2000. Windows 2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETFLATMENU = 0x1023;

	/**
	 * Enables or disables the font smoothing
	 * feature, which uses font antialiasing to
	 * make font curves appear smoother by
	 * painting pixels at different gray
	 * levels. To enable the feature, set the
	 * uiParam parameter to TRUE. To disable
	 * the feature, set uiParam to FALSE.
	 */
	public static final int SPI_SETFONTSMOOTHING = 0x004B;

	/**
	 * Sets the contrast value used in
	 * ClearType smoothing. The pvParam
	 * parameter is the contrast value. Valid
	 * contrast values are from 1000 to 2200.
	 * The default value is 1400.
	 * SPI_SETFONTSMOOTHINGTYPE must also be
	 * set to FE_FONTSMOOTHINGCLEARTYPE.
	 * Windows 2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_SETFONTSMOOTHINGCONTRAST = 0x200D;

	/**
	 * Sets the font smoothing orientation. The
	 * pvParam parameter is either
	 * FE_FONTSMOOTHINGORIENTATIONBGR
	 * (blue-green-red) or
	 * FE_FONTSMOOTHINGORIENTATIONRGB
	 * (red-green-blue). Windows XP/2000: This
	 * parameter is not supported until Windows
	 * XP with SP2.
	 */
	public static final int SPI_SETFONTSMOOTHINGORIENTATION = 0x2013;

	/**
	 * Sets the font smoothing type. The
	 * pvParam parameter is either
	 * FE_FONTSMOOTHINGSTANDARD, if standard
	 * anti-aliasing is used, or
	 * FE_FONTSMOOTHINGCLEARTYPE, if ClearType
	 * is used. The default is
	 * FE_FONTSMOOTHINGSTANDARD.
	 * SPI_SETFONTSMOOTHING must also be set.
	 * Windows 2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_SETFONTSMOOTHINGTYPE = 0x200B;

	/**
	 * Sets the size of the work area. The work
	 * area is the portion of the screen not
	 * obscured by the system taskbar or by
	 * application desktop toolbars. The
	 * pvParam parameter is a pointer to a RECT
	 * structure that specifies the new work
	 * area rectangle, expressed in virtual
	 * screen coordinates. In a system with
	 * multiple display monitors, the function
	 * sets the work area of the monitor that
	 * contains the specified rectangle.
	 */
	public static final int SPI_SETWORKAREA = 0x002F;
}
