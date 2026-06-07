class MyLinkedList {
public:
    int data;
    MyLinkedList* next;
    MyLinkedList() {
        data=0;
        next=nullptr;
    }
    MyLinkedList(int val,MyLinkedList* next)
    {
        data=val;
        this->next=next;
    }
    MyLinkedList* head=nullptr;
    int get(int index) {
        if(index<0) return -1;
        int cnt=0;
        MyLinkedList* temp=head;
        while(temp)
        {
            if(cnt==index)
            {
                return temp->data;
            }
            temp=temp->next;
            cnt++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        MyLinkedList* Insert=new MyLinkedList(val,head);
        head=Insert;
    }
    
    void addAtTail(int val) {
        if(head==NULL)
        {
            head=new MyLinkedList(val,nullptr);
            return;
        }
        MyLinkedList* temp=head;
        while(temp)
        {
            if(temp->next==NULL)
            {
                MyLinkedList* Insert=new MyLinkedList();
                Insert->data=val;
                temp->next=Insert;
                return;
            }
            temp=temp->next;
        }
    }
    
    void addAtIndex(int index, int val) {
        int cnt=0;
        if(index==0)    {addAtHead(val);return;}
        MyLinkedList* Insert=new MyLinkedList();
        Insert->data=val;
        MyLinkedList* temp=head;
        while(temp)
        {
            
            if(cnt==index-1)
            {
                Insert->next=temp->next;
                temp->next=Insert;
                return;
            }
            cnt++;
            temp=temp->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) return;
        int cnt=0;
        if(index==0)
        {
            MyLinkedList* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        MyLinkedList* temp=head;
        while(temp)
        {
            
            if(cnt==index-1){
                MyLinkedList* del=temp->next;
                if (del == nullptr) return;
                temp->next=del->next;
                delete del;
                return;
            }
            cnt++;
            temp=temp->next;
        }
    }
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