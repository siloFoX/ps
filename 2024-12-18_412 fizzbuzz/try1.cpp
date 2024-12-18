class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n, "");

        for (int i = 0; i < n; i++) {
            int num = i + 1;
            
            if (num % 3 == 0) {
                answer[i] += "Fizz";
            }
            if (num % 5 == 0) {
                answer[i] += "Buzz";
            }
            if (answer[i] == "") {
                answer[i] = to_string(num);
            }
        }

        return answer;
    }
};