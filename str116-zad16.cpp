//Програмата извежда произведението на числата от редицата, които са кратни на 7
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while (n<=2 || n>=40) {cout<<" n = "; cin>>n;}

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int proizvedenie=1;
    for(int j=0; j<n; j++) {if(a[j]%7==0) proizvedenie=proizvedenie*a[j];}

    if(proizvedenie==1) cout<<"No";
    else cout<<"proizvenedie = "<<proizvedenie;


    return 0;
}

