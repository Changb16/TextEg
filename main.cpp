#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
    int choice=0;

    struct timespec tim, tim2;
    tim.tv_sec = 3;
    tim.tv_nsec = 500,000,000;


    cout << "------------------" << endl;
    cout << "Welcome to TextEg!" << endl;//Greeting Menu Header
    cout << "------------------" << endl;
    cout << "" << endl;
    cout << "1.) Create a story" << endl;
    cout << "" << endl;
    cout << "2.) Load a story" << endl;
    cout << "" << endl;
    cout << "3.) Play a story" << endl;
    cout << "" << endl;
    cout << "4.) Quit" << endl;

    cout << "------------------" << endl;
    cout << "Choice: ";
    cin >> choice;
    cout<<endl;

    switch (choice) {

        case 1:
            cout << "Starting story creator...";
            cout<<endl;
            cout<<endl;
            int nanosleep(struct timespec *);
            //creator(); //goes to creator function
            break;

        case 2:
            //open file explorer and load story
            cout<< "Add story loading function here -Bryan"<<endl;
            break;

        case 3:
            //open story player
            cout<< "Add play function here -Bryan"<<endl;
            break;

        case 4:
            cout<< "Exiting program..."<<endl;
            int nanosleep(const struct timespec *, struct timespec *);
            return 0;
            break;
    }
    return 0;
}
