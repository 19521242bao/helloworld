// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Nguoi.h"
#include"nguoiBP.h"
#include"nguoiBT.h"
#include"nguoiTC.h"
#include"nguoiThuaCan.h"
using namespace std;
int main()
{
	Nguoi *people[100];
	float cao, nang,bmi;
	int n;
	cout << "nhap so nguoi cua trai";
	cin >> n;
	int a1[100];//cao
	int a2[100];//nang
	for(int i=0;i<n;i++)
	{
		cout << "nhap thong so nguoi" << i + 1;
		cin >> a1[i] >> a2[i];
		bmi = a2[i] * 1.00 / (a1[i] * a1[i]);
		if (bmi < 18.5)
		{
			people[i] = new nguoiTC;
		}
		if (bmi < 25 && bmi >= 18.5)
		{
			people[i] = new nguoiBT;
		}
		if (bmi > 25 && bmi < 30)
			people[i] = new nguoiThuaCan;
		else
			people[i] = new nguoiBP;
		people[i]->nhap();
	}
	//cau a,b
	long long tongtien = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "chieu cao can nang:";
		cout << a1[i] << a2[i];
		people[i]->xuat();
		tongtien += people[i]->TienAn();
	}
	//cau c
	int nguoianhoply = 0;
	for (int i = 0; i < n; i++)
	{
		if (people[i]->checkDD() == true)
			nguoianhoply++;
	}
	cout << "so nguoi an co che do hop ly la: " << nguoianhoply;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
