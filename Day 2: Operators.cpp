#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost, initialSum;
    int tipPercent, taxPercent, totalCost;
    cin >> mealCost >> tipPercent >> taxPercent;
    initialSum= ((tipPercent * mealCost)/100) + ((taxPercent * mealCost)/100) + mealCost;
    totalCost=initialSum;
    if ((initialSum-totalCost)>0.5)
        totalCost=totalCost+1;
    cout<<"The total meal cost is "<<totalCost<<" dollars."<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
