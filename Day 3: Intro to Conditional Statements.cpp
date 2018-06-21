#include <map>
#include <set>
#include <list>
#include <cmath>
#include <string>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    if(N>=1 && N<=100)
    {
        if((N%2)!=0)
            cout<<"Weird"<<endl;
        else if((N%2)==0)
        {
            if(N>=2 && N<=5)
                cout<<"Not Weird"<<endl;
            else if(N>=6 && N<=20)
                cout<<"Weird"<<endl;
            else if(N>20)
                cout<<"Not Weird"<<endl;
        }
    }
    return 0;
}
