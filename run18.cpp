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

int cnt[1000000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    int _max = 0; int _min = INT_MAX;
    for (auto &x : a) {
        cin >> x;
        cnt[x]++;
        _max = max(_max , x);
        _min = min(_min ,x);
    }   
    ll res =0;
    for (int i = _min ; i <= _max ; i++){
        if (cnt[i] != 0){
            res += 1ll * (cnt[i] -1) * cnt[i] / 2;
        }
        cout << res << endl;
    }

}
