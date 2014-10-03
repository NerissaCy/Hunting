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
