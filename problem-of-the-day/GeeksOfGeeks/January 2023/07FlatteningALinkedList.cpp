class Solution {
public:
    Node *merge(Node *a, Node *b){
        Node *temp= new Node(-1);
        Node *res=temp;
        
        while(a!=NULL && b!=NULL){
            if(a->data > b->data){
                temp->bottom = b;
                temp = temp->bottom;
                b = b->bottom;
            }
            else{
                temp->bottom = a;
                temp= temp->bottom;
                a = a->bottom;
            }
        }
        while(a!=NULL){
            temp->bottom=a;
            temp=temp->bottom;
            a=a->bottom;
        }
        while(b!=NULL){
            temp->bottom=b;
            temp=temp->bottom;
            b=b->bottom;
        }
        return res->bottom;
    }
    
    Node *flatten(Node *root)
    {
        if(root == NULL || root->next == NULL){
            return root;
        }
        // recurssion for root right lists
        root->next = flatten(root->next);
        // merge the cuurent list with the next list
        root = merge(root, root->next);
        
        
        return root;
    }
};