// Số thuận nghịch trong tam giác dưới.


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


bool check(int n){
    int res =0; int m = n;
    while(n != 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n][n];
    for (int i =0 ;i < n ;i++){
        for (int j =0 ;j < n ; j++){
            cin >> a[i][j];
        }
    }
    int cnt =0;
    for (int i =0 ;i < n ;i++){
        for (int j = 0 ; j <= i ; j++){
            if (check(a[i][j])) cnt++;
        }
    }
    cout << cnt;
}
