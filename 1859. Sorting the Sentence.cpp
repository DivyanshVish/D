class Solution {
public:
    string sortSentence(string s) {
        
        /* ---------- Create a pos vector to store the position of the word --------- */
        vector<string> pos(10,"");  
        for(int i=0; i<s.size(); i++){
            /* ---------------- Create a temp string to store the word --------------- */
            string temp; 
            /* -------------- If s[i] is not digit then add s[i] to word ------------- */
            while(!isdigit(s[i])) 
                temp += s[i++]; 
                /* ----------------- When digit occurs, add its position ----------------- */
            pos[s[i++]-'0'] = temp; 
        }
        string ans;
        for(int i=1; i<10; i++){
            if(pos[i].length()>0)
                ans += pos[i] + ' ';
        }
        ans.pop_back();
        return ans;
    }
};