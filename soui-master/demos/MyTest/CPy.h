#pragma once

#include <map>
#include <windows.h>
#include <Python.h>
using namespace std;


class CPy
{
public:
	CPy();
	~CPy();

public:
	wchar_t* CallMethod(const char* MethodName, const wchar_t* Param);
	wchar_t* CallMethod(const char* MethodName);

	//Ö´ÐÐ´úÂë
	BOOL ExecStr(const char* Code);

	BOOL AddPath(const char* path);

	BOOL Import(char * ModuleName);
	PyObject * GetCurrModuleObj(char* CurrModule);
private:
	map<char *, PyObject*> m_list;
	char*  CurrModule;

};

