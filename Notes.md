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


