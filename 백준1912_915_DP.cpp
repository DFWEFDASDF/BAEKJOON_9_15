#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int arr[100001] = { 0 };
int DP[100001] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int ans = -1000;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; ++i)
	{
		DP[i] = max(arr[i], DP[i - 1] + arr[i]);
		ans = max(ans, DP[i]);
	}

	cout << ans;

	return 0;
}