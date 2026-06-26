class Solution {
public:
    int pre = 0;
    unordered_map<int, int> mp;

    TreeNode* construct(vector<int>& preorder, int l, int r) {
        if (l > r) return NULL;
        int val = preorder[pre++];
        TreeNode* root = new TreeNode(val);
        int idx = mp[val];
        root->left = construct(preorder, l, idx - 1);
        root->right = construct(preorder, idx + 1, r);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;
        return construct(preorder, 0, inorder.size() - 1);
    }
};