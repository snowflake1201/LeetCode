## Description:
Given a binary tree, find its minimum depth.  
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.  
Note: A leaf is a node with no children.  

Example 1:  
![image](https://user-images.githubusercontent.com/56119216/177152207-4eb095aa-ae24-4122-90e6-e7c128fd2874.png)  
Input: root = [3,9,20,null,null,15,7]  
Output: 2  

Example 2:  
Input: root = [2,null,3,null,4,null,5,null,6]  
Output: 5  

## Constraints:  
The number of nodes in the tree is in the range [0, 105].  
-1000 <= Node.val <= 1000  


## Answer Details:  
#### DFS:  
Runtime: 441 ms, faster than 26.81% of C++ online submissions for Minimum Depth of Binary Tree.  
Memory Usage: 144.6 MB, less than 91.94% of C++ online submissions for Minimum Depth of Binary Tree.  
#### BFS:  