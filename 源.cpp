#include <iostream>
using namespace std;
int main()
{
	int a[50], m, x=0, b = 0, c = 1, mid, i, n;
	cout << "how many numbers?";
	cin >> n;
	cout << endl;
	cout << "how many duan";
	cin >> m;
	cout << endl;
	cout << "enter numbers";
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << endl;
	int left = a[n-1], right = 0;
	for (i = 0; i < n; i++)
		right = right + a[i];
	
	while (left <= right)
	{
		b = 0; c = 1;
		mid=(left + right) / 2;
		for (i = 0; i < n; i++)
		{
			b = b + a[i];
			if (b > mid)
			{
				c++;
				b = a[i];
			}
		}
		if (c <= m)
		{
			right = mid-1;
			x = mid;
		}
		else
			left = mid + 1;
	}
	cout << x << endl;
	return 0;

}