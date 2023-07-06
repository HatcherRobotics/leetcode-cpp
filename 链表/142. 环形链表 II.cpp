
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast = head;
        ListNode*slow = head;
        if (head==nullptr)
        {
            return nullptr;
        }
        while(fast->next!=nullptr && fast->next->next!=nullptr && slow->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow)
            {
                ListNode*p1 = head;
                ListNode*p2 = fast;
                while(p1!=p2)
                {
                    p1 = p1->next;
                    p2 = p2->next;
                }
                return p1;
            }
        }
        return nullptr; 
    }
};