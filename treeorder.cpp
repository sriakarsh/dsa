class Solution {
public:
     void preorder(TreeNode* root, vector<int> &ans){
        if(!root) return;
        ans.push_back(root->val); 
        preorder(root->left,ans);       
        preorder(root->right,ans);   
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};


class Solution {
public:
    vector<int> ans;
    void postorder(TreeNode* root){
        if(!root) return;
        postorder(root->left);       
        postorder(root->right);
        ans.push_back(root->val);   
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return ans;
    }
};


class Solution {
public:
    
    void inorder(TreeNode* root, vector<int> &ans){
        if(root==NULL) return;
        
        inorder(root->left,ans);   
        ans.push_back(root->val);      
        inorder(root->right,ans);   
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return ans;
    }
};