#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1;
	for(int i=1;i<=5;i++)
		v1.push_back(i*10);

	vector<int> v2(5);
	vector<int>::iterator iter_end;
	iter_end=partial_sum(v1.begin(),v1.end(),v2.begin());

	for(vector<int>::iterator iter=v2.begin();iter!=iter_end;++iter)
		cout<<*iter<< " ";
	cout<<endl;
	return 0;
}
