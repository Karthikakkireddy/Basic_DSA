// https://ideone.com/SfGRXT


#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> temp ){
	for(auto x  : temp)
	{
		cout << x << " ";
	}
	cout << "\n";
	
}

void subsequence(vector<int> &v, vector<int> &ss, int i, int &sum, int k)
{
	if(i == v.size() )
	{
		if(sum == k)
		printVector(ss);
		return;
	}
	
	sum = sum + v[i];
	ss.emplace_back(v[i]);

	 subsequence(v,ss, i+1, sum, k);
	sum = sum - v[i];
	ss.pop_back();
	 subsequence(v,ss, i+1, sum, k);
	
}



bool subsequence2(vector<int> &v, vector<int> &ss, int i, int &sum, int k)
{
	if(i == v.size() )
	{
		if(sum == k)
		{
			printVector(ss);
			return true;
		}
	
		return false;
	}
	
	sum = sum + v[i];
	ss.emplace_back(v[i]);
	if( subsequence2(v,ss, i+1, sum, k) )
		return true;
	sum = sum - v[i];
	ss.pop_back();
	if( subsequence2(v,ss, i+1, sum, k))
	{
		return true;
	}
	return false;
	
}



int subsequence3Beta(vector<int> &v, vector<int> &ss, int i, int &sum, int k)
{
	if(i == v.size() )
	{
		if(sum == k)
		{
			
			return 1;
		}
	
		return 0;
	}
	
	sum = sum + v[i];
	ss.emplace_back(v[i]);
	int left = subsequence3Beta(v,ss, i+1, sum, k) ;
	
	sum = sum - v[i];
	ss.pop_back();
	int right = subsequence3Beta(v,ss, i+1, sum, k);

	return left + right;
	
}


int subsequence3(vector<int> &v, int i, int &sum, int k)
{
	if(i == v.size() )
	{
		if(sum == k)
		{
			
			return 1;
		}
	
		return 0;
	}
	
	sum = sum + v[i];
	
	int left = subsequence3(v,i+1, sum, k) ;
	
	sum = sum - v[i];

	int right = subsequence3(v, i+1, sum, k);

	return left + right;
	
}

int main() {
	
	int n ; cin >> n;
	int k; cin >> k;
	int sum = 0 ;
	vector<int> v(n);
	for(int i = 0 ; i< n ; i++)
	{
		cin >> v[i];
	}
	// printVector(v);
	vector<int> ss;
	
	// subsequence(v,ss, 0, sum, k);
	// bool temp = subsequence2(v,ss, 0, sum, k) ;
	int count = subsequence3(v ,0, sum, k) ;
	cout << count ;
	return 0;
}