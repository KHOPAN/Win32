package com.khopan.win32.exception;

public class ConstructorNotFoundException extends RuntimeException {
	private static final long serialVersionUID = 1443860454936872027L;

	public ConstructorNotFoundException() {
		super();
	}

	public ConstructorNotFoundException(String message) {
		super(message);
	}

	public ConstructorNotFoundException(String message, Throwable cause) {
		super(message, cause);
	}

	public ConstructorNotFoundException(Throwable cause) {
		super(cause);
	}

	public ConstructorNotFoundException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
