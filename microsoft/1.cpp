//You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="-" || tokens[i]=="+"){
                int top1=stoi(s.top());
                s.pop();
                int top2=stoi(s.top());
                s.pop();int c;
                if(tokens[i]=="*"){
                    c=top2*top1;
                }
                else if(tokens[i]=="-"){
                    c=top2-top1;
                }
                else if(tokens[i]=="/"){
                    c=top2/top1;
                }
                else if(tokens[i]=="+"){
                    c=top2+top1;
                }
                
                s.push(to_string(c));
            }
            else {
                s.push(tokens[i]);
            }
            cout<<s.top()<<endl;
        }
        int t=stoi(s.top());s.pop();
        return t;
    }
};
