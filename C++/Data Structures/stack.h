#ifndef STACK_H
#define STACK_H
#define MAX 1024


template <class E>
class Stack
{
    private:
        E * array;
        int top;
        int size;
    public:
        Stack(int capacity=MAX)
        {
            if(size <= 0)
            {
                throw string("Stack size must be larger than zero.");
            }
            this->size = capacity;
            this->array = new E[this->size];
            this->top = -1;
        }

        void push(E element)
        {
            if(this->top == size)
            {
                throw string("Stack overflow, stack has reached its limit.")
            }
            this->top++;
            array[this->top] = element;
        }

        void pop()
        {
            if(isStackEmpty)
            {
                throw string("Stack is empty, cannot remove elements.")
            }
            top--;
        }

        bool isStackEmpty()
        {
            if(this->top == -1)
            {
                return true;
            }
            return false;
        }

        ~Stack()
        {
            delete array;
        }
};



#endif
