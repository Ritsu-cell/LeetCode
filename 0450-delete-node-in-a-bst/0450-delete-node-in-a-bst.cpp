/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* deleteNode(TreeNode* root, int key) {

        if (root == NULL) {
            return NULL;
        }

        // If root itself is the node to delete
        if (root->val == key) {
            return helper(root);
        }

        TreeNode* curr = root;

        while (curr != NULL) {

            if (curr->val > key) {

                // Key is in left subtree
                if (curr->left != NULL && curr->left->val == key) {
                    curr->left = helper(curr->left);
                    break;
                }
                else {
                    curr = curr->left;
                }

            }
            else {

                // Key is in right subtree
                if (curr->right != NULL && curr->right->val == key) {
                    curr->right = helper(curr->right);
                    break;
                }
                else {
                    curr = curr->right;
                }
            }
        }

        return root;
    }


    TreeNode* helper(TreeNode* root) {

        // No left child
        if (root->left == NULL) {
            return root->right;
        }

        // No right child
        else if (root->right == NULL) {
            return root->left;
        }

        // Both children exist
        TreeNode* rightChild = root->right;

        TreeNode* lastRight = findLastRight(root->left);

        lastRight->right = rightChild;

        return root->left;
    }


    TreeNode* findLastRight(TreeNode* root) {

        while (root->right != NULL) {
            root = root->right;
        }

        return root;
    }
};