class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, e = s.length()-1;
        cout<<s[i]<<s[e]<<endl;
        while(i<e){
            //cout << i << " " << e << endl;
            while(!isalnum(s[i])&&i<s.length()){
                i++;
            }
            while(!isalnum(s[e])&&e>=0){
                e--;
            }
            if(tolower(s[i])!=tolower(s[e])){
            return false;
            }
            i++;
            e--;
            
        }
        
        return true;
        
    }
};
