## Description:  
Given two binary trees original and cloned and given a reference to a node target in the original tree.
  
The cloned tree is a copy of the original tree.
  
Return a reference to the same node in the cloned tree.
  
Note that you are not allowed to change any of the two trees or the target node and the answer must be a reference to a node in the cloned tree.
  
   

Example 1:
  
![image](https://user-images.githubusercontent.com/56119216/175939751-3360bde8-d986-493b-916a-e4144192121d.png)

Input: tree = [7,4,3,null,null,6,19], target = 3  
Output: 3  
Explanation: In all examples the original and cloned trees are shown. The target node is a green node from the original tree. The answer is the yellow node from the cloned tree.
    
Example 2:  
![image](https://user-images.githubusercontent.com/56119216/175939768-07c92bb7-51eb-4acb-a99d-1bb48529b7a3.png)


Input: tree = [7], target =  7  
Output: 7      
Example 3:  
![image](https://user-images.githubusercontent.com/56119216/175939791-b72879b3-5191-44ce-8b55-a0d037131c01.png)


Input: tree = [8,null,6,null,5,null,4,null,3,null,2,null,1], target = 4  
Output: 4  
     

## Constraints:

The number of nodes in the tree is in the range [1, 104].  
The values of the nodes of the tree are unique.  
target node is a node from the original tree and is not null.  
   
  
### Follow up:  
Could you solve the problem if repeated values on the tree are allowed?  

## Answer Details:  
Runtime: 785 ms, faster than 50.21% of C++ online submissions for Find a Corresponding Node of a Binary Tree in a Clone of That Tree.
Memory Usage: 163.9 MB, less than 81.41% of C++ online submissions for Find a Corresponding Node of a Binary Tree in a Clone of That Tree.

