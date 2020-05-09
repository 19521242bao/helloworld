#include <iostream>
#include "DaThuc.h"
using namespace std;
DaThuc::DaThuc()
{
	bac = -1;
	heso = NULL;
}
DaThuc::DaThuc(const DaThuc& f)
{
	bac = f.bac;
	heso = new double[bac];
	for (int i = 0; i <= bac; i++)
		heso[i] = f.heso[i];
}
istream& operator>>(istream& is, DaThuc& f)
{
	cout << "Nhap bac da thuc: ";
	is >> f.bac;
	f.heso = new double[f.bac];
	for (int i = f.bac; i >= 0; i--)
	{
		cout << "nhap he so bac " << i << ": ";
		is >> f.heso[i];
	}
	return is;
}
ostream& operator<<(ostream& os, DaThuc& f)
{
	os << "F(x)= ";
	for (int i = f.bac; i >= 0; i--)
	{
		if (i != f.bac && f.heso[i] >= 0)
			os << "+ ";
		if (i == 0)
			os << f.heso[i];
		else
		{
			if (i == 1)
				os << f.heso[i] << "x ";
			else
				os << f.heso[i] << "x^" << i << " ";
		}
	}
	os << "\n\n";
	return os;
}
bool DaThuc::operator==(const DaThuc& f)
{
	if (bac == f.bac)
	{
		for (int i = 0; i <= bac; i++)
			if (heso[i] != f.heso[i])
			{
				return false;
				break;
			}
		return true;
	}
	return false;
}
bool DaThuc::operator<(const DaThuc& f)
{
	if (bac < f.bac)
		return true;
	if (bac == f.bac)
	{
		for (int i = 0; i <= bac; i++)
			if (heso[i] > f.heso[i])
			{
				return false;
				break;
			}
		return true;
	}
	return false;
}
bool DaThuc::operator>(const DaThuc& f)
{
	if (bac > f.bac)
		return true;
	if (bac == f.bac)
	{
		for (int i = 0; i <= bac; i++)
			if (heso[i] < f.heso[i])
			{
				return false;
				break;
			}
		return true;
	}
	return false;
}
DaThuc DaThuc::operator+(const DaThuc& f)
{
	DaThuc g;
	int bacnho;
	if (bac > f.bac)
	{
		g.bac = bac;
		bacnho = f.bac;
	}
	else
	{
		g.bac = f.bac;
		bacnho = bac;
	}
	g.heso= new double[g.bac+1];
	for (int i = 0; i <= g.bac; i++)
	{
		//nếu bậc nhỏ hơn hoặc bằng bậc nhỏ thì cộng cả hai ko thì cộng 1 cái thui
		if (i <= bacnho)
			g.heso[i] = heso[i] + f.heso[i];
		else
		{
			if (f.bac > bacnho)
				g.heso[i] = f.heso[i];
			else
				g.heso[i] = heso[i];
		}
	}
	return g;
}
DaThuc DaThuc::operator-(const DaThuc& f)
{
	DaThuc g;
	int bacnho;
	if (bac > f.bac)
	{
		g.bac = bac;
		bacnho = f.bac;
	}
	else
	{
		g.bac = f.bac;
		bacnho = bac;
	}
	g.heso = new double[g.bac + 1];
	for (int i = 0; i <= g.bac; i++)
	{
		//nếu bậc nhỏ hơn hoặc bằng bậc nhỏ thì cộng cả hai ko thì cộng 1 cái thui
		if (i <= bacnho)
			g.heso[i] = heso[i] - f.heso[i];
		else
		{
			if (f.bac > bacnho)
				g.heso[i] = -f.heso[i];
			else
				g.heso[i] = heso[i];
		}
	}
	return g;
}
DaThuc DaThuc::operator*(const DaThuc& f)
{
	DaThuc g;
	g.bac = bac + f.bac;
	g.heso = new double[g.bac];
	for (int i = 0; i <= g.bac; i++)
		g.heso[i] = 0;
	for (int i = 0; i <= bac; i++)
		for (int j = 0; j <= f.bac; j++)
		{
			int k = i + j;
			g.heso[k] += heso[i] * f.heso[j];
		}
	return g;
}
DaThuc DaThuc::derivative()
{
	DaThuc g;
	g.bac = bac - 1;
	g.heso = new double[g.bac];
	for (int i = 0; i <= g.bac; i++)
		g.heso[i] = (i + 1) * heso[i + 1];
	return g;
}
DaThuc DaThuc::privitive(int c)
{
	DaThuc g;
	g.bac = bac + 1;
	g.heso = new double[g.bac];
	g.heso[0] = c;
	for (int i = 1; i <= g.bac; i++)
		g.heso[i] = heso[i - 1] / i;
	return g;
}