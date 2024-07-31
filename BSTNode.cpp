#include <iostream>
#include "dollar.cpp"
#include "currency.cpp"
#pragma once

template <typename T> 
class BSTNode { 
    private: 
    T data; 
    BSTNode<T>* left; 
    BSTNode<T>* right; 
    public: 
    BSTNode(T value) : data(value), left(nullptr), right(nullptr) {} 
    T getData() { 
        return data; 
    } 
    void setData(T value) { 
        data = value; 
    } 
    BSTNode<T>* getLeft() { 
        return left; 
    } 
    void setLeft(BSTNode<T>* node) { 
        left = node; 
    } 
    BSTNode<T>* getRight() { 
        return right; 
    } 
    void setRight(BSTNode<T>* node) { 
        right = node;
    } 
}; 