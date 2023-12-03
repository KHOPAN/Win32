#pragma once

#include <string>
#include <Windows.h>
#include <jni.h>

struct WindowEntry {
	std::string className;
	JavaVM* virtualMachine;
	jobject instance;
	jmethodID identifier;
};

void addEntry(WindowEntry*);
WindowEntry* getEntry(const std::string&);
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
