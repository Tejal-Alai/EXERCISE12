// EXERCISE12.h : main header file for the EXERCISE12 DLL
//

#pragma once

#ifndef __AFXWIN_H__
#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CEXERCISE12App
// See EXERCISE12.cpp for the implementation of this class
//

class CEXERCISE12App : public CWinApp
{
public:
	CEXERCISE12App();

	// Overrides
public:
	virtual BOOL InitInstance();
	static void userInfo();
	DECLARE_MESSAGE_MAP()
};
static int AcRxEntryPoint(AcRx::AppMsgCode Msg, void* pkt);