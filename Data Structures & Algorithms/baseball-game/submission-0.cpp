class Solution {
   public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (string& op : operations) {
            if (op == "C") {
                st.pop();
            }

            else if (op == "D") {
                st.push(st.top() * 2);
            }

            else if (op == "+") {
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                int newScore = top1 + top2;
                st.push(top1);
                st.push(newScore);
            } else {
                st.push(stoi(op));
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};