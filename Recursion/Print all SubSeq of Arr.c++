// https://ideone.com/Gua2MY




#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> temp ){
	for(auto x  : temp)
	{
		cout << x << " ";
	}
	cout << "\n";
	
}

void subsequence(vector<int> &v, vector<int> &ss, int i)
{
	if(i == v.size() )
	{
		printVector(ss);
		return;
	}
	
	ss.emplace_back(v[i]);
	subsequence(v,ss, i+1);
	ss.pop_back();
	subsequence(v,ss, i+1);
	
}

int main() {
	
	int n ; cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i< n ; i++)
	{
		cin >> v[i];
	}
	// printVector(v);
	vector<int> ss;
	
	subsequence(v,ss, 0);
	return 0;
}