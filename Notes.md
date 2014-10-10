LeetCode Medium
====

Binary Tree Inorder Traversal (None-recursive)
  1. Recursively push left child to stack until nullptr
  2. Pop from stack, visit it, and set current pointer to its right child.


Search Insert Position (i.e. return upperbound-index)
  1. Edge case:
     (A) n = 0, return 0;
     (B) A[0] > target, return 0;
     (C) A[n-1] < target, return n;
  2. Binary Search
     (A) A[m] < target, l = m + 1;
     (B) m-1 >= l && A[m-1] >= target, r = m-1;
     (C) return m;


Search In Rotated Sorted Array (duplicates)
  1. Binary Search:
     (A) A[m] == target, return true;
     (B) right move l, if A[l] == A[m], until l == m
     (C) left move r, if A[r] == A[m], until r == m
     (D) if (A[l] <= A[m]) // left part increasing, 3 cases
         (D.1) if (A[m] < target) l = m + 1;
         (D.2) else if (A[l] <= target) r = m - 1;
         (D.3) else l = m + 1;
     (E) else // right part increasing, 3 cases...

Subsets: Given a set of distinct integers, return all possible subsets.
  1. Wrong Idea: DFS, each time choose between:
     (A) Do no select any integer.
     (B) Select one integer from s[start..end], and update start.
     Why wrong? Duplicates!
     # # 3 = # 3 # = 3 # #
  2. Correct Idea: DFS, each time choose between:
     (A) Select current integer.
     (B) Do not select current integer.

Valid Binary Search Tree: Inorder Traversal Is Ordered
  1. Easy to mess up details.
     Func: bool util(TreeNode* root, int& prev)
     (A) If (!root) return true;
     (B) If left part is not BST, return false.
     (C) Is root->val < prev? Also update prev.
     (D) If right part is not BST, return false.
     (E) Return true. 

3Sum: Given an array S of n integers, find all unique triplets which contains
different elements in S, such that a + b + c = 0.
  1. Sort, first element iterate from S.begin.
  2. Second element initialized as first+1, third element initialize as last.
  3. while (second != third)
     (A) if (sum < 0) second++;
     (B) else if (sum > 0) third--;
     (C) else [Important]
         (i) if <first-val, second-val, third-val> already added, do nothing.
             else add it to answer.
         (ii) second++ until second->val changes
        (iii) third-- until third->val changes

Container With Most Rain Water:
  Related Problem:
    1. Trapping Rain Water
       For each slot, trapped water = min(max(A[0..i-1]), max(A[i+1..n-1])) -
                                      A[i]
    2. Largest Rectangle Histogram
       Largest Rectangle covering i, with height A[i], the area is:
          = (right-guard (right, farest to i, height >= A[i]) -
            left-guard (left, farest to i, height >= A[i]) + 1) * A[i]
       In reality, right-guard & left-guard cannot be directly obtained,
       thus: left-guard* (left, nearest to i, height < A[i])
            right-guard* (right, nearest to i, height < A[i])
            left-guard = left-guard* + 1;
           right-guard =right-guard* - 1;
   But this one:
     Water contained between [l, r] = min(A[l], A[r]) * (r-l+1)
      l < r, l++,
      l > r, r--,
      l == r, l++ or r-- both work
     Different from 1: in problem 1, only height matters.
     Different from 2: in problem 2, only width matters.
     But in this one: both height and width matters.

Following Problem Should Always Been Revisited: (easy to mess up with details)
1. pow(x, n)
2. Insertion Sort List
3. Reorder List
