#include<bits/stdc++.h>	
using namespace std;

void inputOutput(){
#ifndef online_judge
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main()
{
	inputOutput();

	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<endl;
	}
	


	
	return 0;	
}    
