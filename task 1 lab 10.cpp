
#include <iostream>
using namespace std;
int total = 0;
int sum(int a);
int main()
{
	int num;
	cout << "enter a positive integer :";
	cin >> num;
	sum(num);
	cout <<"sum :"<< total;
}
int sum(int a)
{
	if (a > 1)
		total= a + sum(a - 1);
	else
		return 1;
}
