#include <iostream>
using namespace std;

int main(){
    int n,r,i=0,size,array[50],num[10],consecutive=0,max=0;
    cin >> n;
    while(n!=0)
	{
			r=n%2;
			array[i]=r;
			n=n/2;
			i++;
	}
    size=i;
    for(i=0;i<size;i++)
    {
        if(array[i]==1){
            consecutive++;
            if(max<consecutive){max=consecutive;}
        }
        else{consecutive=0;}
    }
    cout<<max;

    return 0;
}
