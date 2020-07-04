#include "Nguoi.h"
void Nguoi::nhap()
{
	cout << "nhap so mon muon an: ";
	cin >> somon;
	for (int i = 0; i < somon; i++)
	{
		a[i].nhap();
	}
}
vector<int> Nguoi::DinhDuong()
{
	vector<int>arr{ 0, 0, 0, 0 };
	for (int i = 0; i < somon; i++)
	{
		arr[0] += a[i].getTinhBot();
		arr[3] += a[i].getBeo();
		arr[2] += a[i].getDam();
		arr[1] += a[i].getXo();
	}
	return arr;
}
long long Nguoi::TienAn()
{
	long long tienan=0;
	for(int i=0;i<somon;i++)
	{
		tienan += a[i].giatien();
	}
	return tienan;
}
void Nguoi::xuat()
{
	cout << "tui da an" << somon<<"mon"<<endl;
	cout << "cac mon da an la";
	for (int i = 0; i < somon; i++)
	{
		cout << "mon an thu " << i + 1 << "co cac thong so: ";
		cout << a[i].getTinhBot() << endl;
		cout << a[i].getXo()<<endl;
		cout << a[i].getDam() << endl;
		cout << a[i].getBeo() << endl;
	}
}

