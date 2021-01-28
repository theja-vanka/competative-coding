// Program to get Nth term of Fibonacci Series

// Time Complexity O(2^N) and Space Complexity O(N)
int getNthFibRecursive(int n){
    if(n == 1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return getNthFibRecursive(n-1) + getNthFibRecursive(n-2);
    }
}

