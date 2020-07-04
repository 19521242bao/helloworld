#include "nguoiThuaCan.h"
bool nguoiThuaCan::checkDD()
{
	vector<int>dd = DinhDuong();
	int dem = 0;
	if (dd[0] <= 750 && dd[0] >= 600)
		dem++;
	if (dd[1] <= 800 && dd[1] >= 600)
		dem++;
	if (dd[2] <= 540 && dd[2] >= 450)
		dem++;
	if (dd[3] <= 450 && dd[3] >= 270)
		dem++;
	if (dem == 4)
		return true;
	return false;
}