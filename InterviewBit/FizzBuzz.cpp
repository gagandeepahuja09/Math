vector<string> Solution::fizzBuzz(int A) {
    vector<string> ret(A);
    for(int i = 0; i < A; i++) {
        int val = i + 1;
        if(val % 15 == 0) {
            ret[i] = "FizzBuzz";
        }
        else if(val % 5 == 0) {
            ret[i] = "Buzz";
        }
        else if(val % 3 == 0) {
            ret[i] = "Fizz";
        }
        else {
            ret[i] = to_string(val);
        }
    }
    return ret;
}

