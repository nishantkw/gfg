 long maxSum = arr[0], currSum = arr[0];
        for(int i=1;i<n;++i) {
            long a = arr[i];
            // is it better for us to take the next element or just start fresh from the next element
            currSum = Math.max(a, currSum + a);
            // accordingly we need to update the max sum
            maxSum = Math.max(maxSum, currSum);
        }
        return maxSum;
