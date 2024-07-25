#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int nCr(int n , int r){
    if(r ==0 || r == n){
        return 1 ;
    }
    return nCr(n-1,r-1) + nCr(n-1,r);
}

int32_t main()
{
    optimize();
    int n , r ;
    cin >> n >> r ;
    cout <<"The Value of "<<n<<"C"<<r<<" is : "<< nCr(n,r) << nl ; 
    return 0;
}