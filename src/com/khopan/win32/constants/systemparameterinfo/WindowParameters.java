package com.khopan.win32.constants.systemparameterinfo;

public interface WindowParameters {
	/**
	 * Determines whether active window
	 * tracking (activating the window the
	 * mouse is on) is on or off. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE for on, or FALSE for
	 * off.
	 */
	public static final int SPI_GETACTIVEWINDOWTRACKING = 0x1000;

	/**
	 * Determines whether windows activated
	 * through active window tracking will be
	 * brought to the top. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE for on, or FALSE for
	 * off.
	 */
	public static final int SPI_GETACTIVEWNDTRKZORDER = 0x100C;

	/**
	 * Retrieves the active window tracking
	 * delay, in milliseconds. The pvParam
	 * parameter must point to a DWORD variable
	 * that receives the time.
	 */
	public static final int SPI_GETACTIVEWNDTRKTIMEOUT = 0x2002;

	/**
	 * Retrieves the animation effects
	 * associated with user actions. The
	 * pvParam parameter must point to an
	 * ANIMATIONINFO structure that receives
	 * the information. Set the cbSize member
	 * of this structure and the uiParam
	 * parameter to sizeof(ANIMATIONINFO).
	 */
	public static final int SPI_GETANIMATION = 0x0048;

	/**
	 * Retrieves the border multiplier factor
	 * that determines the width of a window's
	 * sizing border. The pvParam parameter
	 * must point to an integer variable that
	 * receives this value.
	 */
	public static final int SPI_GETBORDER = 0x0005;

	/**
	 * Retrieves the caret width in edit
	 * controls, in pixels. The pvParam
	 * parameter must point to a DWORD variable
	 * that receives this value.
	 */
	public static final int SPI_GETCARETWIDTH = 0x2006;

	/**
	 * Determines whether a window is docked
	 * when it is moved to the top, left, or
	 * right edges of a monitor or monitor
	 * array. The pvParam parameter must point
	 * to a BOOL variable that receives TRUE if
	 * enabled, or FALSE otherwise. Use
	 * SPI_GETWINARRANGING to determine whether
	 * this behavior is enabled. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETDOCKMOVING = 0x0090;

	/**
	 * Determines whether a maximized window is
	 * restored when its caption bar is
	 * dragged. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if enabled, or FALSE otherwise. Use
	 * SPI_GETWINARRANGING to determine whether
	 * this behavior is enabled. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETDRAGFROMMAXIMIZE = 0x008C;

	/**
	 * Determines whether dragging of full
	 * windows is enabled. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if enabled, or FALSE
	 * otherwise.
	 */
	public static final int SPI_GETDRAGFULLWINDOWS = 0x0026;

	/**
	 * Retrieves the number of times
	 * SetForegroundWindow will flash the
	 * taskbar button when rejecting a
	 * foreground switch request. The pvParam
	 * parameter must point to a DWORD variable
	 * that receives the value.
	 */
	public static final int SPI_GETFOREGROUNDFLASHCOUNT = 0x2004;

	/**
	 * Retrieves the amount of time following
	 * user input, in milliseconds, during
	 * which the system will not allow
	 * applications to force themselves into
	 * the foreground. The pvParam parameter
	 * must point to a DWORD variable that
	 * receives the time.
	 */
	public static final int SPI_GETFOREGROUNDLOCKTIMEOUT = 0x2000;

	/**
	 * Retrieves the metrics associated with
	 * minimized windows. The pvParam parameter
	 * must point to a MINIMIZEDMETRICS
	 * structure that receives the information.
	 * Set the cbSize member of this structure
	 * and the uiParam parameter to
	 * sizeof(MINIMIZEDMETRICS).
	 */
	public static final int SPI_GETMINIMIZEDMETRICS = 0x002B;

	/**
	 * Retrieves the threshold in pixels where
	 * docking behavior is triggered by using a
	 * mouse to drag a window to the edge of a
	 * monitor or monitor array. The default
	 * threshold is 1. The pvParam parameter
	 * must point to a DWORD variable that
	 * receives the value. Use
	 * SPI_GETWINARRANGING to determine whether
	 * this behavior is enabled. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETMOUSEDOCKTHRESHOLD = 0x007E;

	/**
	 * Retrieves the threshold in pixels where
	 * undocking behavior is triggered by using
	 * a mouse to drag a window from the edge
	 * of a monitor or a monitor array toward
	 * the center. The default threshold is 20.
	 * Use SPI_GETWINARRANGING to determine
	 * whether this behavior is enabled.
	 * Windows Server 2008, Windows Vista,
	 * Windows Server 2003 and Windows XP/2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_GETMOUSEDRAGOUTTHRESHOLD = 0x0084;

	/**
	 * Retrieves the threshold in pixels from
	 * the top of a monitor or a monitor array
	 * where a vertically maximized window is
	 * restored when dragged with the mouse.
	 * The default threshold is 50. Use
	 * SPI_GETWINARRANGING to determine whether
	 * this behavior is enabled. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETMOUSESIDEMOVETHRESHOLD = 0x0088;

	/**
	 * Retrieves the metrics associated with
	 * the nonclient area of nonminimized
	 * windows. The pvParam parameter must
	 * point to a NONCLIENTMETRICS structure
	 * that receives the information. Set the
	 * cbSize member of this structure and the
	 * uiParam parameter to
	 * sizeof(NONCLIENTMETRICS). Windows Server
	 * 2003 and Windows XP/2000: See Remarks
	 * for NONCLIENTMETRICS.
	 */
	public static final int SPI_GETNONCLIENTMETRICS = 0x0029;

	/**
	 * Retrieves the threshold in pixels where
	 * docking behavior is triggered by using a
	 * pen to drag a window to the edge of a
	 * monitor or monitor array. The default is
	 * 30. Use SPI_GETWINARRANGING to determine
	 * whether this behavior is enabled.
	 * Windows Server 2008, Windows Vista,
	 * Windows Server 2003 and Windows XP/2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_GETPENDOCKTHRESHOLD = 0x0080;

	/**
	 * Retrieves the threshold in pixels where
	 * undocking behavior is triggered by using
	 * a pen to drag a window from the edge of
	 * a monitor or monitor array toward its
	 * center. The default threshold is 30. Use
	 * SPI_GETWINARRANGING to determine whether
	 * this behavior is enabled. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETPENDRAGOUTTHRESHOLD = 0x0086;

	/**
	 * Retrieves the threshold in pixels from
	 * the top of a monitor or monitor array
	 * where a vertically maximized window is
	 * restored when dragged with the mouse.
	 * The default threshold is 50. Use
	 * SPI_GETWINARRANGING to determine whether
	 * this behavior is enabled. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETPENSIDEMOVETHRESHOLD = 0x008A;

	/**
	 * Determines whether the IME status window
	 * is visible (on a per-user basis). The
	 * pvParam parameter must point to a BOOL
	 * variable that receives TRUE if the
	 * status window is visible, or FALSE if it
	 * is not.
	 */
	public static final int SPI_GETSHOWIMEUI = 0x006E;

	/**
	 * Determines whether a window is
	 * vertically maximized when it is sized to
	 * the top or bottom of a monitor or
	 * monitor array. The pvParam parameter
	 * must point to a BOOL variable that
	 * receives TRUE if enabled, or FALSE
	 * otherwise. Use SPI_GETWINARRANGING to
	 * determine whether this behavior is
	 * enabled. Windows Server 2008, Windows
	 * Vista, Windows Server 2003 and Windows
	 * XP/2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_GETSNAPSIZING = 0x008E;

	/**
	 * Determines whether window arrangement is
	 * enabled. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if enabled, or FALSE otherwise.
	 * Window arrangement reduces the number of
	 * mouse, pen, or touch interactions needed
	 * to move and size top-level windows by
	 * simplifying the default behavior of a
	 * window when it is dragged or sized. The
	 * following parameters retrieve individual
	 * window arrangement settings:
	 * SPI_GETDOCKMOVING
	 * SPI_GETMOUSEDOCKTHRESHOLD
	 * SPI_GETMOUSEDRAGOUTTHRESHOLD
	 * SPI_GETMOUSESIDEMOVETHRESHOLD
	 * SPI_GETPENDOCKTHRESHOLD
	 * SPI_GETPENDRAGOUTTHRESHOLD
	 * SPI_GETPENSIDEMOVETHRESHOLD
	 * SPI_GETSNAPSIZING Windows Server 2008,
	 * Windows Vista, Windows Server 2003 and
	 * Windows XP/2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_GETWINARRANGING = 0x0082;

	/**
	 * Sets active window tracking (activating
	 * the window the mouse is on) either on or
	 * off. Set pvParam to TRUE for on or FALSE
	 * for off.
	 */
	public static final int SPI_SETACTIVEWINDOWTRACKING = 0x1001;

	/**
	 * Determines whether or not windows
	 * activated through active window tracking
	 * should be brought to the top. Set
	 * pvParam to TRUE for on or FALSE for off.
	 */
	public static final int SPI_SETACTIVEWNDTRKZORDER = 0x100D;

	/**
	 * Sets the active window tracking delay.
	 * Set pvParam to the number of
	 * milliseconds to delay before activating
	 * the window under the mouse pointer.
	 */
	public static final int SPI_SETACTIVEWNDTRKTIMEOUT = 0x2003;

	/**
	 * Sets the animation effects associated
	 * with user actions. The pvParam parameter
	 * must point to an ANIMATIONINFO structure
	 * that contains the new parameters. Set
	 * the cbSize member of this structure and
	 * the uiParam parameter to
	 * sizeof(ANIMATIONINFO).
	 */
	public static final int SPI_SETANIMATION = 0x0049;

	/**
	 * Sets the border multiplier factor that
	 * determines the width of a window's
	 * sizing border. The uiParam parameter
	 * specifies the new value.
	 */
	public static final int SPI_SETBORDER = 0x0006;

	/**
	 * Sets the caret width in edit controls.
	 * Set pvParam to the desired width, in
	 * pixels. The default and minimum value is
	 * 1.
	 */
	public static final int SPI_SETCARETWIDTH = 0x2007;

	/**
	 * Sets whether a window is docked when it
	 * is moved to the top, left, or right
	 * docking targets on a monitor or monitor
	 * array. Set pvParam to TRUE for on or
	 * FALSE for off. SPI_GETWINARRANGING must
	 * be TRUE to enable this behavior. Windows
	 * Server 2008, Windows Vista, Windows
	 * Server 2003 and Windows XP/2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_SETDOCKMOVING = 0x0091;

	/**
	 * Sets whether a maximized window is
	 * restored when its caption bar is
	 * dragged. Set pvParam to TRUE for on or
	 * FALSE for off. SPI_GETWINARRANGING must
	 * be TRUE to enable this behavior. Windows
	 * Server 2008, Windows Vista, Windows
	 * Server 2003 and Windows XP/2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_SETDRAGFROMMAXIMIZE = 0x008D;

	/**
	 * Sets dragging of full windows either on
	 * or off. The uiParam parameter specifies
	 * TRUE for on, or FALSE for off.
	 */
	public static final int SPI_SETDRAGFULLWINDOWS = 0x0025;

	/**
	 * Sets the height, in pixels, of the
	 * rectangle used to detect the start of a
	 * drag operation. Set uiParam to the new
	 * value. To retrieve the drag height, call
	 * GetSystemMetrics with the SM_CYDRAG
	 * flag.
	 */
	public static final int SPI_SETDRAGHEIGHT = 0x004D;

	/**
	 * Sets the width, in pixels, of the
	 * rectangle used to detect the start of a
	 * drag operation. Set uiParam to the new
	 * value. To retrieve the drag width, call
	 * GetSystemMetrics with the SM_CXDRAG
	 * flag.
	 */
	public static final int SPI_SETDRAGWIDTH = 0x004C;

	/**
	 * Sets the number of times
	 * SetForegroundWindow will flash the
	 * taskbar button when rejecting a
	 * foreground switch request. Set pvParam
	 * to the number of times to flash.
	 */
	public static final int SPI_SETFOREGROUNDFLASHCOUNT = 0x2005;

	/**
	 * Sets the amount of time following user
	 * input, in milliseconds, during which the
	 * system does not allow applications to
	 * force themselves into the foreground.
	 * Set pvParam to the new time-out value.
	 * The calling thread must be able to
	 * change the foreground window, otherwise
	 * the call fails.
	 */
	public static final int SPI_SETFOREGROUNDLOCKTIMEOUT = 0x2001;

	/**
	 * Sets the metrics associated with
	 * minimized windows. The pvParam parameter
	 * must point to a MINIMIZEDMETRICS
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(MINIMIZEDMETRICS).
	 */
	public static final int SPI_SETMINIMIZEDMETRICS = 0x002C;

	/**
	 * Sets the threshold in pixels where
	 * docking behavior is triggered by using a
	 * mouse to drag a window to the edge of a
	 * monitor or monitor array. The default
	 * threshold is 1. The pvParam parameter
	 * must point to a DWORD variable that
	 * contains the new value.
	 * SPI_GETWINARRANGING must be TRUE to
	 * enable this behavior. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETMOUSEDOCKTHRESHOLD = 0x007F;

	/**
	 * Sets the threshold in pixels where
	 * undocking behavior is triggered by using
	 * a mouse to drag a window from the edge
	 * of a monitor or monitor array to its
	 * center. The default threshold is 20. The
	 * pvParam parameter must point to a DWORD
	 * variable that contains the new value.
	 * SPI_GETWINARRANGING must be TRUE to
	 * enable this behavior. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETMOUSEDRAGOUTTHRESHOLD = 0x0085;

	/**
	 * Sets the threshold in pixels from the
	 * top of the monitor where a vertically
	 * maximized window is restored when
	 * dragged with the mouse. The default
	 * threshold is 50. The pvParam parameter
	 * must point to a DWORD variable that
	 * contains the new value.
	 * SPI_GETWINARRANGING must be TRUE to
	 * enable this behavior. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETMOUSESIDEMOVETHRESHOLD = 0x0089;

	/**
	 * Sets the metrics associated with the
	 * nonclient area of nonminimized windows.
	 * The pvParam parameter must point to a
	 * NONCLIENTMETRICS structure that contains
	 * the new parameters. Set the cbSize
	 * member of this structure and the uiParam
	 * parameter to sizeof(NONCLIENTMETRICS).
	 * Also, the lfHeight member of the LOGFONT
	 * structure must be a negative value.
	 */
	public static final int SPI_SETNONCLIENTMETRICS = 0x002A;

	/**
	 * Sets the threshold in pixels where
	 * docking behavior is triggered by using a
	 * pen to drag a window to the edge of a
	 * monitor or monitor array. The default
	 * threshold is 30. The pvParam parameter
	 * must point to a DWORD variable that
	 * contains the new value.
	 * SPI_GETWINARRANGING must be TRUE to
	 * enable this behavior. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETPENDOCKTHRESHOLD = 0x0081;

	/**
	 * Sets the threshold in pixels where
	 * undocking behavior is triggered by using
	 * a pen to drag a window from the edge of
	 * a monitor or monitor array to its
	 * center. The default threshold is 30. The
	 * pvParam parameter must point to a DWORD
	 * variable that contains the new value.
	 * SPI_GETWINARRANGING must be TRUE to
	 * enable this behavior. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETPENDRAGOUTTHRESHOLD = 0x0087;

	/**
	 * Sets the threshold in pixels from the
	 * top of the monitor where a vertically
	 * maximized window is restored when
	 * dragged with a pen. The default
	 * threshold is 50. The pvParam parameter
	 * must point to a DWORD variable that
	 * contains the new value.
	 * SPI_GETWINARRANGING must be TRUE to
	 * enable this behavior. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETPENSIDEMOVETHRESHOLD = 0x008B;

	/**
	 * Sets whether the IME status window is
	 * visible or not on a per-user basis. The
	 * uiParam parameter specifies TRUE for on
	 * or FALSE for off.
	 */
	public static final int SPI_SETSHOWIMEUI = 0x006F;

	/**
	 * Sets whether a window is vertically
	 * maximized when it is sized to the top or
	 * bottom of the monitor. Set pvParam to
	 * TRUE for on or FALSE for off.
	 * SPI_GETWINARRANGING must be TRUE to
	 * enable this behavior. Windows Server
	 * 2008, Windows Vista, Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETSNAPSIZING = 0x008F;

	/**
	 * Sets whether window arrangement is
	 * enabled. Set pvParam to TRUE for on or
	 * FALSE for off. Window arrangement
	 * reduces the number of mouse, pen, or
	 * touch interactions needed to move and
	 * size top-level windows by simplifying
	 * the default behavior of a window when it
	 * is dragged or sized. The following
	 * parameters set individual window
	 * arrangement settings: SPI_SETDOCKMOVING
	 * SPI_SETMOUSEDOCKTHRESHOLD
	 * SPI_SETMOUSEDRAGOUTTHRESHOLD
	 * SPI_SETMOUSESIDEMOVETHRESHOLD
	 * SPI_SETPENDOCKTHRESHOLD
	 * SPI_SETPENDRAGOUTTHRESHOLD
	 * SPI_SETPENSIDEMOVETHRESHOLD
	 * SPI_SETSNAPSIZING Windows Server 2008,
	 * Windows Vista, Windows Server 2003 and
	 * Windows XP/2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_SETWINARRANGING = 0x0083;
}
