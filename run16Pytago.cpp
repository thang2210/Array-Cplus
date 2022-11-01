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

bool py(int a[] , int n){

    for (int i = n-1 ; i >= 2; i--){
        int l =0 ; int r = i-1;
        while(l < r){
            if (a[l] + a[r] == a[i]) return true;
            else if (a[l] + a[r] < a[i]) l++;
            else  r--;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int i =0 ;i < n;i++){
        cin >> a[i];
    }
    for (int i =0 ;i < n ;i++){
        a[i] = a[i] * a[i];
    }
    sort( a,a + n);
    if (py( a, n )) cout << "UES";
    else cout << "no";
}
