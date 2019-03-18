#include<bits/stdc++.h>
using namespace std;
main()
{
    int  a[]={4,2,1,7,8,5,6};
    int n = (sizeof(a)/sizeof(*a));
    int j,temp;
    for(int i=0;i<n-1;i++)
    {
        j=i;
        temp = a[i];
        while((temp<a[j-1]) && (j>0))
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i];
    }

}
