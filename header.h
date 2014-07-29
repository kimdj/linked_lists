// header.h
#include <iostream>

using namespace std;

const int SIZE=100;

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

        int menu();

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

        void addNodeAtBeginning(const int newData);
        void addNodeAtEnd(const int newData);
        void addTwoNodesAtEnd(const int newData);
        void addTwoNodesAtBeginning(const int newData);

        void removeFirstNode();
        void removeLastNode();
        void removeFirstTwoNodes();
        void removeLastTwoNodes();


};
