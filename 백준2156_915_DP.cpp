#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001] = { 0 };
int DP[10001] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	DP[1] = arr[1];
	DP[2] = arr[1] + arr[2];
	

	for (int i = 3; i <= n; ++i)
	{
		DP[i] = max(max(arr[i] + arr[i - 1] + DP[i - 3], arr[i] + DP[i - 2]),DP[i-1]);
	}

	cout << DP[n];

	return 0;
}