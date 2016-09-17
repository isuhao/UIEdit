#include "stdafx.h"

#include "CPy.h"

CPy::CPy()
{
}

CPy::~CPy()
{
}


wchar_t* CPy::CallMethod(const char* MethodName, const wchar_t* Param)
{
	PyObject *pfunc = NULL;

	PyObject *pReturn = NULL;  


	pfunc = PyObject_GetAttrString(GetCurrModuleObj(CurrModule), MethodName);    
	pReturn = PyObject_CallFunction(pfunc, "u", Param);//���ú���  

	wchar_t *fromPython;
	PyArg_Parse(pReturn, "u", &fromPython);//i��ʾת����int�ͱ���             // add passed Python string 

	return fromPython;
}
wchar_t* CPy::CallMethod(const char* MethodName)
{
	PyObject *pfunc = NULL;

	PyObject *pReturn = NULL;  


	pfunc = PyObject_GetAttrString(GetCurrModuleObj(CurrModule), MethodName);    
	pReturn = PyObject_CallFunction(pfunc, NULL);//���ú���  

	wchar_t *fromPython;
	PyArg_Parse(pReturn, "u", &fromPython);//i��ʾת����int�ͱ���             // add passed Python string 

	return fromPython;
}

//ִ�д���
BOOL CPy::ExecStr(const char* Code)
{
     if(PyRun_SimpleString(Code) == 0)  //0 �ɹ� -1 ʧ��
	 {
		 return TRUE;
	 }
	 else
	 {
		 return FALSE;
	 }
}

BOOL CPy::AddPath(const char* path)
{
	if (!ExecStr("import sys"))
	{
		return FALSE;
	}
	char a[200];
	sprintf_s(a, "sys.path.append('%s')", path);
	if (!ExecStr(a))
	{
		return FALSE;
	}
	return TRUE;
}

BOOL CPy::Import(char * ModuleName)
{
	if (m_list.count(ModuleName) >0 )
	{
		return FALSE;
	}
	PyObject *pmodule = PyImport_ImportModule(ModuleName);    
	if(pmodule == NULL)
	{
		return FALSE;
	}

	//List.AddObject(ModuleName, TObject(PyObject));
	m_list.insert(make_pair(ModuleName, pmodule));
    return TRUE;
}
PyObject * CPy::GetCurrModuleObj(char* CurrModule)
{
	if (m_list.count(CurrModule) >0 )
	{
		return NULL;
	}

	map<char *, PyObject*>::iterator iter;
	iter = m_list.find(CurrModule);
	if(iter != m_list.end())
	{
		return iter->second;
	}
	else
	{
		return NULL;
	}

}