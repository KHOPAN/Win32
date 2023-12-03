package com.khopan.win32.exception;

public class MethodNotFoundException extends RuntimeException {
	private static final long serialVersionUID = -4244324611117816824L;

	public MethodNotFoundException() {
		super();
	}

	public MethodNotFoundException(String message) {
		super(message);
	}

	public MethodNotFoundException(String message, Throwable cause) {
		super(message, cause);
	}

	public MethodNotFoundException(Throwable cause) {
		super(cause);
	}

	public MethodNotFoundException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
	}
}
