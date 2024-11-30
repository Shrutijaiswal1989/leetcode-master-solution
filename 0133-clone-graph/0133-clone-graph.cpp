class Solution {

    bool isPresent(vector<Node*> nodes, Node* node){
        for(Node* nodeItr: nodes){
            if (nodeItr -> val == node->val){
                return true;
            }
        }
        return false;
    }


    /*
    DRY RUN: 
    Pool -> 1,2, 3
    ((1, [2]), (1, [2,4])) -> ((2, [1, 3]), (2, [1,3])) ->  ((3, []), (3, [2,4])) & so on .... 
    */

    void fillDfs(Node* cloneNode, Node* node, unordered_map<int, Node*>& clonedNodesPool){
        for(Node* child: node->neighbors){
            if(!isPresent(cloneNode->neighbors, child)){
                if(clonedNodesPool.find(child->val) == clonedNodesPool.end()){
                    Node* cloneChild = new Node(child->val);
                    clonedNodesPool[cloneChild->val] = cloneChild;
                    cloneNode->neighbors.push_back(cloneChild);
                    fillDfs(cloneChild, child, clonedNodesPool);
                } else {
                    Node* cloneChild = clonedNodesPool[child->val];
                    cloneNode->neighbors.push_back(cloneChild);
                }
            }
        }
    }

public:
    Node* cloneGraph(Node* node) {
        if (node == NULL){
            return NULL;
        }

        unordered_map<int, Node*> clonedNodesPool;
        Node* clonedHead = new Node(node->val);
        clonedNodesPool[clonedHead->val] = clonedHead;
        fillDfs(clonedHead, node, clonedNodesPool);
        return clonedHead;
    }
};