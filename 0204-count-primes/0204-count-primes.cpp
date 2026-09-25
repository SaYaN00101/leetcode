class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        vector<char> isPrime(n, true);

        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;

        for (int i = 2; i < n; i++) {
            count += isPrime[i];
        }

        return count;
        // int count = 0;
        // for(int i=2;i<n;i++){
        //     bool isprime=true;
        //     for(int j=2;j*j<=i;j++){
        //         if(i%j==0){
        //             isprime=false;
        //             break;
        //         }
        //     }
        //     if(isprime){
        //         count++;
        //     }
        // }
        // return count;
    }
};