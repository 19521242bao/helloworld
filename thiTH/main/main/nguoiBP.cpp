#include "nguoiBP.h"

bool nguoiBP::checkDD()
{
	vector<int>dd = DinhDuong();
	int dem = 0;
	if (dd[0] <= 700 && dd[0] >= 560)
		dem++;
	if (dd[1] <= 600 && dd[1] >= 800)
		dem++;
	if (dd[2] <= 660 && dd[2] >= 550)
		dem++;
	if (dd[3] <= 400 && dd[3] >= 240)
		dem++;
	if (dem == 4)
		return true;
	return false;
}