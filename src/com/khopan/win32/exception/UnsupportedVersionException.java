package com.khopan.win32.exception;

public class UnsupportedVersionException extends RuntimeException {
	private static final long serialVersionUID = 4837372544486631202L;

	public UnsupportedVersionException() {
		super();
	}

	public UnsupportedVersionException(String message) {
		super(message);
	}

	public UnsupportedVersionException(String message, Throwable cause) {
		super(message, cause);
	}

	public UnsupportedVersionException(Throwable cause) {
		super(cause);
	}

	public UnsupportedVersionException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
