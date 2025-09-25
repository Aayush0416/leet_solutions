#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        if (s[0]==')'|| s[0] ==']'|| s[0] =='}') {
            return false;
        }
        for (int i=0; i<s.size();i++){
            char c=s[i];
            if (c=='('||c=='['||c=='{'){
                v.push_back(c);
            }
            else if (c==')'){
                if (v.empty()) return false;
                if (v.back()!='(') return false;
                v.pop_back();
            }
            else if (c=='}'){
                if (v.empty()) return false;
                if (v.back()!='{') return false;
                v.pop_back();
            }
            else if (c==']'){
                if (v.empty()) return false;
                if (v.back()!='[') return false;
                v.pop_back();
            }
            else{
                return false;
            }

        }
        return v.empty();
        
    }
};

int main(){
    Solution s;
    string str="()[]{}";
    cout<<s.isValid(str);
    return 0;
}