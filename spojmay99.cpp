#include<bits/stdc++.h>

using namespace std;


// bool cmp(pair<char,int> a,pair<char,int> b){
// 	if(a.second != b.second){
// 		return a.second > b.second;
// 	}
// 	return a.first < b.first;

// }
int main(){
	string s;
	cin>>s;
	vector<<pair<char,int>> v;
	for(int i=0;i<s.length();i++)
		std::vector<char> v;
	//sort(v.begin(), v.end());
	for(auto &it:v){
		cout<<it.first<<" "<<it.second<<endl;
	} 


	return 0;
}