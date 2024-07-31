#include <iostream> 
#include "currency.cpp" 
#include "BSTNode.cpp"
#include "dollar.cpp"
#pragma once

class BST { 
    private: 
    BSTNode<Dollar>* root; 
    
    void insert(BSTNode<Dollar>*& node, Dollar value) { 
        if (node == nullptr) { 
            node = new BSTNode<Dollar>(value); 
        } else if (value.getAmountWhole() < node->getData().getAmountFrac()) { 
            insert(node->getLeft(), value); 
        } else { 
            insert(node->getRight(), value); 
        } 
    } 
    
    void inorderTraversal(BSTNode<Dollar>* node) {
         if (node != nullptr) { 
            inorderTraversal(node->getLeft()); 
            std::cout << node->getData().getAmountWhole() << " "; 
            inorderTraversal(node->getRight()); 
        } 
    } 
    
    void preorderTraversal(BSTNode<Dollar>* node) { 
        if (node != nullptr) { 
            std::cout << node->getData().getAmountWhole() << " "; 
            preorderTraversal(node->getLeft()); 
            preorderTraversal(node->getRight()); 
        }
    } 
    
    void postorderTraversal(BSTNode<Dollar>* node) { 
        if (node != nullptr) { 
            postorderTraversal(node->getLeft()); 
            postorderTraversal(node->getRight()); 
            std::cout << node->getData().getAmountWhole() << " "; 
        }
    } 
    bool search(BSTNode<Dollar>* node, double value) { 
        if (node == nullptr) { 
            return false; 
        } else if (node->getData().getAmountWhole() == value) { 
            return true; 
        } else if (value < node->getData().getAmountWhole()) { 
            return search(node->getLeft(), value); 
        } else { 
            return search(node->getRight(), value); 
        } 
    } 
    
    void destroyTree(BSTNode<Dollar>* node) { 
        if (node != nullptr) { 
            destroyTree(node->getLeft()); 
            destroyTree(node->getRight()); 
            delete node; 
        }
    } 
    
    int countNodes(BSTNode<Dollar>* node) { 
        if (node == nullptr) { 
            return 0; 
        } else { 
            return 1 + countNodes(node->getLeft()) + countNodes(node->getRight()); 
        } 
    } 
    
    public: 
    
    BST() : root(nullptr) {} 
    ~BST() { 
        destroyTree(root); 
    } 
    
    void insert(Dollar value) { 
        insert(root, value); 
    } 
    void inorderTraversal() { 
        inorderTraversal(root); 
        std::cout << std::endl; 
    } 
    void preorderTraversal() { 
        preorderTraversal(root); 
        std::cout << std::endl; 
    } 
    void postorderTraversal() { 
        postorderTraversal(root); 
        std::cout << std::endl; 
    } 
    bool search(double value) { 
        return search(root, value); 
    } 
    int count() { 
        return countNodes(root); 
    } 
    bool isEmpty() { 
        return root == nullptr; 
    } void empty() { 
        destroyTree(root); 
        root = nullptr; 
    } 
}; 