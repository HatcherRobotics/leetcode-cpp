

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*pre = nullptr;
        ListNode*cur = head;
        ListNode*temp = nullptr;
        while(cur!=nullptr)
        {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        delete temp,cur;
        return pre;
    }
};