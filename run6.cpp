#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;


const int  MOD = 1e9+7;


ll gdc( ll a, ll b){
    if (b == 0) return a;
    return gdc(b , a % b);
}


void check(ll a[] , ll n){
    ll cnt =0;
    for (int i =0 ;i < n ;i++){
        for (int j = i+1 ; j < n ;j++){
            if (gdc(a[i] , a[j] ) ==1) cnt++;
        }
    }
    cout << cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n; cin >> n;
    ll a[n];


    for (int i=0 ; i < n ;i++){
        cin >> a[i];
    }
    check(a , n);
}
