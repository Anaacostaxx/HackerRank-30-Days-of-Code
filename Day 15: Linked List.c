Node* insert(Node *head,int data)
{
    Node *nuevo, *aux;
    nuevo=(Node*)malloc(sizeof(Node));
    nuevo->data=data;
    nuevo->next=NULL;
    
     if(head==NULL){
    head=nuevo;
}
else{
    aux=head;
    while(aux->next!=NULL){
        aux=aux->next;
    }
    aux->next=nuevo;
}
return head;
}
