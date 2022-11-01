// vị trí đầu tiên và cuối cùng


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

int check(int a[] , int n ,int x){
    int res =-1;
    int l =0 , r = n-1;
    while(l < r){
        int m = (l + r) /2;
        if (a[m] == x){
            res = m +1;
            r = m - 1;
        } else if(a[m] < x){
            l = m + 1;
        } else {
            r = m -1;
        }
    }
    return res;
}

int che(int a[] , int n , int x){
    int l =0 , r = n-1;
    int res = -1;
    while(l < r){
        int m = (l + r) /2;
        if (a[m] == x){
            res= m +1;
            l = m + 1;
        } else if (a[m] < x){
            l = m+1;
        } else r = m-1;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x; cin >> n >> x;
    int a[n];
    for (auto &x : a){
        cin >> x;
    }
    cout << check(a , n , x) << " " << che(a , n ,x );
}
