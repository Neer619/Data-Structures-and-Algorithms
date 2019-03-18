#include<bits/stdc++.h>
using namespace std;

void merger(int [],int l,int m,int r);
void mergesort(int a[],int l,int r)
{
if(l<r)
{
    int m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merger(a,l,m,r);

}

}

void merger(int a[],int l,int m,int r)
{
    int b[m-l+1],c[r-m];
    copy(a+l,a+m+1,b);
    copy(a+m+1,a+r+1,c);
    int i=0,j=0,k=l;
    while(i<sizeof(b)/sizeof(*b) && j<sizeof(c)/sizeof(*c))
    {
        if(b[i]<c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
    }

        while(j<sizeof(c)/sizeof(*c))
        {
            a[k]=c[j];
            j++;
            k++;
        }

        while(i<sizeof(b)/sizeof(*b))
        {
            a[k]=b[i];
            i++;k++;
        }

}

main()
{
    int a[]={2,8,14,2,9,5,1,7};
    int n=sizeof(a)/sizeof(*a);
    cout<<"Array before sorting: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }



    mergesort(a,0,n-1);
    cout<<"\n\nArray after sorting: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
