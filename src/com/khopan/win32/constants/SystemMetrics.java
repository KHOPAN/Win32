package com.khopan.win32.constants;

public interface SystemMetrics {
	/**
	 * The flags that specify how the system
	 * arranged minimized windows. For more
	 * information, see the Remarks section in
	 * this topic.
	 */
	public static final int SM_ARRANGE = 0x0038;

	/**
	 * The value that specifies how the system
	 * is started: 0 Normal boot 1 Fail-safe
	 * boot 2 Fail-safe with network boot A
	 * fail-safe boot (also called SafeBoot,
	 * Safe Mode, or Clean Boot) bypasses the
	 * user startup files.
	 */
	public static final int SM_CLEANBOOT = 0x0043;

	/**
	 * The number of display monitors on a
	 * desktop. For more information, see the
	 * Remarks section in this topic.
	 */
	public static final int SM_CMONITORS = 0x0050;

	/**
	 * The number of buttons on a mouse, or
	 * zero if no mouse is installed.
	 */
	public static final int SM_CMOUSEBUTTONS = 0x002B;

	/**
	 * Reflects the state of the laptop or
	 * slate mode, 0 for Slate Mode and
	 * non-zero otherwise. When this system
	 * metric changes, the system sends a
	 * broadcast message via WM_SETTINGCHANGE
	 * with "ConvertibleSlateMode" in the
	 * LPARAM. Note that this system metric
	 * doesn't apply to desktop PCs. In that
	 * case, use GetAutoRotationState.
	 */
	public static final int SM_CONVERTIBLESLATEMODE = 0x2003;

	/**
	 * The width of a window border, in pixels.
	 * This is equivalent to the SM_CXEDGE
	 * value for windows with the 3-D look.
	 */
	public static final int SM_CXBORDER = 0x0005;

	/**
	 * The nominal width of a cursor, in
	 * pixels.
	 */
	public static final int SM_CXCURSOR = 0x000D;

	/**
	 * This value is the same as
	 * SM_CXFIXEDFRAME.
	 */
	public static final int SM_CXDLGFRAME = 0x0007;

	/**
	 * The width of the rectangle around the
	 * location of a first click in a
	 * double-click sequence, in pixels. The
	 * second click must occur within the
	 * rectangle that is defined by
	 * SM_CXDOUBLECLK and SM_CYDOUBLECLK for
	 * the system to consider the two clicks a
	 * double-click. The two clicks must also
	 * occur within a specified time. To set
	 * the width of the double-click rectangle,
	 * call SystemParametersInfo with
	 * SPI_SETDOUBLECLKWIDTH.
	 */
	public static final int SM_CXDOUBLECLK = 0x0024;

	/**
	 * The number of pixels on either side of a
	 * mouse-down point that the mouse pointer
	 * can move before a drag operation begins.
	 * This allows the user to click and
	 * release the mouse button easily without
	 * unintentionally starting a drag
	 * operation. If this value is negative, it
	 * is subtracted from the left of the
	 * mouse-down point and added to the right
	 * of it.
	 */
	public static final int SM_CXDRAG = 0x0044;

	/**
	 * The width of a 3-D border, in pixels.
	 * This metric is the 3-D counterpart of
	 * SM_CXBORDER.
	 */
	public static final int SM_CXEDGE = 0x002D;

	/**
	 * The thickness of the frame around the
	 * perimeter of a window that has a caption
	 * but is not sizable, in pixels.
	 * SM_CXFIXEDFRAME is the height of the
	 * horizontal border, and SM_CYFIXEDFRAME
	 * is the width of the vertical border.
	 * This value is the same as SM_CXDLGFRAME.
	 */
	public static final int SM_CXFIXEDFRAME = 0x0007;

	/**
	 * The width of the left and right edges of
	 * the focus rectangle that the
	 * DrawFocusRect draws. This value is in
	 * pixels. Windows 2000: This value is not
	 * supported.
	 */
	public static final int SM_CXFOCUSBORDER = 0x0053;

	/**
	 * This value is the same as
	 * SM_CXSIZEFRAME.
	 */
	public static final int SM_CXFRAME = 0x0020;

	/**
	 * The width of the client area for a
	 * full-screen window on the primary
	 * display monitor, in pixels. To get the
	 * coordinates of the portion of the screen
	 * that is not obscured by the system
	 * taskbar or by application desktop
	 * toolbars, call the SystemParametersInfo
	 * function with the SPI_GETWORKAREA value.
	 */
	public static final int SM_CXFULLSCREEN = 0x0010;

	/**
	 * The width of the arrow bitmap on a
	 * horizontal scroll bar, in pixels.
	 */
	public static final int SM_CXHSCROLL = 0x0015;

	/**
	 * The width of the thumb box in a
	 * horizontal scroll bar, in pixels.
	 */
	public static final int SM_CXHTHUMB = 0x000A;

	/**
	 * The system large width of an icon, in
	 * pixels. The LoadIcon function can load
	 * only icons with the dimensions that
	 * SM_CXICON and SM_CYICON specifies. See
	 * Icon Sizes for more info.
	 */
	public static final int SM_CXICON = 0x000B;

	/**
	 * The width of a grid cell for items in
	 * large icon view, in pixels. Each item
	 * fits into a rectangle of size
	 * SM_CXICONSPACING by SM_CYICONSPACING
	 * when arranged. This value is always
	 * greater than or equal to SM_CXICON.
	 */
	public static final int SM_CXICONSPACING = 0x0026;

	/**
	 * The default width, in pixels, of a
	 * maximized top-level window on the
	 * primary display monitor.
	 */
	public static final int SM_CXMAXIMIZED = 0x003D;

	/**
	 * The default maximum width of a window
	 * that has a caption and sizing borders,
	 * in pixels. This metric refers to the
	 * entire desktop. The user cannot drag the
	 * window frame to a size larger than these
	 * dimensions. A window can override this
	 * value by processing the WM_GETMINMAXINFO
	 * message.
	 */
	public static final int SM_CXMAXTRACK = 0x003B;

	/**
	 * The width of the default menu check-mark
	 * bitmap, in pixels.
	 */
	public static final int SM_CXMENUCHECK = 0x0047;

	/**
	 * The width of menu bar buttons, such as
	 * the child window close button that is
	 * used in the multiple document interface,
	 * in pixels.
	 */
	public static final int SM_CXMENUSIZE = 0x0036;

	/**
	 * The minimum width of a window, in
	 * pixels.
	 */
	public static final int SM_CXMIN = 0x001C;

	/**
	 * The width of a minimized window, in
	 * pixels.
	 */
	public static final int SM_CXMINIMIZED = 0x0039;

	/**
	 * The width of a grid cell for a minimized
	 * window, in pixels. Each minimized window
	 * fits into a rectangle this size when
	 * arranged. This value is always greater
	 * than or equal to SM_CXMINIMIZED.
	 */
	public static final int SM_CXMINSPACING = 0x002F;

	/**
	 * The minimum tracking width of a window,
	 * in pixels. The user cannot drag the
	 * window frame to a size smaller than
	 * these dimensions. A window can override
	 * this value by processing the
	 * WM_GETMINMAXINFO message.
	 */
	public static final int SM_CXMINTRACK = 0x0022;

	/**
	 * The amount of border padding for
	 * captioned windows, in pixels. Windows
	 * XP/2000: This value is not supported.
	 */
	public static final int SM_CXPADDEDBORDER = 0x005C;

	/**
	 * The width of the screen of the primary
	 * display monitor, in pixels. This is the
	 * same value obtained by calling
	 * GetDeviceCaps as follows: GetDeviceCaps(
	 * hdcPrimaryMonitor, HORZRES).
	 */
	public static final int SM_CXSCREEN = 0x0000;

	/**
	 * The width of a button in a window
	 * caption or title bar, in pixels.
	 */
	public static final int SM_CXSIZE = 0x001E;

	/**
	 * The thickness of the sizing border
	 * around the perimeter of a window that
	 * can be resized, in pixels.
	 * SM_CXSIZEFRAME is the width of the
	 * horizontal border, and SM_CYSIZEFRAME is
	 * the height of the vertical border. This
	 * value is the same as SM_CXFRAME.
	 */
	public static final int SM_CXSIZEFRAME = 0x0020;

	/**
	 * The system small width of an icon, in
	 * pixels. Small icons typically appear in
	 * window captions and in small icon view.
	 * See Icon Sizes for more info.
	 */
	public static final int SM_CXSMICON = 0x0031;

	/**
	 * The width of small caption buttons, in
	 * pixels.
	 */
	public static final int SM_CXSMSIZE = 0x0034;

	/**
	 * The width of the virtual screen, in
	 * pixels. The virtual screen is the
	 * bounding rectangle of all display
	 * monitors. The SM_XVIRTUALSCREEN metric
	 * is the coordinates for the left side of
	 * the virtual screen.
	 */
	public static final int SM_CXVIRTUALSCREEN = 0x004E;

	/**
	 * The width of a vertical scroll bar, in
	 * pixels.
	 */
	public static final int SM_CXVSCROLL = 0x0002;

	/**
	 * The height of a window border, in
	 * pixels. This is equivalent to the
	 * SM_CYEDGE value for windows with the 3-D
	 * look.
	 */
	public static final int SM_CYBORDER = 0x0006;

	/**
	 * The height of a caption area, in pixels.
	 */
	public static final int SM_CYCAPTION = 0x0004;

	/**
	 * The nominal height of a cursor, in
	 * pixels.
	 */
	public static final int SM_CYCURSOR = 0x000E;

	/**
	 * This value is the same as
	 * SM_CYFIXEDFRAME.
	 */
	public static final int SM_CYDLGFRAME = 0x0008;

	/**
	 * The height of the rectangle around the
	 * location of a first click in a
	 * double-click sequence, in pixels. The
	 * second click must occur within the
	 * rectangle defined by SM_CXDOUBLECLK and
	 * SM_CYDOUBLECLK for the system to
	 * consider the two clicks a double-click.
	 * The two clicks must also occur within a
	 * specified time. To set the height of the
	 * double-click rectangle, call
	 * SystemParametersInfo with
	 * SPI_SETDOUBLECLKHEIGHT.
	 */
	public static final int SM_CYDOUBLECLK = 0x0025;

	/**
	 * The number of pixels above and below a
	 * mouse-down point that the mouse pointer
	 * can move before a drag operation begins.
	 * This allows the user to click and
	 * release the mouse button easily without
	 * unintentionally starting a drag
	 * operation. If this value is negative, it
	 * is subtracted from above the mouse-down
	 * point and added below it.
	 */
	public static final int SM_CYDRAG = 0x0045;

	/**
	 * The height of a 3-D border, in pixels.
	 * This is the 3-D counterpart of
	 * SM_CYBORDER.
	 */
	public static final int SM_CYEDGE = 0x002E;

	/**
	 * The thickness of the frame around the
	 * perimeter of a window that has a caption
	 * but is not sizable, in pixels.
	 * SM_CXFIXEDFRAME is the height of the
	 * horizontal border, and SM_CYFIXEDFRAME
	 * is the width of the vertical border.
	 * This value is the same as SM_CYDLGFRAME.
	 */
	public static final int SM_CYFIXEDFRAME = 0x0008;

	/**
	 * The height of the top and bottom edges
	 * of the focus rectangle drawn by
	 * DrawFocusRect. This value is in pixels.
	 * Windows 2000: This value is not
	 * supported.
	 */
	public static final int SM_CYFOCUSBORDER = 0x0054;

	/**
	 * This value is the same as
	 * SM_CYSIZEFRAME.
	 */
	public static final int SM_CYFRAME = 0x0021;

	/**
	 * The height of the client area for a
	 * full-screen window on the primary
	 * display monitor, in pixels. To get the
	 * coordinates of the portion of the screen
	 * not obscured by the system taskbar or by
	 * application desktop toolbars, call the
	 * SystemParametersInfo function with the
	 * SPI_GETWORKAREA value.
	 */
	public static final int SM_CYFULLSCREEN = 0x0011;

	/**
	 * The height of a horizontal scroll bar,
	 * in pixels.
	 */
	public static final int SM_CYHSCROLL = 0x0003;

	/**
	 * The system large height of an icon, in
	 * pixels. The LoadIcon function can load
	 * only icons with the dimensions that
	 * SM_CXICON and SM_CYICON specifies. See
	 * Icon Sizes for more info.
	 */
	public static final int SM_CYICON = 0x000C;

	/**
	 * The height of a grid cell for items in
	 * large icon view, in pixels. Each item
	 * fits into a rectangle of size
	 * SM_CXICONSPACING by SM_CYICONSPACING
	 * when arranged. This value is always
	 * greater than or equal to SM_CYICON.
	 */
	public static final int SM_CYICONSPACING = 0x0027;

	/**
	 * For double byte character set versions
	 * of the system, this is the height of the
	 * Kanji window at the bottom of the
	 * screen, in pixels.
	 */
	public static final int SM_CYKANJIWINDOW = 0x0012;

	/**
	 * The default height, in pixels, of a
	 * maximized top-level window on the
	 * primary display monitor.
	 */
	public static final int SM_CYMAXIMIZED = 0x003E;

	/**
	 * The default maximum height of a window
	 * that has a caption and sizing borders,
	 * in pixels. This metric refers to the
	 * entire desktop. The user cannot drag the
	 * window frame to a size larger than these
	 * dimensions. A window can override this
	 * value by processing the WM_GETMINMAXINFO
	 * message.
	 */
	public static final int SM_CYMAXTRACK = 0x003C;

	/**
	 * The height of a single-line menu bar, in
	 * pixels.
	 */
	public static final int SM_CYMENU = 0x000F;

	/**
	 * The height of the default menu
	 * check-mark bitmap, in pixels.
	 */
	public static final int SM_CYMENUCHECK = 0x0048;

	/**
	 * The height of menu bar buttons, such as
	 * the child window close button that is
	 * used in the multiple document interface,
	 * in pixels.
	 */
	public static final int SM_CYMENUSIZE = 0x0037;

	/**
	 * The minimum height of a window, in
	 * pixels.
	 */
	public static final int SM_CYMIN = 0x001D;

	/**
	 * The height of a minimized window, in
	 * pixels.
	 */
	public static final int SM_CYMINIMIZED = 0x003A;

	/**
	 * The height of a grid cell for a
	 * minimized window, in pixels. Each
	 * minimized window fits into a rectangle
	 * this size when arranged. This value is
	 * always greater than or equal to
	 * SM_CYMINIMIZED.
	 */
	public static final int SM_CYMINSPACING = 0x0030;

	/**
	 * The minimum tracking height of a window,
	 * in pixels. The user cannot drag the
	 * window frame to a size smaller than
	 * these dimensions. A window can override
	 * this value by processing the
	 * WM_GETMINMAXINFO message.
	 */
	public static final int SM_CYMINTRACK = 0x0023;

	/**
	 * The height of the screen of the primary
	 * display monitor, in pixels. This is the
	 * same value obtained by calling
	 * GetDeviceCaps as follows: GetDeviceCaps(
	 * hdcPrimaryMonitor, VERTRES).
	 */
	public static final int SM_CYSCREEN = 0x0001;

	/**
	 * The height of a button in a window
	 * caption or title bar, in pixels.
	 */
	public static final int SM_CYSIZE = 0x001F;

	/**
	 * The thickness of the sizing border
	 * around the perimeter of a window that
	 * can be resized, in pixels.
	 * SM_CXSIZEFRAME is the width of the
	 * horizontal border, and SM_CYSIZEFRAME is
	 * the height of the vertical border. This
	 * value is the same as SM_CYFRAME.
	 */
	public static final int SM_CYSIZEFRAME = 0x0021;

	/**
	 * The height of a small caption, in
	 * pixels.
	 */
	public static final int SM_CYSMCAPTION = 0x0033;

	/**
	 * The system small height of an icon, in
	 * pixels. Small icons typically appear in
	 * window captions and in small icon view.
	 * See Icon Sizes for more info.
	 */
	public static final int SM_CYSMICON = 0x0032;

	/**
	 * The height of small caption buttons, in
	 * pixels.
	 */
	public static final int SM_CYSMSIZE = 0x0035;

	/**
	 * The height of the virtual screen, in
	 * pixels. The virtual screen is the
	 * bounding rectangle of all display
	 * monitors. The SM_YVIRTUALSCREEN metric
	 * is the coordinates for the top of the
	 * virtual screen.
	 */
	public static final int SM_CYVIRTUALSCREEN = 0x004F;

	/**
	 * The height of the arrow bitmap on a
	 * vertical scroll bar, in pixels.
	 */
	public static final int SM_CYVSCROLL = 0x0014;

	/**
	 * The height of the thumb box in a
	 * vertical scroll bar, in pixels.
	 */
	public static final int SM_CYVTHUMB = 0x0009;

	/**
	 * Nonzero if User32.dll supports DBCS;
	 * otherwise, 0.
	 */
	public static final int SM_DBCSENABLED = 0x002A;

	/**
	 * Nonzero if the debug version of User.exe
	 * is installed; otherwise, 0.
	 */
	public static final int SM_DEBUG = 0x0016;

	/**
	 * Nonzero if the current operating system
	 * is Windows 7 or Windows Server 2008 R2
	 * and the Tablet PC Input service is
	 * started; otherwise, 0. The return value
	 * is a bitmask that specifies the type of
	 * digitizer input supported by the device.
	 * For more information, see Remarks.
	 * Windows Server 2008, Windows Vista and
	 * Windows XP/2000: This value is not
	 * supported.
	 */
	public static final int SM_DIGITIZER = 0x005E;

	/**
	 * Nonzero if Input Method Manager/Input
	 * Method Editor features are enabled;
	 * otherwise, 0. SM_IMMENABLED indicates
	 * whether the system is ready to use a
	 * Unicode-based IME on a Unicode
	 * application. To ensure that a
	 * language-dependent IME works, check
	 * SM_DBCSENABLED and the system ANSI code
	 * page. Otherwise the ANSI-to-Unicode
	 * conversion may not be performed
	 * correctly, or some components like fonts
	 * or registry settings may not be present.
	 */
	public static final int SM_IMMENABLED = 0x0052;

	/**
	 * Nonzero if there are digitizers in the
	 * system; otherwise, 0. SM_MAXIMUMTOUCHES
	 * returns the aggregate maximum of the
	 * maximum number of contacts supported by
	 * every digitizer in the system. If the
	 * system has only single-touch digitizers,
	 * the return value is 1. If the system has
	 * multi-touch digitizers, the return value
	 * is the number of simultaneous contacts
	 * the hardware can provide. Windows Server
	 * 2008, Windows Vista and Windows XP/2000:
	 * This value is not supported.
	 */
	public static final int SM_MAXIMUMTOUCHES = 0x005F;

	/**
	 * Nonzero if the current operating system
	 * is the Windows XP, Media Center Edition,
	 * 0 if not.
	 */
	public static final int SM_MEDIACENTER = 0x0057;

	/**
	 * Nonzero if drop-down menus are
	 * right-aligned with the corresponding
	 * menu-bar item; 0 if the menus are
	 * left-aligned.
	 */
	public static final int SM_MENUDROPALIGNMENT = 0x0028;

	/**
	 * Nonzero if the system is enabled for
	 * Hebrew and Arabic languages, 0 if not.
	 */
	public static final int SM_MIDEASTENABLED = 0x004A;

	/**
	 * Nonzero if a mouse is installed;
	 * otherwise, 0. This value is rarely zero,
	 * because of support for virtual mice and
	 * because some systems detect the presence
	 * of the port instead of the presence of a
	 * mouse.
	 */
	public static final int SM_MOUSEPRESENT = 0x0013;

	/**
	 * Nonzero if a mouse with a horizontal
	 * scroll wheel is installed; otherwise 0.
	 */
	public static final int SM_MOUSEHORIZONTALWHEELPRESENT = 0x005B;

	/**
	 * Nonzero if a mouse with a vertical
	 * scroll wheel is installed; otherwise 0.
	 */
	public static final int SM_MOUSEWHEELPRESENT = 0x004B;

	/**
	 * The least significant bit is set if a
	 * network is present; otherwise, it is
	 * cleared. The other bits are reserved for
	 * future use.
	 */
	public static final int SM_NETWORK = 0x003F;

	/**
	 * Nonzero if the Microsoft Windows for Pen
	 * computing extensions are installed; zero
	 * otherwise.
	 */
	public static final int SM_PENWINDOWS = 0x0029;

	/**
	 * This system metric is used in a Terminal
	 * Services environment to determine if the
	 * current Terminal Server session is being
	 * remotely controlled. Its value is
	 * nonzero if the current session is
	 * remotely controlled; otherwise, 0. You
	 * can use terminal services management
	 * tools such as Terminal Services Manager
	 * (tsadmin.msc) and shadow.exe to control
	 * a remote session. When a session is
	 * being remotely controlled, another user
	 * can view the contents of that session
	 * and potentially interact with it.
	 */
	public static final int SM_REMOTECONTROL = 0x2001;

	/**
	 * This system metric is used in a Terminal
	 * Services environment. If the calling
	 * process is associated with a Terminal
	 * Services client session, the return
	 * value is nonzero. If the calling process
	 * is associated with the Terminal Services
	 * console session, the return value is 0.
	 * Windows Server 2003 and Windows XP: The
	 * console session is not necessarily the
	 * physical console. For more information,
	 * see WTSGetActiveConsoleSessionId.
	 */
	public static final int SM_REMOTESESSION = 0x1000;

	/**
	 * Nonzero if all the display monitors have
	 * the same color format, otherwise, 0. Two
	 * displays can have the same bit depth,
	 * but different color formats. For
	 * example, the red, green, and blue pixels
	 * can be encoded with different numbers of
	 * bits, or those bits can be located in
	 * different places in a pixel color value.
	 */
	public static final int SM_SAMEDISPLAYFORMAT = 0x0051;

	/**
	 * This system metric should be ignored; it
	 * always returns 0.
	 */
	public static final int SM_SECURE = 0x002C;

	/**
	 * The build number if the system is
	 * Windows Server 2003 R2; otherwise, 0.
	 */
	public static final int SM_SERVERR2 = 0x0059;

	/**
	 * Nonzero if the user requires an
	 * application to present information
	 * visually in situations where it would
	 * otherwise present the information only
	 * in audible form; otherwise, 0.
	 */
	public static final int SM_SHOWSOUNDS = 0x0046;

	/**
	 * Nonzero if the current session is
	 * shutting down; otherwise, 0. Windows
	 * 2000: This value is not supported.
	 */
	public static final int SM_SHUTTINGDOWN = 0x2000;

	/**
	 * Nonzero if the computer has a low-end
	 * (slow) processor; otherwise, 0.
	 */
	public static final int SM_SLOWMACHINE = 0x0049;

	/**
	 * Nonzero if the current operating system
	 * is Windows 7 Starter Edition, Windows
	 * Vista Starter, or Windows XP Starter
	 * Edition; otherwise, 0.
	 */
	public static final int SM_STARTER = 0x0058;

	/**
	 * Nonzero if the meanings of the left and
	 * right mouse buttons are swapped;
	 * otherwise, 0.
	 */
	public static final int SM_SWAPBUTTON = 0x0017;

	/**
	 * Reflects the state of the docking mode,
	 * 0 for Undocked Mode and non-zero
	 * otherwise. When this system metric
	 * changes, the system sends a broadcast
	 * message via WM_SETTINGCHANGE with
	 * "SystemDockMode" in the LPARAM.
	 */
	public static final int SM_SYSTEMDOCKED = 0x2004;

	/**
	 * Nonzero if the current operating system
	 * is the Windows XP Tablet PC edition or
	 * if the current operating system is
	 * Windows Vista or Windows 7 and the
	 * Tablet PC Input service is started;
	 * otherwise, 0. The SM_DIGITIZER setting
	 * indicates the type of digitizer input
	 * supported by a device running Windows 7
	 * or Windows Server 2008 R2. For more
	 * information, see Remarks.
	 */
	public static final int SM_TABLETPC = 0x0056;

	/**
	 * The coordinates for the left side of the
	 * virtual screen. The virtual screen is
	 * the bounding rectangle of all display
	 * monitors. The SM_CXVIRTUALSCREEN metric
	 * is the width of the virtual screen.
	 */
	public static final int SM_XVIRTUALSCREEN = 0x004C;

	/**
	 * The coordinates for the top of the
	 * virtual screen. The virtual screen is
	 * the bounding rectangle of all display
	 * monitors. The SM_CYVIRTUALSCREEN metric
	 * is the height of the virtual screen.
	 */
	public static final int SM_YVIRTUALSCREEN = 0x004D;
}
