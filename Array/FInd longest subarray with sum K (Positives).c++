

/*
🔴 Longest Subarray with Sum = K (Brute Force)

🧠 Idea:
- Consider every possible subarray.
- Fix a starting index.
- Keep extending the ending index while maintaining the sum.
- Whenever sum becomes k, update the longest length.

🧠 Example:
arr = [1,2,3,1,1]
k = 6

start = 0:
    [1]      → 1
    [1,2]    → 3
    [1,2,3]  → 6 ✅ len = 3
    [1,2,3,1]→ 7
    ...

start = 1:
    [2]      → 2
    [2,3]    → 5
    [2,3,1]  → 6 ✅ len = 3

Longest = 3

🧠 Why currentSum is outside inner loop?
- For a fixed startIndex, we keep extending the subarray.
- Instead of recomputing the sum from scratch, keep adding arr[endIndex].

⏱️ TC: O(N²)
📦 SC: O(1)

🎯 One line:
"Generate every subarray and track the longest one whose sum equals k."
*/
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int longestLen = 0 ; 
       for(int startIndex = 0 ; startIndex< arr.size() ; startIndex++)
       {
           int currentSum = 0;
           
           for(int endIndex = startIndex ; endIndex < arr.size() ; endIndex++ )
           {
               currentSum += arr[endIndex]; 
               
               if(currentSum == k)
               {
                   longestLen = max(longestLen, endIndex - startIndex + 1);
               }
           }
       }
       
       return longestLen;
    }



/*
🔴 Longest Subarray with Sum = K (Sliding Window)

⚠️ Works only when all elements are non-negative.

🧠 Idea:
- Maintain a window [left...right].
- Expand the window by moving right.
- If sum becomes greater than k,
  shrink the window from the left.
- Whenever sum becomes k,
  update the maximum length.

🧠 Why can we shrink when sum > k?
- Since all numbers are non-negative,
  expanding the window can only increase the sum.
- Therefore, the only way to reduce the sum
  is to move left forward.

🧠 Example:
arr = [1,2,3,1,1]
k = 6

right=0 → sum=1
right=1 → sum=3
right=2 → sum=6 ✅ len=3

right=3 → sum=7
shrink:
    sum=6 ✅ len=3

right=4 → sum=7
shrink:
    sum=5

Answer = 3

⚠️ Does not work with negative numbers.
Example:
    [2, -1, 2]
Sliding window assumptions break.

⏱️ TC: O(N)
📦 SC: O(1)

🎯 One line:
"Expand when sum is small, shrink when sum is large."
*/
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int left =0, right =0 ;
        int sum = 0;
        int maxLen = 0 ;
        while(right < arr.size())
        {
            
            sum += arr[right]; 
            
            while(sum > k)
            {
                sum -= arr[left];
                left++;
            }
            
            if(sum == k)
            {
                maxLen = max(maxLen, right - left + 1);
                // sum -= arr[left];
                // left++;
            }
            right++;
        }
        
        return maxLen;
    }
};