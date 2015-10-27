#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
	vector<int>::iterator iter;
	for(iter = nums.begin(); iter != nums.end() ; iter++)
	{
	   m[*iter]=m[*iter] + 1;
	}
        map<int,int>::iterator iter2;
	map<int,int>::iterator iterm = m.begin();
    	for(iter2 = m.begin() ; iter2 != m.end() ; iter2++)
    	{
       	   if(iter2->second > iterm->second)
	   {
	      iterm = iter2;
	   }
    	}	
	return iterm->first;
    }
};

int main(){
   Solution solution;
   vector<int> vec(10,0);
   cout<<solution.majorityElement(vec)<<endl;
  return 0;
}

