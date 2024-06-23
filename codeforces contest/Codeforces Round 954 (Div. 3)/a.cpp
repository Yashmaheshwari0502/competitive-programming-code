#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <numeric>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int min1,min2,min3;
        min1=abs(a1-a1)+abs(a2-a1)+abs(a3-a1);
        min2=abs(a1-a2)+abs(a2-a2)+abs(a3-a2);
        min3=abs(a1-a3)+abs(a2-a3)+abs(a3-a3);
        cout<<min(min1,min(min2,min3))<<endl;
    }
    return 0;
}