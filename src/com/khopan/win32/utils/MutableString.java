package com.khopan.win32.utils;

public class MutableString {
	private String value;

	public MutableString() {
		this.value = "";
	}

	public MutableString(String value) {
		this.value = String.valueOf(value);
	}

	public void set(String value) {
		this.value = String.valueOf(value);
	}

	public String get() {
		return this.value;
	}

	public void append(String value) {
		this.value += String.valueOf(value);
	}
}
