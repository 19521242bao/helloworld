#pragma once
#include"thucan.h"
#include<vector>
using namespace std;
class Nguoi
{
protected:
	int somon;
	thucan a[10];
public:
	virtual void nhap();
	virtual void xuat();
	virtual long long TienAn();
	virtual vector<int>DinhDuong();//mang 4 phan tu ung voi tinhbot,xo,dam,beo
	virtual bool checkDD()=0 ;
};
