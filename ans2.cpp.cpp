#include <iostream>
using namespace std;
int fact (int a)
{
    int t=1;
    if (a==0)
    return 1;
    else
    {
        for(int i=a;i>0;i--)
        t=t*i;
        return t;
    }
}
int main() {
	int n,s=0;
	cin>>n;
	char a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    {
        int count =0;
     for(int j=0;j<n;j++)
     {
         if(b[i]>a[j])
         {
             count ++;
             for(int k=i-1;k>=0;k--)
             {
                 if(a[j]==b[k] )
                 count--;
             }
         }
     }
     s=s+count*fact(n-1-i);
    }
    cout<<s+1;
	return 0;
}
