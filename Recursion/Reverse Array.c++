// https://ideone.com/L0pQv7


#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v, int i )
{
	if(i >= (v.size() / 2))
	{
		return;
	}
	swap(v[i], v[ v.size() - 1 - i]);
	reverse(v, i + 1);
}

int main() {
	int n ; cin >> n;
	vector<int> v(n);
	for(int i=0 ; i< n ; i++)
	{
		cin >> v[i];
	}
	for(auto  x : v)
	{
		cout << x << " ";
	}
	cout << "\n";
	reverse(v, 0);
	
	for(auto  x : v)
	{
		cout << x << " ";
	}
	return 0;
}