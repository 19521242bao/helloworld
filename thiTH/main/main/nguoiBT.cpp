#include "nguoiBT.h"
bool nguoiBT::checkDD()
{
	vector<int>dd = DinhDuong();
	int dem = 0;
	if (dd[0] <= 1000 && dd[0] >= 800)
		dem++;
	if (dd[1] <= 800 && dd[1] >= 600)
		dem++;
	if (dd[2] <= 600 && dd[2] >= 500)
		dem++;
	if (dd[3] <= 500 && dd[3] >= 300)
		dem++;
	if (dem == 4)
		return true;
	return false;
}	