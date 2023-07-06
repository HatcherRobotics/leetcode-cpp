struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    };
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=0;
        int b=0;
        ListNode*curA = headA;
        ListNode*curB = headB;
        while(curA!=nullptr)
        {
            curA=curA->next;
            a++;
        }
        while(curB!=nullptr)
        {
            curB=curB->next;
            b++;
        }
        int c = a - b;
        curA = headA;
        curB = headB;
        if(c>0)//A长
        {
            for(int i=0;i<c;i++)
            {
                curA = curA->next;
            }
        }
        else if(c<0)
        {
            for(int j=0;j<(-c);j++)
            {
                curB = curB->next;
            }            
        }
        while (curA && curB)
        {
            if(curA==curB)
            {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return nullptr;
    }
};