#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long t;
    cin>>t;
    multiset<long long> s;
    while (t--) {
    int a;
    long long x;
    cin>>a>>x;
    if(a==1){
        s.insert(x);
    }
    else if (a==2) {
        auto it = s.find(x);
        if(it != s.end()){
            s.erase(it);
        }
        
    }
    else if(a==3){
        auto it = s.find(x);
        if(it != s.end()){
            cout<<"Yes\n";
        }
        else {
        cout<<"No\n";
        }
    }
    }
    return 0;
}



