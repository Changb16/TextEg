//Loads an xml file and appends data to it, then goes
//back to menu() when done

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <cstdio>
#include "menu.h"
#include "roomMaker.h"

using namespace std;

void writer(string game)
{
    int choice;
    string line, name = (game + ".xml");
    ifstream file;
    ofstream temp;
    file.open(name.c_str());
    temp.open("temp.xml");

    cin.clear();
    cin.sync();
    cin.ignore();

    while(getline(file, line))
    {
        if(line != "</text_adventure>")
            temp<<line<<endl;
    }

    file.close();
    temp.close();

    while(choice != 0)
    {
        cout<<" ================================================= "<<endl;
        cout<<"| What type of object would you like to create?   |"<<endl;
        cout<<"| Enter the number of your choice.                |"<<endl;
        cout<<"|=================================================|"<<endl;
        cout<<"| 1. ROOM - Create a new room.                    |"<<endl;
        cout<<"| 0. QUIT - Save project and return to main menu. |"<<endl;
        cout<<" ================================================= "<<endl;
        cout<<"Choice: ";
        cin >> choice;

        if(choice == 0)
        {
            temp.open("temp.xml", ios::app);
            temp<<endl;
            temp<<"</text_adventure>";
            temp.close();
        }

        else
            switch(choice)
            {
                case 1:
                    roomMaker();
            }
    }

    remove(name.c_str());
    rename("temp.xml", name.c_str());

    cout<<endl;

    menu();
}
