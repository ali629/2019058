
#include <iostream>
using namespace std;
int pwr;
int power(int base,int exp);
int main()
{
	int b;
	int ex;
	cout << "enter base :";
	cin >> b;
	cout << "enter exponent :";
	cin >> ex;
	power(b,ex);
	cout <<b<<"^"<<ex<<"="<< pwr;
}
int power(int base,int exp)
{
	if (exp != 0)
		pwr = base * power(base, exp - 1);
	else
		return 1;

}
