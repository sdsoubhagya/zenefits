#include <iostream>
using namespace std;

int main() {
    int n;
    char ar[19];
    char b[7];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<19;j++)
        cin>>ar[j];
        b[2]=ar[8];
        b[1]=ar[4];
        b[3]=ar[1];
        b[0]=ar[6];
        b[4]=ar[12];
        b[5]=ar[14];
        b[6]=ar[16];
        for(int k=0;k<7;k++)
        {
            if(b[k]!='0')
            cout<<b[k]<<",";
        }
        cout<<endl;
        
    }
	return 0;
}
