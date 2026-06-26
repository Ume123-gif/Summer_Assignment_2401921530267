class Codec {
public:
    void encode(TreeNode* root, string& s) {
        if (!root) {
            s += "#,";
            return;
        }
        s += to_string(root->val) + ",";
        encode(root->left, s);
        encode(root->right, s);
    }
    TreeNode* decode(stringstream& ss) {
        string val;
        getline(ss, val, ',');
        if (val == "#")
            return NULL;
        TreeNode* root = new TreeNode(stoi(val));
        root->left = decode(ss);
        root->right = decode(ss);
        return root;
    }
    string serialize(TreeNode* root) {
        string s;
        encode(root, s);
        return s;
    }
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return decode(ss);
    }
};