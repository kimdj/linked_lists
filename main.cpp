// main.cpp
#include "header.h"

int main()
{

    Node myNodeClass;

    bool b=myNodeClass.isEmpty();
    cout << "myNodeClass.isEmpty()  ==>  " << b << '\n';


    int choice;
    bool exit=false;

    do {
        choice=myNodeClass.menu();
        switch (choice)
        {
            case 1:   myNodeClass.displayAllNodes();
                      break;
            case 2:   myNodeClass.displayExceptLastNode();
                      break;
            case 3:   myNodeClass.displayExceptFirstNode();
                      break;
            case 4:   myNodeClass.compareFirstAndLastNode();
                      break;
            case 5:   myNodeClass.countTwos();
                      break;
            case 6:   myNodeClass.displayIfLastNodeIsTwo();
                      break;
            case 7:   myNodeClass.displayFirstNode();
                      break;
            case 8:   myNodeClass.displayFirstTwoNodes();
                      break;
            case 9:   myNodeClass.displayLastNode();
                      break;
            case 10:  myNodeClass.displayLastTwoNodes();
                      break;
            case 11:  myNodeClass.addNodeAtBeginning(55555);
                      break;
            case 12:  myNodeClass.addNodeAtEnd(2);
                      break;
            case 13:  myNodeClass.addTwoNodesAtEnd(3);
                      break;
            case 14:  myNodeClass.addTwoNodesAtBeginning(4);
                      break;
            case 15:  myNodeClass.removeFirstNode();
                      break;
            case 16:  myNodeClass.removeLastNode();
                      break;
            case 17:  myNodeClass.removeFirstTwoNodes();
                      break;
            case 18:  myNodeClass.removeLastTwoNodes();
                      break;
            case 19:  cout << "System Exit.  Goodbye.\n\n";
                      exit=true;
                      break;
            default:
                      cout << "Please input again..\n\n";
        }
    } while (!exit);











    return 0;
}
