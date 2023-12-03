package com.khopan.win32.constants.systemparameterinfo;

public interface AccessibilityParameters {
	/**
	 * Retrieves information about the time-out
	 * period associated with the accessibility
	 * features. The pvParam parameter must
	 * point to an ACCESSTIMEOUT structure that
	 * receives the information. Set the cbSize
	 * member of this structure and the uiParam
	 * parameter to sizeof(ACCESSTIMEOUT).
	 */
	public static final int SPI_GETACCESSTIMEOUT = 0x003C;

	/**
	 * Determines whether audio descriptions
	 * are enabled or disabled. The pvParam
	 * parameter is a pointer to an
	 * AUDIODESCRIPTION structure. Set the
	 * cbSize member of this structure and the
	 * uiParam parameter to
	 * sizeof(AUDIODESCRIPTION). While it is
	 * possible for users who have visual
	 * impairments to hear the audio in video
	 * content, there is a lot of action in
	 * video that does not have corresponding
	 * audio. Specific audio description of
	 * what is happening in a video helps these
	 * users understand the content better.
	 * This flag enables you to determine
	 * whether audio descriptions have been
	 * enabled and in which language. Windows
	 * Server 2003 and Windows XP/2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_GETAUDIODESCRIPTION = 0x0074;

	/**
	 * Determines whether animations are
	 * enabled or disabled. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if animations are
	 * enabled, or FALSE otherwise. Display
	 * features such as flashing, blinking,
	 * flickering, and moving content can cause
	 * seizures in users with photo-sensitive
	 * epilepsy. This flag enables you to
	 * determine whether such animations have
	 * been disabled in the client area.
	 * Windows Server 2003 and Windows XP/2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_GETCLIENTAREAANIMATION = 0x1042;

	/**
	 * Determines whether overlapped content is
	 * enabled or disabled. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if enabled, or FALSE
	 * otherwise. Display features such as
	 * background images, textured backgrounds,
	 * water marks on documents, alpha
	 * blending, and transparency can reduce
	 * the contrast between the foreground and
	 * background, making it harder for users
	 * with low vision to see objects on the
	 * screen. This flag enables you to
	 * determine whether such overlapped
	 * content has been disabled. Windows
	 * Server 2003 and Windows XP/2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_GETDISABLEOVERLAPPEDCONTENT = 0x1040;

	/**
	 * Retrieves information about the
	 * FilterKeys accessibility feature. The
	 * pvParam parameter must point to a
	 * FILTERKEYS structure that receives the
	 * information. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(FILTERKEYS).
	 */
	public static final int SPI_GETFILTERKEYS = 0x0032;

	/**
	 * Retrieves the height, in pixels, of the
	 * top and bottom edges of the focus
	 * rectangle drawn with DrawFocusRect. The
	 * pvParam parameter must point to a UINT
	 * value. Windows 2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETFOCUSBORDERHEIGHT = 0x2010;

	/**
	 * Retrieves the width, in pixels, of the
	 * left and right edges of the focus
	 * rectangle drawn with DrawFocusRect. The
	 * pvParam parameter must point to a UINT.
	 * Windows 2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_GETFOCUSBORDERWIDTH = 0x200E;

	/**
	 * Retrieves information about the
	 * HighContrast accessibility feature. The
	 * pvParam parameter must point to a
	 * HIGHCONTRAST structure that receives the
	 * information. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(HIGHCONTRAST). For a general
	 * discussion, see Remarks.
	 */
	public static final int SPI_GETHIGHCONTRAST = 0x0042;

	/**
	 * Retrieves a value that determines
	 * whether Windows 8 is displaying apps
	 * using the default scaling plateau for
	 * the hardware or going to the next higher
	 * plateau. This value is based on the
	 * current "Make everything on your screen
	 * bigger" setting, found in the Ease of
	 * Access section of PC settings: 1 is on,
	 * 0 is off. Apps can provide text and
	 * image resources for each of several
	 * scaling plateaus: 100%, 140%, and 180%.
	 * Providing separate resources optimized
	 * for a particular scale avoids distortion
	 * due to resizing. Windows 8 determines
	 * the appropriate scaling plateau based on
	 * a number of factors, including screen
	 * size and pixel density. When "Make
	 * everything on your screen bigger" is
	 * selected (SPI_GETLOGICALDPIOVERRIDE
	 * returns a value of 1), Windows uses
	 * resources from the next higher plateau.
	 * For example, in the case of hardware
	 * that Windows determines should use a
	 * scale of SCALE_100_PERCENT, this
	 * override causes Windows to use the
	 * SCALE_140_PERCENT scale value, assuming
	 * that it does not violate other
	 * constraints. Note You should not use
	 * this value. It might be altered or
	 * unavailable in subsequent versions of
	 * Windows. Instead, use the
	 * GetScaleFactorForDevice function or the
	 * DisplayProperties class to retrieve the
	 * preferred scaling factor. Desktop
	 * applications should use desktop logical
	 * DPI rather than scale factor. Desktop
	 * logical DPI can be retrieved through the
	 * GetDeviceCaps function.
	 */
	public static final int SPI_GETLOGICALDPIOVERRIDE = 0x009E;

	/**
	 * Retrieves the time that notification
	 * pop-ups should be displayed, in seconds.
	 * The pvParam parameter must point to a
	 * ULONG that receives the message
	 * duration. Users with visual impairments
	 * or cognitive conditions such as ADHD and
	 * dyslexia might need a longer time to
	 * read the text in notification messages.
	 * This flag enables you to retrieve the
	 * message duration. Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_GETMESSAGEDURATION = 0x2016;

	/**
	 * Retrieves the state of the Mouse
	 * ClickLock feature. The pvParam parameter
	 * must point to a BOOL variable that
	 * receives TRUE if enabled, or FALSE
	 * otherwise. For more information, see
	 * Mouse Input Overview. Windows 2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_GETMOUSECLICKLOCK = 0x101E;

	/**
	 * Retrieves the time delay before the
	 * primary mouse button is locked. The
	 * pvParam parameter must point to DWORD
	 * that receives the time delay, in
	 * milliseconds. This is only enabled if
	 * SPI_SETMOUSECLICKLOCK is set to TRUE.
	 * For more information, see Mouse Input
	 * Overview. Windows 2000: This parameter
	 * is not supported.
	 */
	public static final int SPI_GETMOUSECLICKLOCKTIME = 0x2008;

	/**
	 * Retrieves information about the
	 * MouseKeys accessibility feature. The
	 * pvParam parameter must point to a
	 * MOUSEKEYS structure that receives the
	 * information. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(MOUSEKEYS).
	 */
	public static final int SPI_GETMOUSEKEYS = 0x0036;

	/**
	 * Retrieves the state of the Mouse Sonar
	 * feature. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if enabled or FALSE otherwise. For
	 * more information, see Mouse Input
	 * Overview. Windows 2000: This parameter
	 * is not supported.
	 */
	public static final int SPI_GETMOUSESONAR = 0x101C;

	/**
	 * Retrieves the state of the Mouse Vanish
	 * feature. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if enabled or FALSE otherwise. For
	 * more information, see Mouse Input
	 * Overview. Windows 2000: This parameter
	 * is not supported.
	 */
	public static final int SPI_GETMOUSEVANISH = 0x1020;

	/**
	 * Determines whether a screen reviewer
	 * utility is running. A screen reviewer
	 * utility directs textual information to
	 * an output device, such as a speech
	 * synthesizer or Braille display. When
	 * this flag is set, an application should
	 * provide textual information in
	 * situations where it would otherwise
	 * present the information graphically. The
	 * pvParam parameter is a pointer to a BOOL
	 * variable that receives TRUE if a screen
	 * reviewer utility is running, or FALSE
	 * otherwise. Note Narrator, the screen
	 * reader that is included with Windows,
	 * does not set the SPI_SETSCREENREADER or
	 * SPI_GETSCREENREADER flags.
	 */
	public static final int SPI_GETSCREENREADER = 0x0046;

	/**
	 * This parameter is not supported. Windows
	 * Server 2003 and Windows XP/2000: The
	 * user should control this setting through
	 * the Control Panel.
	 */
	public static final int SPI_GETSERIALKEYS = 0x003E;

	/**
	 * Determines whether the Show Sounds
	 * accessibility flag is on or off. If it
	 * is on, the user requires an application
	 * to present information visually in
	 * situations where it would otherwise
	 * present the information only in audible
	 * form. The pvParam parameter must point
	 * to a BOOL variable that receives TRUE if
	 * the feature is on, or FALSE if it is
	 * off. Using this value is equivalent to
	 * calling GetSystemMetrics with
	 * SM_SHOWSOUNDS. That is the recommended
	 * call.
	 */
	public static final int SPI_GETSHOWSOUNDS = 0x0038;

	/**
	 * Retrieves information about the
	 * SoundSentry accessibility feature. The
	 * pvParam parameter must point to a
	 * SOUNDSENTRY structure that receives the
	 * information. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(SOUNDSENTRY).
	 */
	public static final int SPI_GETSOUNDSENTRY = 0x0040;

	/**
	 * Retrieves information about the
	 * StickyKeys accessibility feature. The
	 * pvParam parameter must point to a
	 * STICKYKEYS structure that receives the
	 * information. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(STICKYKEYS).
	 */
	public static final int SPI_GETSTICKYKEYS = 0x003A;

	/**
	 * Retrieves information about the
	 * ToggleKeys accessibility feature. The
	 * pvParam parameter must point to a
	 * TOGGLEKEYS structure that receives the
	 * information. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(TOGGLEKEYS).
	 */
	public static final int SPI_GETTOGGLEKEYS = 0x0034;

	/**
	 * Sets the time-out period associated with
	 * the accessibility features. The pvParam
	 * parameter must point to an ACCESSTIMEOUT
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(ACCESSTIMEOUT).
	 */
	public static final int SPI_SETACCESSTIMEOUT = 0x003D;

	/**
	 * Turns the audio descriptions feature on
	 * or off. The pvParam parameter is a
	 * pointer to an AUDIODESCRIPTION
	 * structure. While it is possible for
	 * users who are visually impaired to hear
	 * the audio in video content, there is a
	 * lot of action in video that does not
	 * have corresponding audio. Specific audio
	 * description of what is happening in a
	 * video helps these users understand the
	 * content better. This flag enables you to
	 * enable or disable audio descriptions in
	 * the languages they are provided in.
	 * Windows Server 2003 and Windows XP/2000:
	 * This parameter is not supported.
	 */
	public static final int SPI_SETAUDIODESCRIPTION = 0x0075;

	/**
	 * Turns client area animations on or off.
	 * The pvParam parameter is a BOOL
	 * variable. Set pvParam to TRUE to enable
	 * animations and other transient effects
	 * in the client area, or FALSE to disable
	 * them. Display features such as flashing,
	 * blinking, flickering, and moving content
	 * can cause seizures in users with
	 * photo-sensitive epilepsy. This flag
	 * enables you to enable or disable all
	 * such animations. Windows Server 2003 and
	 * Windows XP/2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_SETCLIENTAREAANIMATION = 0x1043;

	/**
	 * Turns overlapped content (such as
	 * background images and watermarks) on or
	 * off. The pvParam parameter is a BOOL
	 * variable. Set pvParam to TRUE to disable
	 * overlapped content, or FALSE to enable
	 * overlapped content. Display features
	 * such as background images, textured
	 * backgrounds, water marks on documents,
	 * alpha blending, and transparency can
	 * reduce the contrast between the
	 * foreground and background, making it
	 * harder for users with low vision to see
	 * objects on the screen. This flag enables
	 * you to enable or disable all such
	 * overlapped content. Windows Server 2003
	 * and Windows XP/2000: This parameter is
	 * not supported.
	 */
	public static final int SPI_SETDISABLEOVERLAPPEDCONTENT = 0x1041;

	/**
	 * Sets the parameters of the FilterKeys
	 * accessibility feature. The pvParam
	 * parameter must point to a FILTERKEYS
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(FILTERKEYS).
	 */
	public static final int SPI_SETFILTERKEYS = 0x0033;

	/**
	 * Sets the height of the top and bottom
	 * edges of the focus rectangle drawn with
	 * DrawFocusRect to the value of the
	 * pvParam parameter. Windows 2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_SETFOCUSBORDERHEIGHT = 0x2011;

	/**
	 * Sets the height of the left and right
	 * edges of the focus rectangle drawn with
	 * DrawFocusRect to the value of the
	 * pvParam parameter. Windows 2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_SETFOCUSBORDERWIDTH = 0x200F;

	/**
	 * Sets the parameters of the HighContrast
	 * accessibility feature. The pvParam
	 * parameter must point to a HIGHCONTRAST
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(HIGHCONTRAST).
	 */
	public static final int SPI_SETHIGHCONTRAST = 0x0043;

	/**
	 * Do not use.
	 */
	public static final int SPI_SETLOGICALDPIOVERRIDE = 0x009F;

	/**
	 * Sets the time that notification pop-ups
	 * should be displayed, in seconds. The
	 * pvParam parameter specifies the message
	 * duration. Users with visual impairments
	 * or cognitive conditions such as ADHD and
	 * dyslexia might need a longer time to
	 * read the text in notification messages.
	 * This flag enables you to set the message
	 * duration. Windows Server 2003 and
	 * Windows XP/2000: This parameter is not
	 * supported.
	 */
	public static final int SPI_SETMESSAGEDURATION = 0x2017;

	/**
	 * Turns the Mouse ClickLock accessibility
	 * feature on or off. This feature
	 * temporarily locks down the primary mouse
	 * button when that button is clicked and
	 * held down for the time specified by
	 * SPI_SETMOUSECLICKLOCKTIME. The pvParam
	 * parameter specifies TRUE for on, or
	 * FALSE for off. The default is off. For
	 * more information, see Remarks and
	 * AboutMouse Input. Windows 2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_SETMOUSECLICKLOCK = 0x101F;

	/**
	 * Adjusts the time delay before the
	 * primary mouse button is locked. The
	 * uiParam parameter should be set to 0.
	 * The pvParam parameter points to a DWORD
	 * that specifies the time delay in
	 * milliseconds. For example, specify 1000
	 * for a 1 second delay. The default is
	 * 1200. For more information, see Mouse
	 * Input Overview. Windows 2000: This
	 * parameter is not supported.
	 */
	public static final int SPI_SETMOUSECLICKLOCKTIME = 0x2009;

	/**
	 * Sets the parameters of the MouseKeys
	 * accessibility feature. The pvParam
	 * parameter must point to a MOUSEKEYS
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(MOUSEKEYS).
	 */
	public static final int SPI_SETMOUSEKEYS = 0x0037;

	/**
	 * Turns the Sonar accessibility feature on
	 * or off. This feature briefly shows
	 * several concentric circles around the
	 * mouse pointer when the user presses and
	 * releases the CTRL key. The pvParam
	 * parameter specifies TRUE for on and
	 * FALSE for off. The default is off. For
	 * more information, see Mouse Input
	 * Overview. Windows 2000: This parameter
	 * is not supported.
	 */
	public static final int SPI_SETMOUSESONAR = 0x101D;

	/**
	 * Turns the Vanish feature on or off. This
	 * feature hides the mouse pointer when the
	 * user types; the pointer reappears when
	 * the user moves the mouse. The pvParam
	 * parameter specifies TRUE for on and
	 * FALSE for off. The default is off. For
	 * more information, see Mouse Input
	 * Overview. Windows 2000: This parameter
	 * is not supported.
	 */
	public static final int SPI_SETMOUSEVANISH = 0x1021;

	/**
	 * Determines whether a screen review
	 * utility is running. The uiParam
	 * parameter specifies TRUE for on, or
	 * FALSE for off. Note Narrator, the screen
	 * reader that is included with Windows,
	 * does not set the SPI_SETSCREENREADER or
	 * SPI_GETSCREENREADER flags.
	 */
	public static final int SPI_SETSCREENREADER = 0x0047;

	/**
	 * This parameter is not supported. Windows
	 * Server 2003 and Windows XP/2000: The
	 * user should control this setting through
	 * the Control Panel.
	 */
	public static final int SPI_SETSERIALKEYS = 0x003F;

	/**
	 * Turns the ShowSounds accessibility
	 * feature on or off. The uiParam parameter
	 * specifies TRUE for on, or FALSE for off.
	 */
	public static final int SPI_SETSHOWSOUNDS = 0x0039;

	/**
	 * Sets the parameters of the SoundSentry
	 * accessibility feature. The pvParam
	 * parameter must point to a SOUNDSENTRY
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(SOUNDSENTRY).
	 */
	public static final int SPI_SETSOUNDSENTRY = 0x0041;

	/**
	 * Sets the parameters of the StickyKeys
	 * accessibility feature. The pvParam
	 * parameter must point to a STICKYKEYS
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(STICKYKEYS).
	 */
	public static final int SPI_SETSTICKYKEYS = 0x003B;

	/**
	 * Sets the parameters of the ToggleKeys
	 * accessibility feature. The pvParam
	 * parameter must point to a TOGGLEKEYS
	 * structure that contains the new
	 * parameters. Set the cbSize member of
	 * this structure and the uiParam parameter
	 * to sizeof(TOGGLEKEYS).
	 */
	public static final int SPI_SETTOGGLEKEYS = 0x0035;
}
