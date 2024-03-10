#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right= NULL;
    }
};

node* buildtree(node* root){
    
    cout << "Enter  data: " << endl;
    int data;
    cin >> data;
    //heram heram
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root->left  = buildtree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildtree(root->right);

    return root;
}
void inordertraversal(node* root){
    //base case
    if(root == NULL)
    {
        return;
    }
    //LNR or LPR
    inordertraversal(root -> left);
    cout << root -> data << " ";
    inordertraversal(root -> right);
}
void preordertraversal(node* root)
{
    //base case
    if(root == NULL){
        return;
    }
    //NLR or PLR
    cout << root->data << " ";
    preordertraversal(root -> left);
    preordertraversal(root -> right);
}
void postordertraversal(node* root){
    //base case
    if(root == NULL){
        return ;
    }
    //LRN or LRP
    postordertraversal(root -> left);
    postordertraversal(root -> right);
    cout << root -> data << " ";
}

int main()
{
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root=NULL;
    root=buildtree(root);
    
    cout<<"In order traversal is : "<<endl;
    inordertraversal(root);
    cout<<endl;
    
    cout<<"Pre order traversal is :"<<endl;
    preordertraversal(root);
    cout<<endl;

    cout<<"post order traversal is :"<<endl;
    postordertraversal(root);

}