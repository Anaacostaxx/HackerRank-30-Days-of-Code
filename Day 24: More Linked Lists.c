Node* removeDuplicates(Node *head){
     Node *curr = head;
     if(head==NULL)return head;
        while (curr->next!=NULL) {
            if (curr->data == curr->next->data) {
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
            
        }
        return head;
    }
