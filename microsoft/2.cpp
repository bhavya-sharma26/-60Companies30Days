//BULLS AND COWS
class Solution {
public:
    string getHint(string secret, string guess) {
        string ans="";
        int bulls=0;
        int cows=0;
        int nonbulls=secret.length()-bulls;
        map<char,int> m1,m2;
        for(int i=0;i<secret.length();i++){
             if(secret[i]==guess[i]){
                 bulls++;
             }
             else{
                 m1[secret[i]]++;m2[guess[i]]++;
             }
        }
        ans+=to_string(bulls);
        ans+="A";
        for(int i=0;i<secret.length();i++){
            if(secret[i]!=guess[i]){
                if(m2.find(secret[i])!=m2.end()){
                    cows++;
                    m2[secret[i]]--;
                    if(m2[secret[i]]==0)m2.erase(secret[i]);
                }
            }
        }
        ans+=to_string(cows);
        ans+="B";
        return ans;
    }
};
