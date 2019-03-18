#include<bits/stdc++.h>
using namespace std;

void kmpprefix(string pat,int a[])
{

    int m=pat.size();
    //int a[m];
    a[0]=0;
    int j=0;
    for(int i=1;i<m;i++)
    {
        if(pat[i]==pat[j])
        {
            j++;
        }
        else{
            j=0;
            if(pat[i]==pat[j])
            {
                j++;
            }
        }
        a[i]=j;
    }

}

void patternMatcher(string s,string p)
{
    int m=p.size();
    int n=s.size();
    int a[m];
kmpprefix(p,a);
int i=0,j=0;
while(i<n)
{
    if(s[i]==p[j])
    {
        i++;    j++;
        if(j==m)
        {
            cout<<"Pattern found at: "<<i-m<<"\n";
        }
    }

    else if(j!=0)
        {
            j=a[j-1];
        }
    else{
            i++;
        }

}

}

main()
{

    string s1="abaababa";
    string s2="aba";
    patternMatcher(s1,s2);

}
