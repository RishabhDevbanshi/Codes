/**
 *    author:  Himanshu Singh
 *    created: 25.10.2022 18:36:30
**/

#include "bits/stdc++.h"

using namespace std;

#ifdef HIMANSHU_DEBUG
#include "debug.hpp"
#else
#define dbg(...)
#endif

#define int int64_t

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int min_a = 1e18, max_b = -1, min_a_ind = -1, max_b_ind = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];      
        if(a[i] < min_a) {
            min_a = a[i];
            min_a_ind = i;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        if(b[i] > max_b) {
            max_b = b[i];
            max_b_ind = i;
        }
    }
    for(int i = 0; i < m; i++) {
        cout << min_a_ind << " " << i << endl;
    }
    for(int i = 0; i < n; i++) {
        if(i != min_a_ind)
            cout << i << " " << max_b_ind << endl;
    }
    
    /*
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> a(n),b(m);
    for(int i=0;i<n;i++)    
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    for(int i=0;i<m;i++)    
    {
        cin>>b[i].first;
        b[i].second=i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<m;i++)    cout<<a[0].second<<" "<<b[i].second<<endl;
    for(int i=1;i<n;i++)    cout<<a[i].second<<" "<<b[m-1].second<<endl;
    */
}


