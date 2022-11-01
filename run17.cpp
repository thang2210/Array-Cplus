// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l tới chỉ số r.


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
    int a[1000];
    for (int i =1 ;i <= n ;i++){
        cin >> a[i];
    }
    int pre[n+1] = {0};
    for (int i = 1; i <= n ;i++){
        pre[i] = pre[i-1] + a[i];
    }
    int t; cin >> t;
    while(t--){
        int l ,r ; cin >> l >> r;
        cout << pre[r] - pre[l-1] << endl;
    }
}
