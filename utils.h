#include <vector>
#include <stack>
#include <map>
#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

void Dump(ListNode* head) {
  if (!head) cout << "empty list\n";
  while (head) {
    cout << head->val << " ";
    head = head->next;
  }
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
