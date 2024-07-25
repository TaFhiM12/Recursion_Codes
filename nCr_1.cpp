#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int fact(int n){
    if(n==0) {
        return 1 ;
    }
    return fact(n-1)*n;
}

int nCr(int n , int r ){
    int t1 = fact(n);
    int t2 = fact(r);
    int t3 = fact(n-r);
    return (t1/(t2*t3));
}

int32_t main()
{
    optimize();
    int n , r ;
    cin >> n >> r ;
    cout << nCr(n,r) << nl ;
    return 0;
}