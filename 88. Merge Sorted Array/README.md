Wanted to practice the linked list, but found that is no need(sad:<).  
  
## Description
You are given an integer array digits, where each element is a digit. The array may contain duplicates.

You need to find all the unique integers that follow the given requirements:

The integer consists of the concatenation of three elements from digits in any arbitrary order.
The integer does not have leading zeros.
The integer is even.
For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

Return a sorted array of the unique integers.

 

Example 1:

Input: digits = [2,1,3,0]  
Output: [102,120,130,132,210,230,302,310,312,320]  
Explanation: 
All the possible integers that follow the requirements are in the output array.  
Notice that there are no odd integers or integers with leading zeros.  
Example 2:  

Input: digits = [2,2,8,8,2]  
Output: [222,228,282,288,822,828,882]  
Explanation:   
The same digit can be used as many times as it appears in digits.   
In this example, the digit 8 is used twice each time in 288, 828, and 882.   
Example 3:  

Input: digits = [3,7,5]  
Output: []  
Explanation:  
No even integers can be formed using the given digits.  
Example 4:  

Input: digits = [0,2,0,0]  
Output: [200]  
Explanation:   
The only valid integer that can be formed with three digits and no leading zeros is 200.  
Example 5:  

Input: digits = [0,0,0]  
Output: []  
Explanation:   
All the integers that can be formed have leading zeros. Thus, there are no valid integers.  
  
### Constraints:

nums1.length == m + n  
nums2.length == n  
0 <= m, n <= 200  
1 <= m + n <= 200  
-109 <= nums1[i], nums2[j] <= 109  
 

### Follow up: 
Can you come up with an algorithm that runs in O(m + n) time?  

## Answer Details:
Runtime: 4 ms, faster than 82.01% of C online submissions for Merge Sorted Array.  
Memory Usage: 6.2 MB, less than 41.64% of C online submissions for Merge Sorted Array.  

### Follow up answer:  
## Description:  
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
  
Merge nums1 and nums2 into a single array sorted in non-decreasing order.  

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
    
 

### Example 1:  

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3  
Output: [1,2,2,3,5,6]  
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].  
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.  
### Example 2:  

Input: nums1 = [1], m = 1, nums2 = [], n = 0  
Output: [1]  
Explanation: The arrays we are merging are [1] and [].  
The result of the merge is [1].  
### Example 3:
  
Input: nums1 = [0], m = 0, nums2 = [1], n = 1  
Output: [1]  
Explanation: The arrays we are merging are [] and [1].  
The result of the merge is [1].  
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
   

### Constraints:  

nums1.length == m + n  
nums2.length == n  
0 <= m, n <= 200  
1 <= m + n <= 200  
-109 <= nums1[i], nums2[j] <= 109  
 

### Follow up: Can you come up with an algorithm that runs in O(m + n) time?  
yes!
  
## Answer detail:  

Use an integer number "i" counting from the end of num1 array.  
the number of "i" is the size of num1 array.  
then, compare each pair of the last number of num1 array and num2 array.  
if the last of num1 array number is bigger than num2 array number,  
put the last of num1 array number to the "i" position.  
vice versa, "i" go to the second last position,
if the last of num1 array number is equal than num2 array number,
the num2 array number is higher priority to put to the "i" position.
and so on...
