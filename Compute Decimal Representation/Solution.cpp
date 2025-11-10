class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        long int num = n;
        string s = to_string(num);
        int length = s.length();
        deque<int> base10;
        for (int i = 1; i < 10; i++) {
            for (long int j = 10; j <= 1000000000; j *= 10) {
                if (n == i || n == i * j) {
                    base10.push_front(n);
                    vector<int> Base10(base10.begin(), base10.end());
                    return Base10;
                }
            }
        }
        long int j = 10;
        while (j <= num) {
            if (num % j == 0 && j < num) {
                while (num % j == 0 && j <= num * 10) {
                    j = j * 10;
                }
            } else {
                while (num % j != 0 && j <= num * 10) {
                   long int a = num / (j / 10);
                   long int b = a * (j / 10);
                   long int c = b % j;
                    if (c != 0) {
                        base10.push_front(c);
                    }
                    j *= 10;
                }
            }
        }
        vector<int> BASE10(base10.begin(), base10.end());
        return BASE10;
    };
};

// Done