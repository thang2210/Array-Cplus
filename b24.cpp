// Phần tử xuất hiện ở mọi hàng.

#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n][n];
    for (int i =0 ;i < n;i++){
        for (int j =0 ;j < n ;j++){
            cin >> a[i][j];
        }
    }
    map<int,int> v;
    for (int i =0 ;i < n ;i++){
        v[a[i][0]] = 1;
    }
    for (int i =1;i < n ;i++){
        for (int j =0 ;j < n ;j++){
            if (v[a[i][j]] == i){
                v[a[i][j]]++;
            }
        }
    }
    for (auto x : v){
        if (x.second == n){
            cout << x.first << endl;
        }
    }
}
