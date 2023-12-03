package com.khopan.win32.exception;

public class ClassNotFoundException extends RuntimeException {
	private static final long serialVersionUID = 4208603438273353650L;

	public ClassNotFoundException() {
		super();
	}

	public ClassNotFoundException(String message) {
		super(message);
	}

	public ClassNotFoundException(String message, Throwable cause) {
		super(message, cause);
	}

	public ClassNotFoundException(Throwable cause) {
		super(cause);
	}

	public ClassNotFoundException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
