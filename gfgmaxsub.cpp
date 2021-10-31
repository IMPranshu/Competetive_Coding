#include<bits/stdc++.h>

using namespace std;


void maxSubArray(int l,int r,int *arr){
	unordered_map<int,int> m;
	for(int i=l;i<=r;i++){
		m[arr[i]]++;
	}
	auto it = max_element(m.begin(),m.end(),[] (const std::pair<char,int>& a, const std::pair<char,int>& b)->bool{ return a.second < b.second; } );
	cout<<it->first<<" Occurs "<<it->second<<" times"<<endl;
	return;

}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int m;
	cin>>m;
	int q[m][2],i=0;
	while(i<m){
		cin>>q[i][0]>>q[i][1];
		i++;
	}
	for(int i=0;i<m;i++){
		maxSubArray(q[i][0],q[i][1],arr);
	}



	
	return 0;
} 