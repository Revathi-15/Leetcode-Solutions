#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> arr(n + 1);
		for (int i = 1; i <= n; i++)
			cin >> arr[i];

		long long int res = 0;
		for (int i = 1; i <= n; i++)
		{	long long int left=arr[i];
			if (left== 1)
				res += n;
			else
			{ 	long long int power = 1;
				for (int j = 1; j <= n; j++)
				{  power *= left;
					if(power>1e9)  break;
					else{ 
				  long long int right=arr[j];
					if (power <= right)
						res++;
				}}
			}
		}
		cout << res << endl;
	}
}
