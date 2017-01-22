//Write a program that outputs the string representation of numbers from 1 to n.

//But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret_vec(n);
        for(int i=1; i<=n; ++i)
        {
            if(i%3 == 0)
            {
                ret_vec[i-1] += string("Fizz");
            }
            if(i%5 == 0)
            {
                ret_vec[i-1] += string("Buzz");
            }
            if(ret_vec[i-1] == "")
            {
                ret_vec[i-1] += to_string(i);
            }
        }
        return ret_vec;
    }
};
