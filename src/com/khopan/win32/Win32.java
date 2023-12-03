package com.khopan.win32;

import com.khopan.win32.constants.CoInit;
import com.khopan.win32.constants.DrawTextFormat;
import com.khopan.win32.constants.HBRUSHTypes;
import com.khopan.win32.constants.HRESULT;
import com.khopan.win32.constants.HWNDInsertAfter;
import com.khopan.win32.constants.MouseCursors;
import com.khopan.win32.constants.MouseNotifications;
import com.khopan.win32.constants.PaintMessages;
import com.khopan.win32.constants.RasterOperations;
import com.khopan.win32.constants.RawInputNotifications;
import com.khopan.win32.constants.SetWindowPosFlags;
import com.khopan.win32.constants.ShowWindow;
import com.khopan.win32.constants.StockObjects;
import com.khopan.win32.constants.SystemMetrics;
import com.khopan.win32.constants.button.ButtonStyles;
import com.khopan.win32.constants.keyboard.KeyboardMessages;
import com.khopan.win32.constants.keyboard.KeyboardNotifications;
import com.khopan.win32.constants.systemparameterinfo.AccessibilityParameters;
import com.khopan.win32.constants.systemparameterinfo.DesktopParameters;
import com.khopan.win32.constants.systemparameterinfo.IconParameters;
import com.khopan.win32.constants.systemparameterinfo.InputParameters;
import com.khopan.win32.constants.systemparameterinfo.MenuParameters;
import com.khopan.win32.constants.systemparameterinfo.PowerParameters;
import com.khopan.win32.constants.systemparameterinfo.ScreenSaverParameters;
import com.khopan.win32.constants.systemparameterinfo.TimeOutParameters;
import com.khopan.win32.constants.systemparameterinfo.UIEffectParameters;
import com.khopan.win32.constants.systemparameterinfo.WindowParameters;
import com.khopan.win32.constants.window.WindowClassStyles;
import com.khopan.win32.constants.window.WindowExtendedStyles;
import com.khopan.win32.constants.window.WindowMessages;
import com.khopan.win32.constants.window.WindowNotifications;
import com.khopan.win32.constants.window.WindowStyles;
import com.khopan.win32.struct.holder.BITMAPINFO;
import com.khopan.win32.struct.holder.BITMAPINFOHEADER;
import com.khopan.win32.struct.holder.LOGFONT;
import com.khopan.win32.struct.holder.MSG;
import com.khopan.win32.struct.holder.PAINTSTRUCT;
import com.khopan.win32.struct.holder.POINT;
import com.khopan.win32.struct.holder.RECT;
import com.khopan.win32.struct.holder.WNDCLASS;
import com.khopan.win32.struct.memory.HBITMAP;
import com.khopan.win32.struct.memory.HBRUSH;
import com.khopan.win32.struct.memory.HCURSOR;
import com.khopan.win32.struct.memory.HDC;
import com.khopan.win32.struct.memory.HFONT;
import com.khopan.win32.struct.memory.HINSTANCE;
import com.khopan.win32.struct.memory.HMENU;
import com.khopan.win32.struct.memory.HPEN;
import com.khopan.win32.struct.memory.HWND;
import com.khopan.win32.struct.memory.LPVOID;

public class Win32 implements
MouseCursors,
StockObjects,
WindowStyles,
WindowExtendedStyles,
WindowMessages,
WindowNotifications,
ButtonStyles,
PaintMessages,
AccessibilityParameters,
DesktopParameters,
IconParameters,
InputParameters,
MenuParameters,
PowerParameters,
ScreenSaverParameters,
TimeOutParameters,
UIEffectParameters, 
WindowParameters,
SystemMetrics,
KeyboardMessages,
KeyboardNotifications,
MouseNotifications,
RawInputNotifications,
DrawTextFormat,
RasterOperations,
WindowClassStyles,
HBRUSHTypes,
HWNDInsertAfter,
SetWindowPosFlags,
ShowWindow,
CoInit,
HRESULT {
	private Win32() {}

	static {
		NativeLibrary.load();
	}

	public static final String VERSION = "1.0.0";

	public static native HDC BeginPaint(HWND hWnd, PAINTSTRUCT lpPaint);
	public static native int BitBlt(HDC hdc, int x, int y, int cx, int cy, HDC hdcSrc, int x1, int y1, long rop);
	public static native long CoInitialize(LPVOID pvReserved);
	public static native long CoInitializeEx(LPVOID pvReserved, long dwCoInit);
	public static native void CoUninitialize();
	public static native HBITMAP CreateCompatibleBitmap(HDC hdc, int cx, int cy);
	public static native HDC CreateCompatibleDC(HDC hdc);
	public static native HFONT CreateFontIndirect(LOGFONT lplf);
	public static native HPEN CreatePen(int iStyle, int cWidth, long color);
	public static native HBRUSH CreateSolidBrush(long color);
	public static native HWND CreateWindowEx(long dwExStyle, String lpClassName, String lpWindowName, long dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);
	public static native long DefWindowProc(HWND hWnd, int Msg, long wParam, long lParam);
	public static native int DeleteDC(HDC hdc);
	public static native int DeleteObject(long ho);
	public static native int DestroyWindow(HWND hWnd);
	public static native long DispatchMessage(MSG lpMsg);
	public static native int DrawText(HDC hdc, String lpchText, int cchText, RECT lprc, int format);
	public static native int EndPaint(HWND hWnd, PAINTSTRUCT lpPaint);
	public static native int ExitWindowsEx(int uFlags, long dwReason);
	public static native int FillRect(HDC hDC, RECT lprc, HBRUSH hbr);
	public static native int GetClientRect(HWND hWnd, RECT lpRect);
	public static native long GetLastError();
	public static native int GetMessage(MSG lpMsg, HWND hWnd, int wMsgFilterMin, int wMsgFilterMax);
	public static native HINSTANCE GetModuleHandle(String lpModuleName);
	public static native long GetStockObject(int i);
	public static native int GetSystemMetrics(int nIndex);
	public static native int InitiateSystemShutdown(String lpMachineName, String lpMessage, long dwTimeout, boolean bForceAppsClosed, boolean bRebootAfterShutdown);
	public static native int InitiateSystemShutdownEx(String lpMachineName, String lpMessage, long dwTimeout, boolean bForceAppsClosed, boolean bRebootAfterShutdown, long dwReason);
	public static native int InvalidateRect(HWND hWnd, RECT lpRect, boolean bErase);
	public static native HCURSOR LoadCursor(HINSTANCE hInstance, int cursorType);
	public static native long MFShutdown();
	public static native long MFStartup(long Version, long dwFlags);
	public static native int Polygon(HDC hdc, POINT[] apt, int cpt);
	public static native void PostQuitMessage(int nExitCode);
	public static native int RegisterClass(WNDCLASS lpWndClass);
	public static native int SystemParametersInfo(int uiAction, int uiParam, long pvParam, int fWinIni);
	public static native long SelectObject(HDC hdc, long h);
	public static native long SendMessage(HWND hWnd, int Msg, long wParam, long lParam);
	public static native long SetBkColor(HDC hdc, long color);
	public static native long SetDCBrushColor(HDC hdc, long color);
	public static native long SetDCPenColor(HDC hdc, long color);
	public static native int SetDIBitsToDevice(HDC hdc, int xDest, int yDest, long w, long h, int xSrc, int ySrc, int StartScan, int cLines, int[] lpvBits, BITMAPINFO lpbmi, int ColorUse);
	public static native long SetTextColor(HDC hdc, long color);
	public static native int SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, int uFlags);
	public static native int ShowWindow(HWND hWnd, int nCmdShow);
	public static native int TranslateMessage(MSG lpMsg);

	public static HWND CreateWindow(String lpClassName, String lpWindowName, long dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam) {
		return Win32.CreateWindowEx(0L, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
	}

	public static int SetDIBitsToDevice(HDC hdc, int xDest, int yDest, long w, long h, int xSrc, int ySrc, int StartScan, int cLines, int[] lpvBits, BITMAPINFOHEADER lpbmih, int ColorUse) {
		BITMAPINFO info = new BITMAPINFO();
		info.bmiHeader = lpbmih;
		return Win32.SetDIBitsToDevice(hdc, xDest, yDest, w, h, xSrc, ySrc, StartScan, cLines, lpvBits, info, ColorUse);
	}

	public static boolean SUCCEEDED(long hr) {
		return hr >= 0;
	}

	public static boolean FAILED(long hr) {
		return hr < 0;
	}

	/**
	 * Utilities used for format an error message
	 * from GetLastError(), because implementing
	 * the function FormatMessageW() would be
	 * such a pain
	 *
	 * @param errorCode the error code from GetLastError()
	 * @return a formatted error string, or null if there
	 * is no error
	 */
	public static native String FormatErrorMessage(long errorCode);
}
