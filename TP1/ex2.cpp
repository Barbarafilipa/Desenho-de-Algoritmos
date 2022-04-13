// By: Gonçalo Leão

#include "exercises.h"

int maxSubsequence(int A[], unsigned int n, unsigned int &i, unsigned int &j) {
    int maxSum;
    for(int a = 0; a < n-1; a++){
        int sum = A[a];
        for(int b = a+1; b<n; b++){
            sum += A[b];
            if(sum > maxSum){
                maxSum = sum;
                i = a;
                j = b;
            }
        }
    }
    return maxSum;
}


/// TESTS ///
#include <gtest/gtest.h>

TEST(TP1_Ex2, maxSubsequence) {
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    unsigned int n = 9;
    unsigned int i, j;
    EXPECT_EQ(maxSubsequence(A,n,i,j), 6);
    EXPECT_EQ(i, 3);
    EXPECT_EQ(j, 6);
}