What is a Subarray?

A subarray is a continuous part of an array.

It is defined by choosing a starting index i and an ending index j such that 0 ≤ i ≤ j < n.

Example:

Array: [1, 2, 3, 4]
Subarrays:
[1], [2], [3], [4], 
[1,2], [2,3], [3,4], 
[1,2,3], [2,3,4], 
[1,2,3,4]


Notice: [1,3] is not a subarray (not continuous).

Difference Between Subarray, Subsequence, Subset

Subarray → continuous block.

Subsequence → can skip elements but order must remain.
Example: from [1,2,3], subsequence [1,3] is valid.

Subset → any combination, order doesn’t matter.
Types of Subarray Problems
Most subarray problems fall into these categories:
Sum related
Example: "Find the maximum sum subarray" (Kadane’s Algorithm).
Example: "Count subarrays with sum = K".
Length related
Example: "Longest subarray with all 1s".
Example: "Longest subarray with sum ≤ K".
Special property
Example: "Subarray with equal 0s and 1s".
Example: "Subarray with distinct elements".

How to Solve a Subarray Problem?
Step 1: Identify if it’s subarray (continuous) or subsequence/subset.
If continuous → sliding window, prefix sums, or Kadane’s Algorithm are common tools.
Step 2: Choose the method

Brute Force (O(n²)):
Generate all subarrays, check conditions.

for i in 0..n-1:
    sum = 0
    for j in i..n-1:
        sum += arr[j]
        check condition

Prefix Sum:
Precompute cumulative sums, then subarray sum(i..j) = prefix[j] - prefix[i-1].

Sliding Window (Two Pointers):
Use when array has non-negative numbers and we want subarray sums/length.

Kadane’s Algorithm:
For maximum sum subarray.

current_sum = arr[0]
best = arr[0]
for i in 1..n-1:
    current_sum = max(arr[i], current_sum + arr[i])
    best = max(best, current_sum)

Example Problem

Find the maximum sum subarray
Array = [-2,1,-3,4,-1,2,1,-5,4]

Kadane’s Algorithm → Answer = 6 ([4, -1, 2, 1]).

👉 In short:

Subarray = continuous part of array.
Tools = brute force, prefix sums, sliding window, Kadane’s.
Choose based on problem type (sum, length, property).
Do you want me to list the most common subarray problems with their solution approaches (like a roadmap)?

You said:
current_sum = arr[0]
best = arr[0]
for i in 1..n-1:
    current_sum = max(arr[i], current_sum + arr[i])
    best = max(best, current_sum)  instread of that 

for(i 1to n-1){
curretn sum=currentsum+arr[i]
maxim=max(maxim, current suM ) 
does this work
ChatGPT said:





Your version
current_sum = current_sum + arr[i]; //not work 
maxim = max(maxim, current_sum);


This means:

You always continue the subarray and never restart it from a new index.
Problem with this
Suppose array = [-2, 1, -3, 4]
Start with current_sum = -2, maxim = -2
At i=1 (arr[1]=1)
current_sum = -2 + 1 = -1
maxim = max(-2, -1) = -1


But the best subarray so far is [1] with sum = 1 → missed.
So, your version fails when the best subarray should restart from a later index.
Why Kadane uses max(arr[i], current_sum + arr[i])
Because at every step we must decide:
Either continue with previous subarray (current_sum + arr[i])
Or start fresh from current element (arr[i])
This restart is what makes Kadane correct.
✅ Conclusion:
Your simplified version does not work for all cases.
It only works if all numbers are non-negative (because then you never want to restart).

Do you want me to show you 3 versions of Kadane’s Algorithm (basic, with subarray indices, and for all-negative arrays)?