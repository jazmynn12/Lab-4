#include <iostream> 
#include "currency.cpp" 
#include "BSTNode.cpp"
#include "BST.cpp"
#include "dollar.cpp"
#pragma once


int main() { 
    BST tree;
    //insert numbers for input*// 
    Dollar d1;
    
    tree.insert(d1); 
    tree.insert(d2); 
    tree.insert(d3); 
    tree.insert(d4); 
    std::cout << "Inorder Traversal: "; 
    
    tree.inorderTraversal(); 
    std::cout << "Preorder Traversal: "; 
    
    tree.preorderTraversal(); 
    std::cout << "Postorder Traversal: "; 
    
    tree.postorderTraversal(); 
}