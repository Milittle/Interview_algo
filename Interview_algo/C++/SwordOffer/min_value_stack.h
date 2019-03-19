#pragma once
#include <stack>
using std::stack;

class min_value_stack{
public:
    void push(int value) {
        if (minStack.empty())
        {
            minStack.push(value);
        }
        if (value < minStack.top())
        {
            minStack.push(value);
        }
        elementStack.push(value);
    }
    void pop() {
        if (!elementStack.empty())
        {
            if (elementStack.top() == minStack.top())
            {
                minStack.pop();
            }
            elementStack.pop();
        }
    }
    int top() {
        if (!elementStack.empty())
        {
            return elementStack.top();
        }
        else
        {
            return -1;
        }
    }
    int min() {
        if (!minStack.empty())
        {
            return minStack.top();
        }
        else
        {
            return -1;
        }
    }
    
private:
    std::stack<int> elementStack;
    std::stack<int> minStack;
};