package com.khopan.win32.exception;

public class ArrayTooShortException extends RuntimeException {
	private static final long serialVersionUID = 2405605659420868692L;

	public ArrayTooShortException() {
		super();
	}

	public ArrayTooShortException(String message) {
		super(message);
	}

	public ArrayTooShortException(String message, Throwable cause) {
		super(message, cause);
	}

	public ArrayTooShortException(Throwable cause) {
		super(cause);
	}

	public ArrayTooShortException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
