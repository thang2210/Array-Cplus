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
    int n , k; cin >> n >> k;
    int a[1999];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    ll sum1 =0; ll sum2 =0;
    if (k > n / 2){
        sort(a ,a + n , greater<int> ());
        for(int i =0 ; i < k ;i++){
            sum1 += a[i];
        }
        for (int i = k ;i < n ;i++){
            sum2 += a[i];
        }
        cout << sum1 - sum2 << endl;
    } else {
        sort(a ,  a + n );
        for (int i = 0 ;i < k ;i++){
            sum1 += a[i];
        }
        for (int i = k ; i < n ;i++){
            sum2 += a[i];
        }
        cout << sum2 - sum1 << endl;
    }
}
