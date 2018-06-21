#include <iostream>
using namespace std;


int main(){
    int arr[6][6],i,j;
    for(i = 0;i < 6;i++){
       for(j = 0;j < 6;j++){
          cin >> arr[i][j];
       }
    }
    int k=0;
    int sum[16];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum[k]=((arr[i][j]+arr[i][j+1]+arr[i][j+2])+(arr[i+1][j+1])+(arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]));
            k++;
        }
    }
    int max=sum[0];
    for(i=1;i<16;i++)
    {
        if(max<sum[i]){max=sum[i];}
    }
    cout<<max<<endl;
    return 0;
}
