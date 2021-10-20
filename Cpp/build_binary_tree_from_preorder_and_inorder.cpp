#include<bits/stdc++.h>
using namespace std;

int j = 0;
class TreeNode {

    public:
        int val;
        TreeNode *left,*right;

        //constructor 
        TreeNode(int val) {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

int search(vector<int>inorder, int val, int l, int r) {

        for(int i = l; i<= r; i++) {
            if(inorder[i] == val) return i;
        }
        return -1;
}
TreeNode* buildTreeHelp(int l, int r, vector<int> preorder, vector<int> inorder) {
        
        if(l > r) return NULL;

        // every element in preorder array will be a node
        TreeNode *root = new TreeNode(preorder[j++]);

        // search preorder node one by one in inorder array
        int mid = search(inorder, root->val, l, r);

        /*
             when found divide the inorder array into half and call recursively one half for left subtree and other one for 
            right subtree. 
        */
        root->left =   buildTreeHelp(l,mid-1,preorder, inorder);
        root->right = buildTreeHelp(mid+1,r,preorder,inorder);

        return root;
}
void printTreeInorder(TreeNode *root) {
    if(!root) return ;

    printTreeInorder(root->left);
    cout<<root->val<<" ";
    printTreeInorder(root->right);
}

TreeNode* buildTree(vector<int> preorder, vector<int> inorder) {
        
        return buildTreeHelp(0,inorder.size()-1, preorder, inorder);
}

int main() {

        vector<int> preorder = {3,9,20,15,7};
        vector<int> inorder = {9,3,15,20,7};
        TreeNode *root = buildTree(preorder, inorder);

        printTreeInorder(root);

}