#include<bits/stdc++.h>//check given position is set or not
using namespace std;
int main()
{
	int num,pos;
	cin>>num>>pos;
	if(num&((pos-1)<<1))
	   cout<<"Yes";
	else
	   cout<<"No";
}

