#include<bits/stdc++.h>//unset the bit
using namespace std;
int main()
{
	int num,pos,result;
	cin>>num>>pos;
	result=num^((pos-1)<<1);
	cout<<result;
}
