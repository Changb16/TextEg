//Main menu, allows user to create, edit, and run projects

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "creator.h"
#include "writer.h"
#include "player.h"

using namespace std;

void menu()
{
    int choice=0;
    string game;

    struct timespec tim, tim2;
    tim.tv_sec = 3;
    tim.tv_nsec = 500,000,000;

    cout<<" ____________________ "<<endl;//Greeting Menu Header
    cout<<"| Welcome to TextEg! |"<<endl;
    cout<<"|====================|"<<endl;
    cout<<"| 1.) Create a story |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 2.) Load a story   |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 3.) Play a story   |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 4.) Quit           |"<<endl;
    cout<<"|____________________|"<<endl;
    cout<<"Choice: ";
    cin >> choice;
    cout<<endl;

    switch (choice) {
        case 1:
            cout <<"Starting story creator..."<<endl;
            int nanosleep(struct timespec *);

            creator(); //goes to creator function
            break;

        case 2:
            //open file explorer and load story
            cout<<"Starting story loader..."<<endl;

            cin.clear();
            cin.sync();
            cin.ignore();

            cout<<"Enter the name of the project to edit: ";
            getline(cin, game);
            int nanosleep(struct timespec *);

            writer(game); //goes to writer function
            break;

        case 3:
            //open story player
            cout<< "Starting player..."<<endl;
	    cout<< "Enter name of game to load: ";
	    cin.clear();
	    cin.sync();
	    cin.ignore();

	    getline(cin, game);
            int nanosleep(const struct timespec *, struct timespec *);

            player(game);
            break;

        case 4:
            cout<< "Exiting program..."<<endl;
            int nanosleep(const struct timespec *, struct timespec *);
            break;
    }
}
