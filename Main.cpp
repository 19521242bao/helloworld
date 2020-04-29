#include <iostream>
#include "DaThuc.h"
using namespace std;
int main()
{
	DaThuc a, b, g;
	cin >> a;
	cout << a;

	/*cin >> b;
	cout << b;*/

	//if (a.operator==(b) == true)
	//	cout << "Hai da thuc bang nhau. " << endl;
	//else
	//{
	//	if (a.operator<(b) == true)
	//		cout << "Da thuc " << a << " be hon da thuc " << b << endl;
	//	else
	//		if (a.operator>(b) == true)
	//			cout << "Da thuc " << a << " lon hon da thuc " << b << endl;
	//}
	/*g = a - b;
	cout << g;
*/
	//g = a.derivative();
	//cout << "dao ham: " << g;
	int c = 4;
	g = a.privitive(c);
	cout << "Nguyen ham: " << g;
}