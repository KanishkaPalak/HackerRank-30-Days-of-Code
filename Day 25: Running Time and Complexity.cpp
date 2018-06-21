#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin>>size;
    int n[size],i;
    for(i=0;i<size;i++)
    {
        cin>>n[i];
    }
    int j,flag=0;
    for(i=0;i<size;i++)
    {   
        if(n[i]==1){flag=1;}
        else{
        for(j=2;j*j<=n[i];j++)
        {
            if(n[i]%j==0)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        }
        if(flag==1)
            cout<<"Not prime"<<endl;
        else
            cout<<"Prime"<<endl;
        flag=0;
    }
       
    return 0;
}
