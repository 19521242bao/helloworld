#include "nguoiTC.h"
bool nguoiTC::checkDD()
{
	vector<int>dd = DinhDuong();
	int dem = 0;
	if (dd[0] <= 1200 && dd[0] >= 960)
		dem++;
	if (dd[1] <= 800 && dd[1] >= 600)
		dem++;
	if (dd[2] <= 660 && dd[2] >= 550)
		dem++;
	if (dd[3] <= 575 && dd[3] >= 345)
		dem++;
	if (dem == 4)
		return true;
	return false;
}