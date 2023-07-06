class MyLinkedList {
public:
    struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    MyLinkedList() {
        ListNode*dummyhead(0);

    }
    
    int get(int index) {
        ListNode*p = dummyhead;
        for(int i=0;i<index;i++)
        {
            p = p->next;
        }
        return p->val;
    }
    
    void addAtHead(int val) {
        ListNode* addhead = new ListNode(val);
        addhead->next = dummyhead->next;
        dummyhead->next = addhead;
    }
    
    void addAtTail(int val) {
        ListNode* p = dummyhead;
        while(p->next!=nullptr)
        {
            p = p->next;
        }
        ListNode*addend = new ListNode(val);
        p->next = addend;
    }
    
    void addAtIndex(int index, int val) {
        ListNode*p = dummyhead;
        ListNode*addindex = new ListNode(val);
        for(int i=0;i<index;i++)
        {
            p=p->next;
        }
        ListNode*temp = p->next;
        p->next = addindex;
        addindex->next = temp;
    }
    
    void deleteAtIndex(int index) {
        ListNode*p = dummyhead;
        for(int i=0;i<index;i++)
        {
            p=p->next;
        }
        p->next = p->next->next;        
    }
private:
    ListNode*dummyhead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */