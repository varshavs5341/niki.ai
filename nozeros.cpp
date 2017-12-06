#include <iostream>
using namespace std;
 
long int nozeros(long int n)
{
    long int a[n], b[n];
    // i th element the array 'a' contains the number of elements of i bytes which start with 1
    // i th element the array 'b' contains the number of elements of i bytes which start with 0
    a[0] = b[0] = 1;
    for (long int i = 1; i < n; i++)
    {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1];
        if(a[i]>1000000007)
          a[i]%=1000000007;
        if(b[i]>1000000007)
          b[i]%=1000000007;
    }
    return (a[n-1] + b[n-1])%1000000007;
}
 
 

int main()
{
    long int n;
    int t;
    cin>>t;
    for (int i = 0 ; i < t; i++)
    {
        cin>>n;
        cout << nozeros(n) << endl;
    }
    return 0;
}