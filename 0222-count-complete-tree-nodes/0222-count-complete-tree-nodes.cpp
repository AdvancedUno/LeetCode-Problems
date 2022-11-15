class Solution {
public:
    int countNodes(TreeNode* root) {
    
    	if(root == nullptr)return 0;

	int cntNodes = Recursion(root, 0);

	



	return cntNodes;


    }

	int Recursion(TreeNode* currentNode, int numNodes){
		 

		if(currentNode->left == nullptr){
			numNodes ++;
			return numNodes;
		}
		
		numNodes = Recursion(currentNode->left, numNodes);

		if(currentNode->right == nullptr){
			numNodes ++;
			return numNodes;
		}
		numNodes = Recursion(currentNode->right, numNodes);
        numNodes++;

		return numNodes;

	}


};