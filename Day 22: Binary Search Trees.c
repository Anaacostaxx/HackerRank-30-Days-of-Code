int getHeight(Node* root){
   int izq,der;
    

    if(root==NULL) return -1;
    else{
     izq=getHeight(root->left)+1;
     der=getHeight(root->right)+1;
    }
       
       if(izq>der)return izq;
       else return der;
 
}
