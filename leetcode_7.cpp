#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int reverse(int x)
{
long long reverseNumber = 0;

    while(x!=0)
    {
        reverseNumber *= 10;
        reverseNumber = reverseNumber + (x % 10);
        x /= 10;
        
        if (abs(reverseNumber) > INT_MAX) {
            return 0;
        }
    }
    return reverseNumber;
}

};
