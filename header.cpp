// header.cpp
#include "header.h"
/*
struct node
{
    int data;
    node *next;
};

class Node
{
    private:
        node *head;
        node *temp;
        node *current;
    public:

        Node();
        ~Node();

        bool isEmpty();

        void displayAllNodes();
        void displayExceptLastNode();
        void displayExceptFirstNode();

        bool compareFirstAndLastNode();
        int countTwos();
        void displayIfLastNodeIsTwo();

        void displayFirstNode();
        void displayFirstTwoNodes();

        void displayLastNode();
        void displayLastTwoNodes();

        void addNodeAtBeginning();
        void addNodeAtEnd();
        void addTwoNodesAtEnd();
        void addTwoNodesAtBeginning();

        void removeFirstNode();
        void removeLastNode();
        void removeFirstTwoNodes();
        void removeLastTwoNodes();


};
*/
/**************************************************/

Node::Node()
{
    current=new node;
    current->data=0;
    current->next=NULL;

    head=current;
    temp=current;
}

Node::~Node()
{
    return;
}

int Node::menu()
{
    cout << "****  Linear Linked List Program  ****\n\n";

    cout << "Please choose from the following:\n";
    cout << "1. displayAllNodes()\n";
    cout << "2. displayExceptLastNode()\n";
    cout << "3. displayExceptFirstNode()\n\n";

    cout << "4. compareFirstAndLastNode()\n";
    cout << "5. countTwos()\n";
    cout << "6. displayIfLastNodeIsTwo()\n\n";

    cout << "7. displayFirstNode()\n";
    cout << "8. displayFirstTwoNodes()\n\n";

    cout << "9. displayLastNode()\n";
    cout << "10. displayLastTwoNodes()\n\n";

    cout << "11. addNodeAtBeginning()\n";
    cout << "12. addNodeAtEnd()\n";
    cout << "13. addTwoNodesAtEnd()\n";
    cout << "14. addTwoNodesAtBeginning()\n\n";

    cout << "15. removeFirstNode()\n";
    cout << "16. removeLastNode()\n";
    cout << "17. removeFirstTwoNodes()\n";
    cout << "18. removeLastTwoNodes()\n\n";

    cout << "19. Exit\n";

    cout << ">> ";

    int choice;
    cin >> choice;
    cin.ignore(100, '\n');
    cout << '\n';

    return choice;
}

bool Node::isEmpty()
{
    if (current==NULL)
        return true;
    else
        return false;
}

void Node::displayAllNodes()
{
    current=head;

    if (isEmpty())
        cout << "LLL is empty.\n";
    else
    {
        cout << "Displaying All Nodes:" << '\n';
        while (current!=NULL)
        {
            cout << current->data << "__";
            current=current->next;
        }
        cout << "\n\n";

    current=head;   //reset current back to head
    }
}

void Node::displayExceptLastNode()
{
    current=head;

    if (isEmpty())
    {
        cout << "LLL is empty.\n\n";
    }
    else if (current->next==NULL)
    {
        cout << "LLL must contain at least two nodes.\n\n";
    }
    else
    {
        cout << "Displaying All Nodes EXCEPT Last Node:\n";
        do
        {
            cout << current->data << "__";
            current=current->next;
        } while (current->next!=NULL);
        cout << "\n\n";

    current=head;   //reset current back to head
    }
}

void Node::displayExceptFirstNode()
{
    current=head;

    if (isEmpty())
    {
        cout << "LLL is empty.\n\n";
    }
    else if (current->next==NULL)
    {
        cout << "LLL must contain at least two nodes.\n\n";
    }
    else
    {
        cout << "Displaying All Nodes EXCEPT First Node:\n";

        current=current->next;
        while (current!=NULL)
        {
            cout << current->data << "__";
            current=current->next;
        }
        cout << "\n\n";

    current=head;
    }
}

bool Node::compareFirstAndLastNode()
{
    current=head;

    int first=current->data;
    int last;
    while (current!=NULL)
    {
        if (current->next==NULL)
            last=current->data;
        current=current->next;
    }

    if (first==last)
    {
        cout << "First and Last Node values are the same!\n\n";
        return true;
    }
    else
    {
        cout << "First and Last Node values are NOT the same.\n\n";
        return false;
    }

    current=head;
}


int Node::countTwos()
{
    current=head;

    int count=0;
    while (current!=NULL)
    {
        if (current->data==2)
            ++count;
        current=current->next;
    }
    current=head;

    cout << "There are " << count << " twos in the list.\n\n";

    return count;
}

void Node::displayIfLastNodeIsTwo()
{
    current=head;

    while (current->next!=NULL)
    {
        current=current->next;
    }

    if (current->data==2)
        cout << "Last Node is a Two.\n\n";
    else
        cout << "Last Node is NOT a Two.\n\n";

    current=head;
}

void Node::displayFirstNode()
{
    current=head;

    cout << "Contents of First Node: " << current->data << '\n';
    cout << "Address of First Node: " << current << "\n\n";
}

void Node::displayFirstTwoNodes()
{
    current=head;

    if (current->next!=NULL)
    {
        current=current->next;
        displayFirstNode();
        cout << "Contents of Second Node: " << current->data << '\n';
        cout << "Address of Second Node: " << current << "\n\n";
    }
    else if (isEmpty())
    {
        cout << "List is Empty.\n\n";
    }
    else
    {
        cout << "List only contains a single node.\n";
    }
    current=head;
}

void Node::displayLastNode()
{
    current=head;

    while (current->next!=NULL)
    {
        current=current->next;
    }

    cout << "Contents of Last Node: " << current->data << '\n';
    cout << "Address of Last Node: " << current << "\n\n";
}

void Node::displayLastTwoNodes()
{
    current=head;

    while (current->next->next!=NULL)
    {
        current=current->next;
    }

    cout << "Contents of Second to Last Node: " << current->data << '\n';
    displayLastNode();

    current=head;
}

void Node::addNodeAtBeginning(const int newData)
{
    current=head;

    if (isEmpty())
    {
        temp=new node;
        current=temp;

        current->data=newData;
        current->next=NULL;

        head=current;
    }
    else
    {
        temp=new node;
        current=temp;

        current->data=newData;
        current->next=head;

        head=current;
    }
    current=head;
}

void Node::addNodeAtEnd(const int newData)
{
    current=head;

    if (isEmpty())
    {
        temp=new node;
        current=temp;

        current->data=newData;
        current->next=NULL;

        head=current;
    }
    else
    {
        while (current->next!=NULL)
        {
            current=current->next;
        }

        temp=new node;
        current->next=temp;
        current=current->next;
        current->data=newData;
        current->next=NULL;
    }
    current=head;
}

void Node::addTwoNodesAtEnd(const int newData)
{

}

void Node::addTwoNodesAtBeginning(const int newData)
{

}

void Node::removeFirstNode()
{

}

void Node::removeLastNode()
{

}

void Node::removeFirstTwoNodes()
{

}

void Node::removeLastTwoNodes()
{

}


