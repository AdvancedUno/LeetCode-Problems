class Solution {
public:
    int countNodes(TreeNode* root) {
    
    if(root == nullptr)return 0;
	queue<TreeNode*> saveNodes;
	int cntNodes = 0;

	saveNodes.push(root);
	

	while(saveNodes.size() > 0){
		cntNodes++;
		TreeNode * currentNode = saveNodes.front();

		if(currentNode->left != nullptr){
			saveNodes.push(currentNode->left);
		}

		if(currentNode->right != nullptr){
			saveNodes.push(currentNode->right);
		}

        saveNodes.pop();
        

	}

	return cntNodes;




    }
};