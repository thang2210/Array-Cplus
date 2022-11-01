// Đổi tiền tham lam


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
    ll n; cin >> n;
    ll cnt=0;
    int a[10] = {1000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 ,2 , 1};
    for (int i = 0 ;i < 10 ;i++){
        cnt += n / a[i];
        n %= a[i];
    }
    cout << cnt;
}
