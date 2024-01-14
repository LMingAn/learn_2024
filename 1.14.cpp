#include <iostream>
#include <cmath>
using namespace std;

#define MAX 100005
long long num[MAX][9] = { 0 };

int main()
{
	long long t = 0, dac = 0, dad = 0, dbc = 0, dbd = 0;
	//num[a][4] = num[a][6], num[a][1] = num[a][3]
	cin >> t;
	for (long long a = 0; a < t; a++)
	{
		cin >> num[a][0] >> num[a][1] >> num[a][2] >> num[a][3] >> num[a][4] >> num[a][5] >> num[a][6] >> num[a][7];
		if (num[a][0] == num[a][4] && num[a][1] == num[a][5] || num[a][0] == num[a][6] && num[a][1] == num[a][7] || num[a][2] == num[a][4] && num[a][3] == num[a][5] || num[a][2] == num[a][6] && num[a][3] == num[a][7])
			num[a][8] == 0;
		else
		{
			dac = abs(num[a][0] - num[a][4]) + abs(num[a][1] - num[a][5]);
			dad = abs(num[a][0] - num[a][6]) + abs(num[a][1] - num[a][7]);
			dbc = abs(num[a][2] - num[a][4]) + abs(num[a][3] - num[a][5]);
			dbd = abs(num[a][2] - num[a][6]) + abs(num[a][3] - num[a][7]);
			num[a][8] = min(dac, dad);
			num[a][8] = min(num[a][8], dbc);
			num[a][8] = min(num[a][8], dbd);
		}
	}
	for (long long a = 0; a < t; a++)
		cout << num[a][8] << endl;
	return 0;
}



//int main()
//{
//	long long a = 0, b = 0, n = 0, c = 0, num[a][8] = 0;
//	cin >> a >> b >> n;
//	if ((a / b) != 0)
//	{
//		if ((a / b) < n)
//			num[a][8] = a / b * b;
//		else
//			num[a][8] = b * n;
//	}
//	else
//		num[a][8] = b;
//	cout << num[a][8];
//}