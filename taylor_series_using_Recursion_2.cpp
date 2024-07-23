#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

//using loop...

double e(double x , double n ){
    double s = 1 ;
    for( ; n>0;n--){
        s = 1+(x/n)*s ;
    }
    return s ;
}

//using recursion
double e1(double x , double n){
    static double s = 1 ;
    if(n==0) return s ;
    s = 1+(x/n)*s;
    return e1(x,n-1);
}
int32_t main()
{
    optimize();
    cout << e(3,15) << nl ;
    cout << e1(3,15) << nl ;
    return 0;
}