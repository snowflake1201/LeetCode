# Description:  
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
  
The first node is considered odd, and the second node is even, and so on.
  
Note that the relative order inside both the even and odd groups should remain as it was in the input.
  
You must solve the problem in O(1) extra space complexity and O(n) time complexity.  

## Example 1:  
![image](https://user-images.githubusercontent.com/56119216/184637229-ea6e0922-3a86-4250-a7c7-1709d472f8d6.png)  
Input: head = [1,2,3,4,5]  
Output: [1,3,5,2,4]  
## Example 2:  
![image](https://user-images.githubusercontent.com/56119216/184637254-06f394f1-89af-4bbf-8b3b-580da2e90dd8.png)  
Input: head = [2,1,3,5,6,4,7]  
Output: [2,3,6,7,1,5,4]  
 

## Constraints:  

The number of nodes in the linked list is in the range [0, 104].  
-106 <= Node.val <= 106  

## Answer detail:  
Runtime: 11 ms, faster than 94.06% of C++ online submissions for Odd Even Linked List.  
Memory Usage: 10.6 MB, less than 29.40% of C++ online submissions for Odd Even Linked List.  
  
Use two pointer to save the head node and head->next node(odd head and even head).  
change odd next node to next next node and move odd pointer to next next node.  
even do the same thing like odd.  
Finally, stick even head behind the odd last node.  
