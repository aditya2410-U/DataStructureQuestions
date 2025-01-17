class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int total = 0;
        if(tokens.size() == 1) return stoi(tokens[0]);
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-"|| tokens[i] == "*"|| tokens[i] == "/"){
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
            if(tokens[i] == "+"){
                total =  temp1 + temp2;
            }
            else if(tokens[i] == "-"){
                 total =  temp2 - temp1;
            }
            else if(tokens[i] == "*"){
                 total =  temp1 * temp2;
            }
            else if(tokens[i] == "/"){
                 total =  temp2 / temp1;
            }
             st.push(total);
            }
            else{
            st.push(stoi(tokens[i]));
            }
        }
        return total;
    }
};