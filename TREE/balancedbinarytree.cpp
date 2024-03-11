#include <iostream>
using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;
        else
            return std::max(height(root->left), height(root->right)) + 1;
    }

    void inorderUtil(TreeNode* root, bool& ans) {
        if (root != nullptr) {
            inorderUtil(root->left, ans);

            int lh = height(root->left);
            int rh = height(root->right);

            if (std::abs(lh - rh) > 1)
                ans = ans && false;

            inorderUtil(root->right, ans);
        }
    }

    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inorderUtil(root, ans);
        return ans;
    }
};

int main() {
    
    Solution solution;

    // Constructing  balanced binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    // Checking if the tree is balanced
    if (solution.isBalanced(root)) {
        std::cout << "The tree is balanced." << std::endl;
    } else {
        std::cout << "The tree is not balanced." << std::endl;
    }
    return 0;
}
