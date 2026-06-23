class Solution {
public:
    int countPrimes(int n) {
        //test
        if(n==0) return 0;
        vector<bool>isPrime(n,true);
        isPrime[0] = false;
        isPrime[1] = false;
        int count = 0;
        int i;
        for (i=0;i<n;i++){
            if(isPrime[i]){
                count++ ;
                int k = 2 ;
                int j ;
                for (j=i*2 ; j<n ; j=j+i){
                    isPrime[j]=false;
                }
            }
        }
       return count ; 
    }
};