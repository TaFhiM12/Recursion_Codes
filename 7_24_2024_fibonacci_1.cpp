#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2) ;
    }
}

int32_t main()
{
    optimize();
    int n ; cin  >> n ;
    cout << fib(n) << nl ;
    return 0;
}