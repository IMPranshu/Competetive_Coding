#include<bits/stdc++.h>

using namespace std;

// bool cmp(pair<string,int> p1,pair<string,int> p2){
//     if(p1.second != p2.second){
//         return p1.second > p2.second;
//     }
//     return p1.first < p2.first;
// }

// int main(){
//     int n;
//     cin>>n;
//     int m=n;
//     vector<pair<string,int>> v;
//     while(n--){
//         string s;
//         int m;
//         cin>>s>>m;
//         v.push_back({s,m});
//         }
//     sort(v.begin(),v.end(),cmp);
//     for(int i=0;i<m;i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
// }

int main(){
    map<int, multiset<string>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[-1*marks].insert(name);
    }
    for(auto &marks_student_pr:m){
        auto &students = marks_student_pr.second;
        int marks = marks_student_pr.first;
        for(auto &student : students){
            cout<<student<<" "<<-1*marks<<endl;
        }
    }


}