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
    int n ,m; cin >> n >> m;
    int a[n][m];
    for (int i =0 ;i < n ;i++){
       for (int j=0 ; j < m ;j++){
           cin >> a[i][j];
       }
    }
    int dp[n+1][m+1] = {0};
    for (int i =0 ;i < n ;i++){
        for (int j = 0 ;j < n ; j++){
            if (i == 0 && j == 0) dp[i][j] = a[i][j];
            else if (j ==  0) dp[i][j] = dp[i-1][j] + a[i][j];
            else if (i == 0){
                dp[i][j] = dp[i][j-1] + a[i][j];
            } else {
                dp[i][j] = max(dp[i][j-1] , dp[i-1][j]) + a[i][j];
            }
        }
    }
    cout << dp[n-1][m-1];
}


