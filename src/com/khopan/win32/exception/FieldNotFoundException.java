package com.khopan.win32.exception;

public class FieldNotFoundException extends RuntimeException {
	private static final long serialVersionUID = 7631736239833750859L;

	public FieldNotFoundException() {
		super();
	}

	public FieldNotFoundException(String message) {
		super(message);
	}

	public FieldNotFoundException(String message, Throwable cause) {
		super(message, cause);
	}

	public FieldNotFoundException(Throwable cause) {
		super(cause);
	}

	public FieldNotFoundException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
