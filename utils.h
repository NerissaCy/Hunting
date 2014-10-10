#include <vector>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

struct TreeLinkNode {
  int val;
  TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {}
};

void Dump(ListNode* head) {
  if (!head) cout << "empty list\n";
  while (head) {
    cout << head->val << " ";
    head = head->next;
  }
  cout<<endl;
}

template<class T>
void Dump(const vector<T>& vec) {
  for (auto an_item : vec)
    cout<<an_item<<" ";
  cout<<endl;
}

template<class T>
void Dump(const vector<vector<T> >& vevec) {
  for (auto vec : vevec)
    Dump(vec);
}

template<class K, class V>
void Dump(const unordered_map<K, V>& tab) {
  for (auto elem : tab)
    cout<<elem.first<<","<<elem.second<<" ";
  cout<<endl;
}


