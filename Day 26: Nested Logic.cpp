#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int da,ma,ya;
    int de,me,ye;
    int fine;
    cin>>da>>ma>>ya;
    cin>>de>>me>>ye;
    if (ya>ye) 
    {
        fine=10000;
    } 
    else if (ya==ye) 
    {
        if (ma>me) 
        {
            fine=(ma-me)*500;
        } 
        else if (ma==me) 
        {
            if (da>de) 
            {
                fine=(da-de)*15;
            } 
            else 
            {
                fine=0;
            }
        } 
        else 
        {
            fine=0;
        }
    } 
    else 
    {
        fine=0;
    }
    cout<<fine<<endl;
    return 0;
}
