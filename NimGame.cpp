#include <iostream>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return n%4 != 0;
    }
};

int main(){
   Solution s;
   int n; 
   cin>>n;
   cout<<s.canWinNim(n)<<endl;
}
