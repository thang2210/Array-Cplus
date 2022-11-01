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

// Tổng hàng, tổng cột trên ma trận


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
    //int sum =0;
    for (int i =0 ;i < n ; i++){
        int sum =0;
        for (int j = 0 ; j < m ;j++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
    for (int i =0 ;i < m ; i++){
        int sum2 =0;
        for (int j =0 ;j < n ; j++){
            sum2 += a[j][i];
        }
        cout << sum2 << " ";
    }

}
