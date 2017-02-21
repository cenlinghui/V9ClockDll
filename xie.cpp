// xie.cpp : Implementation of Cxie
#include "stdafx.h"
#include "Xieka.h"
#include "xie.h"
#include   <comdef.h>
#include <math.h>
/////////////////////////////////////////////////////////////////////////////
//json.lib调用
#include <fstream>
#include <string>
#pragma comment(lib,"json_vc71_libmtd.lib")
#include "include/json/json.h"


using namespace std;
STDMETHODIMP Cxie::get_GetResult(BSTR *pVal)
{
	CComBSTR bstStr(this->chResult);
	*pVal=bstStr.Detach();
	return S_OK;
}
//定义函数类型


typedef unsigned char uchar;
HMODULE hModule = LoadLibrary("V9RF.dll");
STDMETHODIMP Cxie::writeCard(BSTR bstr1)
{
	_bstr_t c = bstr1;//写卡json数据
	const char* astr = c; 

	Json::Reader reader;  
	Json::Value root;  
	reader.parse(astr, root);    // reader将Json字符串解析到root，root将包含Json里所有子元素  
//打开
	int rs = -1;
	int dlsCoID = root["dlsCoID"].asInt();
	if(strcmp(root["fun_name"].asString().c_str(), "writeCard") == 0){
		//写卡
		char ch;
		uchar CardNo;
		_itoa(root["CardNo"].asInt(),&ch,10);
		CardNo = ch;
		_itoa(root["Dai"].asInt(),&ch,10);
		uchar Dai = ch;
		_itoa(root["LLock"].asInt(),&ch,10);
		uchar LLock = ch;

		//printf("哈%c",CardNo);

		uchar EDate[11],LockNo[7];
		memcpy((char*)EDate, root["EDate"].asString().c_str(),strlen(root["EDate"].asString().c_str()));
		memcpy((char*)LockNo, root["LockNo"].asString().c_str(),strlen(root["LockNo"].asString().c_str()));
		uchar cardHexStr[200] = {0};
		typedef int (__stdcall * writeCard_type)(int dlsCoID,uchar CardNo,uchar dai,uchar LLock,uchar EDate[11],uchar LockNo[7],uchar *cardHexStr);
		writeCard_type writeCard = (writeCard_type)GetProcAddress(hModule,"WriteGuestCardA");
		int rs = writeCard(
				dlsCoID,
				CardNo,
				Dai,
				LLock,
				EDate,
				LockNo,
				cardHexStr
			);
		char res2[11];
		
		_itoa(rs,res2,10);
		strcpy(this->chResult,res2);
		return S_OK;
	}else if(strcmp(root["fun_name"].asString().c_str(), "readCard") == 0){
		//读卡
		typedef int (__stdcall * readCard_type)(int dlsCoID,unsigned char *cardHexStr, unsigned char *lockinfo);
		readCard_type readCard = (readCard_type)GetProcAddress(hModule,"GetGuestCardinfoA");
		unsigned char cardHexStr[200];
		unsigned char lockinfo[10];
		rs = readCard(
				dlsCoID,
				cardHexStr,
				lockinfo
			);
		char data[300];
		sprintf(data,"%d,%s,%s",rs,cardHexStr,lockinfo);
		strcpy(this->chResult,data);
		return S_OK;
	}else if(strcmp(root["fun_name"].asString().c_str(), "clearCard") == 0){
		typedef int (__stdcall * claerCard_type)(int dlsCoID,unsigned char *cardHexStr);
		claerCard_type clearCard = (claerCard_type)GetProcAddress(hModule,"CardEraseA");
		unsigned char cardHexStr[200];
		rs = clearCard(
				dlsCoID,
				cardHexStr
			);
		char res2[11];
		_itoa(rs,res2,10);
		strcpy(this->chResult,res2);
		return S_OK;
	}
	strcpy(this->chResult,"操作失败");
	return S_OK;
}