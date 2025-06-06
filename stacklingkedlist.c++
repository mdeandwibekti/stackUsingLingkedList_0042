#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class stack
{
private:
    Node *top;

public:
    stack()
    {
        top = NULL;
    }



    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "push value:" << value << endl;
        return value;
    }

   
   
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }

        cout << "popped value:" << top->data << endl;
        top = top->next;
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    stack stact;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stact.push(value);
                break;
            case 2:
                if (!stact.isEmpty())
                {
                    stact.pop();
                }
                else
                {
                    cout << "Stack is empty. Cannot pop." << endl;
                }
                break;
            case 3:
                if (!stact.isEmpty())
                {
                    stact.peek();
                }
                else
                {
                    cout << "Stack is empty. No top value." << endl;
                }
                break;
                case 4:
                cout << "Exiting Program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        cout << endl;
            

    }
    return 0;
   
}



