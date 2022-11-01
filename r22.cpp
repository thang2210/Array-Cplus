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
    for (int i = 0 ;i < n ;i++){
        for (int j =0 ;j < n ;j++){
            cin >> a[i][j];
        }
    }
    for (int i =0 ;i < n ;i++){
        if (i % 2 == 0){
            for (int j =0 ; j < n ;j++){
                cout << a[i][j] << " ";
            }
        } else {
            for (int j = n-1 ; j >= 0;j--){
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}
