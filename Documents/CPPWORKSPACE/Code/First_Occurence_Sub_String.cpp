#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int k=needle.size();
        
        size_t found=haystack.find(needle);
        
        if(needle == " ")
        {
            return 0;
        }
        
        if(found!=string::npos)
        {
            return found;
        }
        else
            return -1;
        
        
    }
};