package com.khopan.win32.constants.systemparameterinfo;

public interface UIEffectParameters {
	/**
	 * Determines whether the slide-open effect
	 * for combo boxes is enabled. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE for enabled, or FALSE
	 * for disabled.
	 */
	public static final int SPI_GETCOMBOBOXANIMATION = 0x1004;

	/**
	 * Determines whether the cursor has a
	 * shadow around it. The pvParam parameter
	 * must point to a BOOL variable that
	 * receives TRUE if the shadow is enabled,
	 * FALSE if it is disabled. This effect
	 * appears only if the system has a color
	 * depth of more than 256 colors.
	 */
	public static final int SPI_GETCURSORSHADOW = 0x101A;

	/**
	 * Determines whether the gradient effect
	 * for window title bars is enabled. The
	 * pvParam parameter must point to a BOOL
	 * variable that receives TRUE for enabled,
	 * or FALSE for disabled. For more
	 * information about the gradient effect,
	 * see the GetSysColor function.
	 */
	public static final int SPI_GETGRADIENTCAPTIONS = 0x1008;

	/**
	 * Determines whether hot tracking of
	 * user-interface elements, such as menu
	 * names on menu bars, is enabled. The
	 * pvParam parameter must point to a BOOL
	 * variable that receives TRUE for enabled,
	 * or FALSE for disabled. Hot tracking
	 * means that when the cursor moves over an
	 * item, it is highlighted but not
	 * selected. You can query this value to
	 * decide whether to use hot tracking in
	 * the user interface of your application.
	 */
	public static final int SPI_GETHOTTRACKING = 0x100E;

	/**
	 * Determines whether the smooth-scrolling
	 * effect for list boxes is enabled. The
	 * pvParam parameter must point to a BOOL
	 * variable that receives TRUE for enabled,
	 * or FALSE for disabled.
	 */
	public static final int SPI_GETLISTBOXSMOOTHSCROLLING = 0x1006;

	/**
	 * Determines whether the menu animation
	 * feature is enabled. This master switch
	 * must be on to enable menu animation
	 * effects. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if animation is enabled and FALSE
	 * if it is disabled. If animation is
	 * enabled, SPI_GETMENUFADE indicates
	 * whether menus use fade or slide
	 * animation.
	 */
	public static final int SPI_GETMENUANIMATION = 0x1002;

	/**
	 * Same as SPI_GETKEYBOARDCUES.
	 */
	public static final int SPI_GETMENUUNDERLINES = 0x100A;

	/**
	 * Determines whether the selection fade
	 * effect is enabled. The pvParam parameter
	 * must point to a BOOL variable that
	 * receives TRUE if enabled or FALSE if
	 * disabled. The selection fade effect
	 * causes the menu item selected by the
	 * user to remain on the screen briefly
	 * while fading out after the menu is
	 * dismissed.
	 */
	public static final int SPI_GETSELECTIONFADE = 0x1014;

	/**
	 * Determines whether ToolTip animation is
	 * enabled. The pvParam parameter must
	 * point to a BOOL variable that receives
	 * TRUE if enabled or FALSE if disabled. If
	 * ToolTip animation is enabled,
	 * SPI_GETTOOLTIPFADE indicates whether
	 * ToolTips use fade or slide animation.
	 */
	public static final int SPI_GETTOOLTIPANIMATION = 0x1016;

	/**
	 * If SPI_SETTOOLTIPANIMATION is enabled,
	 * SPI_GETTOOLTIPFADE indicates whether
	 * ToolTip animation uses a fade effect or
	 * a slide effect. The pvParam parameter
	 * must point to a BOOL variable that
	 * receives TRUE for fade animation or
	 * FALSE for slide animation. For more
	 * information on slide and fade effects,
	 * see AnimateWindow.
	 */
	public static final int SPI_GETTOOLTIPFADE = 0x1018;

	/**
	 * Determines whether UI effects are
	 * enabled or disabled. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if all UI effects are
	 * enabled, or FALSE if they are disabled.
	 */
	public static final int SPI_GETUIEFFECTS = 0x103E;

	/**
	 * Enables or disables the slide-open
	 * effect for combo boxes. Set the pvParam
	 * parameter to TRUE to enable the gradient
	 * effect, or FALSE to disable it.
	 */
	public static final int SPI_SETCOMBOBOXANIMATION = 0x1005;

	/**
	 * Enables or disables a shadow around the
	 * cursor. The pvParam parameter is a BOOL
	 * variable. Set pvParam to TRUE to enable
	 * the shadow or FALSE to disable the
	 * shadow. This effect appears only if the
	 * system has a color depth of more than
	 * 256 colors.
	 */
	public static final int SPI_SETCURSORSHADOW = 0x101B;

	/**
	 * Enables or disables the gradient effect
	 * for window title bars. Set the pvParam
	 * parameter to TRUE to enable it, or FALSE
	 * to disable it. The gradient effect is
	 * possible only if the system has a color
	 * depth of more than 256 colors. For more
	 * information about the gradient effect,
	 * see the GetSysColor function.
	 */
	public static final int SPI_SETGRADIENTCAPTIONS = 0x1009;

	/**
	 * Enables or disables hot tracking of
	 * user-interface elements such as menu
	 * names on menu bars. Set the pvParam
	 * parameter to TRUE to enable it, or FALSE
	 * to disable it. Hot-tracking means that
	 * when the cursor moves over an item, it
	 * is highlighted but not selected.
	 */
	public static final int SPI_SETHOTTRACKING = 0x100F;

	/**
	 * Enables or disables the smooth-scrolling
	 * effect for list boxes. Set the pvParam
	 * parameter to TRUE to enable the
	 * smooth-scrolling effect, or FALSE to
	 * disable it.
	 */
	public static final int SPI_SETLISTBOXSMOOTHSCROLLING = 0x1007;

	/**
	 * Enables or disables menu animation. This
	 * master switch must be on for any menu
	 * animation to occur. The pvParam
	 * parameter is a BOOL variable; set
	 * pvParam to TRUE to enable animation and
	 * FALSE to disable animation. If animation
	 * is enabled, SPI_GETMENUFADE indicates
	 * whether menus use fade or slide
	 * animation.
	 */
	public static final int SPI_SETMENUANIMATION = 0x1003;

	/**
	 * Same as SPI_SETKEYBOARDCUES.
	 */
	public static final int SPI_SETMENUUNDERLINES = 0x100B;

	/**
	 * Set pvParam to TRUE to enable the
	 * selection fade effect or FALSE to
	 * disable it. The selection fade effect
	 * causes the menu item selected by the
	 * user to remain on the screen briefly
	 * while fading out after the menu is
	 * dismissed. The selection fade effect is
	 * possible only if the system has a color
	 * depth of more than 256 colors.
	 */
	public static final int SPI_SETSELECTIONFADE = 0x1015;

	/**
	 * Set pvParam to TRUE to enable ToolTip
	 * animation or FALSE to disable it. If
	 * enabled, you can use SPI_SETTOOLTIPFADE
	 * to specify fade or slide animation.
	 */
	public static final int SPI_SETTOOLTIPANIMATION = 0x1017;

	/**
	 * If the SPI_SETTOOLTIPANIMATION flag is
	 * enabled, use SPI_SETTOOLTIPFADE to
	 * indicate whether ToolTip animation uses
	 * a fade effect or a slide effect. Set
	 * pvParam to TRUE for fade animation or
	 * FALSE for slide animation. The tooltip
	 * fade effect is possible only if the
	 * system has a color depth of more than
	 * 256 colors. For more information on the
	 * slide and fade effects, see the
	 * AnimateWindow function.
	 */
	public static final int SPI_SETTOOLTIPFADE = 0x1019;

	/**
	 * Enables or disables UI effects. Set the
	 * pvParam parameter to TRUE to enable all
	 * UI effects or FALSE to disable all UI
	 * effects.
	 */
	public static final int SPI_SETUIEFFECTS = 0x103F;
}
