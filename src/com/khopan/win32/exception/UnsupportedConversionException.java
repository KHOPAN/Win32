package com.khopan.win32.exception;

public class UnsupportedConversionException extends RuntimeException {
	private static final long serialVersionUID = -495593376626982841L;

	public UnsupportedConversionException() {
		super();
	}

	public UnsupportedConversionException(String message) {
		super(message);
	}

	public UnsupportedConversionException(String message, Throwable cause) {
		super(message, cause);
	}

	public UnsupportedConversionException(Throwable cause) {
		super(cause);
	}

	public UnsupportedConversionException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
