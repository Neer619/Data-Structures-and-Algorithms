#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dynamicFibo(int n,vector<int> memo,int result)
{
    if(memo[n]!=NULL)
        result=memo[n];
    if(n==1 || n==2)
        result=1;
    else
        result=dynamicFibo(n-1,memo,result)+dynamicFibo(n-2,memo,result);
    memo.push_back(result);
    return result;
}

int dynamicFiboArray(int n,int* arraymemo,int result)
{
    if(arraymemo[n]!=0)
        result=arraymemo[n];
    if(n==1 || n==2)
        result=1;
    else
        result=dynamicFiboArray(n-1,arraymemo,result)+dynamicFiboArray(n-2,arraymemo,result);
    arraymemo[n]=result;
    return result;
}

int recursiveFibo(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return recursiveFibo(n-1)+recursiveFibo(n-2);
}

int bottomUp_Fibo(int n)
{
    long long a[n+1]={0};
    a[1]=1;
    a[2]=1;
    if(n==1||n==2)
    {
        return 1;
    }
    else

        for(int i=3;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
    return a[n];

}

main()
{
    vector<int> memo{NULL};
    int result;

    int arraymemo[500]={0};

    //cout<<dynamicFiboArray(10,arraymemo,result);

    //cout<<recursiveFibo(50);

    cout<<dynamicFibo(10,memo,result);

    //cout<<bottomUp_Fibo(100);
}
