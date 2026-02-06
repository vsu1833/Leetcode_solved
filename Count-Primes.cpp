1class Solution {
2public:
3    int countPrimes(int n) {
4        if (n <= 2) return 0;
5
6        vector<bool> isPrime(n, true);
7        isPrime[0] = isPrime[1] = false;
8
9        for (int i = 2; i * i < n; i++) {
10            if (isPrime[i]) {
11                for (int j = i * i; j < n; j += i) {
12                    isPrime[j] = false;
13                }
14            }
15        }
16
17        int count = 0;
18        for (int i = 2; i < n; i++) {
19            if (isPrime[i]) count++;
20        }
21        return count;
22    }
23};