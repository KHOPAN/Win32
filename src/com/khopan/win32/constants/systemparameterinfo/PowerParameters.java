package com.khopan.win32.constants.systemparameterinfo;

public interface PowerParameters {
	/**
	 * This parameter is not supported. Windows
	 * Server 2003 and Windows XP/2000:
	 * Determines whether the low-power phase
	 * of screen saving is enabled. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if enabled, or FALSE
	 * if disabled. This flag is supported for
	 * 32-bit applications only.
	 */
	public static final int SPI_GETLOWPOWERACTIVE = 0x0053;

	/**
	 * This parameter is not supported. Windows
	 * Server 2003 and Windows XP/2000:
	 * Retrieves the time-out value for the
	 * low-power phase of screen saving. The
	 * pvParam parameter must point to an
	 * integer variable that receives the
	 * value. This flag is supported for 32-bit
	 * applications only.
	 */
	public static final int SPI_GETLOWPOWERTIMEOUT = 0x004F;

	/**
	 * This parameter is not supported. When
	 * the power-off phase of screen saving is
	 * enabled, the
	 * GUID_VIDEO_POWERDOWN_TIMEOUT power
	 * setting is greater than zero. Windows
	 * Server 2003 and Windows XP/2000:
	 * Determines whether the power-off phase
	 * of screen saving is enabled. The pvParam
	 * parameter must point to a BOOL variable
	 * that receives TRUE if enabled, or FALSE
	 * if disabled. This flag is supported for
	 * 32-bit applications only.
	 */
	public static final int SPI_GETPOWEROFFACTIVE = 0x0054;

	/**
	 * This parameter is not supported.
	 * Instead, check the
	 * GUID_VIDEO_POWERDOWN_TIMEOUT power
	 * setting. Windows Server 2003 and Windows
	 * XP/2000: Retrieves the time-out value
	 * for the power-off phase of screen
	 * saving. The pvParam parameter must point
	 * to an integer variable that receives the
	 * value. This flag is supported for 32-bit
	 * applications only.
	 */
	public static final int SPI_GETPOWEROFFTIMEOUT = 0x0050;

	/**
	 * This parameter is not supported. Windows
	 * Server 2003 and Windows XP/2000:
	 * Activates or deactivates the low-power
	 * phase of screen saving. Set uiParam to 1
	 * to activate, or zero to deactivate. The
	 * pvParam parameter must be NULL. This
	 * flag is supported for 32-bit
	 * applications only.
	 */
	public static final int SPI_SETLOWPOWERACTIVE = 0x0055;

	/**
	 * This parameter is not supported. Windows
	 * Server 2003 and Windows XP/2000: Sets
	 * the time-out value, in seconds, for the
	 * low-power phase of screen saving. The
	 * uiParam parameter specifies the new
	 * value. The pvParam parameter must be
	 * NULL. This flag is supported for 32-bit
	 * applications only.
	 */
	public static final int SPI_SETLOWPOWERTIMEOUT = 0x0051;

	/**
	 * This parameter is not supported.
	 * Instead, set the
	 * GUID_VIDEO_POWERDOWN_TIMEOUT power
	 * setting. Windows Server 2003 and Windows
	 * XP/2000: Activates or deactivates the
	 * power-off phase of screen saving. Set
	 * uiParam to 1 to activate, or zero to
	 * deactivate. The pvParam parameter must
	 * be NULL. This flag is supported for
	 * 32-bit applications only.
	 */
	public static final int SPI_SETPOWEROFFACTIVE = 0x0056;

	/**
	 * This parameter is not supported.
	 * Instead, set the
	 * GUID_VIDEO_POWERDOWN_TIMEOUT power
	 * setting to a time-out value. Windows
	 * Server 2003 and Windows XP/2000: Sets
	 * the time-out value, in seconds, for the
	 * power-off phase of screen saving. The
	 * uiParam parameter specifies the new
	 * value. The pvParam parameter must be
	 * NULL. This flag is supported for 32-bit
	 * applications only.
	 */
	public static final int SPI_SETPOWEROFFTIMEOUT = 0x0052;
}
