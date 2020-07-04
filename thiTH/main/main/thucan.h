#pragma once
#include<iostream>
using namespace std;
class thucan
{
private:
	int tinhbot;
	int beo;
	int dam;
	int xo;
	int giaTien;
public:
	void nhap()
	{
		cout << "nhap thong so dinh duong mon an:";
		cin >> tinhbot >> xo >> dam >> beo;
		cout << "nhap gia tien mon an";
		cin >> giaTien;
	}
		;
	int getTinhBot() {
		return tinhbot;
	}
	int getBeo() {
		return beo;
	}
	int getDam() {
		return dam;
	}
	int getXo() {
		return xo;
	}
	int giatien()
	{
		return giaTien;
	}
};

