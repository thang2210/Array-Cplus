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



int f[93];

void kt(){
    f[0] = 0;
    f[1] =1;
    for (int i =2 ;i < 92 ;i++){
        f[i] = f[i-1] + f[i-2];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    kt();
    int cnt =0;
    int n; cin >> n;
    int a[n][n];
    for (int i =0 ;i < n ;i++){
        for (int j =0 ; j < n ;j++){
            cin >> a[i][j];
        }
    }
    int h1 = 0 , h2 = n-1; int c1 =0  , c2= n-1;
    while(h1 <= h2 && c1 <= c2){
        for (int i = c1 ;i <= c2 ;i++){
            a[h1][i] = f[cnt];
            cnt++;
        }
        h1++;
        for (int i = h1 ; i <= h2 ; i++){
            a[i][c2] = f[cnt];
            cnt++;
        }
        c2--;
        if (h1 <= h2){
            for (int i = c2 ; i >= c1; i--){
                a[h2][i] = f[cnt];
                cnt++;
            }
            h2--;
        }
        if (c1 <= c2){
            for (int i = h2 ; i >= h1 ; i--){
                a[i][c1] = f[cnt];
                cnt++;
            }
            c1++;
        }
    }
    for (int i =0 ;i < n ;i++){
        for (int j =0 ;j < n ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
