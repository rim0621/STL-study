#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);
	if(binary_search(v.begin(),v.end(),20))
		cout<<"ok"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
