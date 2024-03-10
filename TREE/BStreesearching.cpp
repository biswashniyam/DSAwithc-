#include<iostream>
using namespace std;
#include<queue>
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* insertintobst(node* &root,int data)
{
    if(root==NULL)
    {
        root=new node(data);
        return root;
    }
    if(data > root->data)
    {
        //put it to right
        root->right=insertintobst(root->right,data);
    }
    else
    {
        //automatic comes to left
        root->left=insertintobst(root->left,data);
    }
    return root;
}
void takeinput(node* &root)
{
    int data;
    cin>>data;
    while(data !=-1)
    {
        root=insertintobst(root,data);
        cin>>data;
    }
}
void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp -> data << " ";
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }

    }
}
//searching in tree
bool search(node* root,int data)
{
    node* temp=root;
    while(temp!=NULL)
    {
    if(temp->data==data)
    {
        return true;
    }
    if(temp->data > data)
    {
        //left
        temp=temp->left;
    }
    else{
        //right
        temp=temp->right;
    }
    }
    return false;
}

//traversal in bST
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
    node* root=NULL;

    cout<<"Enter data to create a BST: "<<endl;
    takeinput(root);

    cout<<"Printing a BInary search tree"<<endl;
    levelordertraversal(root);

    cout<<"In order traversal is : "<<endl;
    inordertraversal(root);
    cout<<endl;
    
    cout<<"Pre order traversal is :"<<endl;
    preordertraversal(root);
    cout<<endl;

    cout<<"post order traversal is :"<<endl;
    postordertraversal(root);
    cout<<endl;
    int searchData = 63;
    if (search(root, searchData)) 
    {
        cout << searchData << " is present in the BST." << endl;
    } else {
        cout << searchData << " is not present in the BST." << endl;
    }
    return 0;


}