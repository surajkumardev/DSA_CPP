// //easy level leetCode Questions 
// //height of the binary tree
// //sum of all the nodes
// //222. Count Complete Tree Nodes


// #include<iostream>
// #include<vector>
// using namespace std; 

// //1. heigh of the binary Tree
// int heightBT(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     //left 
//     int leftHT=heightBT(root->left);
//     //right
//     int rightHT=heightBT(root->right);
//     ///add 1 as the height of the root->node

//     return 1+max(leftHT,rightHT);
// }

// //2. SUm of all the nodes
// int sumBT(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftsum=sumBT(root->left);
//     int rightSum=sumBT(root->right);


//     return (leftsum+rightSum+root->data);
// }

// //3 222. Count Complete Tree Nodes

// int NumberOfNodes(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int leftNode=NumberOfNodes(root->left);
//     int rightNode=NumberOfNodes(root->right);


//     return (leftNode+rightNode)+1; //+1 for the root node
// }

// int main(){ 


    



//     return 0;
// }