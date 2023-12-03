package com.khopan.win32.exception;

public class NullFieldException extends RuntimeException {
	private static final long serialVersionUID = -8913689431190215137L;

	public NullFieldException() {
		super();
	}

	public NullFieldException(String message) {
		super(message);
	}

	public NullFieldException(String message, Throwable cause) {
		super(message, cause);
	}

	public NullFieldException(Throwable cause) {
		super(cause);
	}

	public NullFieldException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
