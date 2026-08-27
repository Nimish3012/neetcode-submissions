class MyHashSet {
public:
    struct ListNode{
        int key;
        ListNode* next;
        ListNode(int k){
            key = k;
            next = nullptr;
        }
    };
        vector<ListNode*> set;

        int hash(int key){
            return key% set.size();
        }
    
    MyHashSet() {
        set.resize(10000);

        for(auto& bucket : set){
            bucket = new ListNode(0);
        }

    }
    
    void add(int key) {
        //add to specific bucket 
        ListNode* curr = set[hash(key)];  //curr pointing to head of specific bucket (list)
        while(curr->next){
            if(curr->next->key == key){
                return;
            }
            curr=curr->next;
        }
        // ListNode*temp = new ListNode(key);
        // curr->next = temp;
        curr->next = new ListNode(key);
    }
    
    void remove(int key) {
        ListNode* curr = set[hash(key)];
        while(curr->next){
            if(curr->next->key==key){
                //curr->next = curr->next->next;

                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete temp;
                return;
            }

            curr=curr->next;
        }
    }
    
    bool contains(int key) {
        ListNode* curr = set[hash(key)];
        while(curr->next){
            if(curr->next->key == key)
                return true;
            
            curr=curr->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */