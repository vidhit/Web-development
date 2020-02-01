#include<iostream>

using namspace std;

struct TreeNode
{
    int data;
    TreeNode*left;
    TreeNode*right;
};

// L=3,  R=10  , Nodes[3,10]

int CountNodes(struct TreeNode*root,int L,int R,)
{
    int count=0;
    // in order check each node whether it is Between L and R if yes then count++ else just recurse
    if(root==NULL)
        return 0;
        
    
    if(root!=NULL)
    {                                               //root=10, ,L=7,R=12  left part of root and right part of left subtree
                                                    // root=10, L=12 ,right part of root and left part of right 
        if(root->data>=L)
        {
        count= CountNodes(root->left,L,R); // O(N)
        int node_val=root->data;
        if(node_val>=L && node_val<=R)
        {
            count++;//o(1)
        }
        //temp=CountNodes(root->left->right,L,R);
        //count+=temp;
        }
        else if(root->data)
        
        int temp;
        temp=CountNodes(root->right,L,R);
        count=count+temp;
    }
    return count;
}