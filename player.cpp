//Loads and parses an XML file

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <cstdio>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

struct data
{
    string title;
    string author;
	int roomNum;
	int testNum;
	string description;
};

void player(string game)
{
    string name = (game + ".xml");
    string title, author, description;
    int choice = 1, i = 0;
    stringstream ss;

    cin.clear();
    cin.sync();
    cin.ignore();

    XMLDocument project;
    project.LoadFile(name.c_str());

    XMLElement *pRoot;
    pRoot = project.FirstChildElement("text_adventure");
    XMLElement *pRoom;
    pRoom = pRoot->FirstChildElement("room");

    data roomA;
    data * proom;
    proom = &roomA;

    proom->title = pRoot->FirstChildElement("game")->GetText();
    proom->author = pRoot->FirstChildElement("author")->GetText();

    cout<<"'" + roomA.title + "'" + " by " + roomA.author<<endl<<endl;

    while(choice != 0)
    {
        proom->title = pRoom->FirstChildElement("title")->GetText();
        cout<<roomA.title<<endl;
        proom->description = pRoom->FirstChildElement("description")->GetText();
        cout<<roomA.description<<endl<<endl;

        ss.str("");
        i = 1;
        ss<<i;
        proom->roomNum = 0;
        proom->testNum = 0;
        pRoom = pRoom->FirstChildElement(("description_" + ss.str()).c_str());

        while(pRoom)
        {
            ss.str("");
            ss<<i;

            proom->description = pRoom->GetText();
            cout<<ss.str() + ".) " + roomA.description<<endl;

            i++;
            ss.str("");
            ss<<i;
            pRoom = pRoom->NextSiblingElement(("description_" + ss.str()).c_str());
        }

        cout<<"0.) Quit playing."<<endl;
        cout<<endl<<"What action would you like to take?: ";
        cin >> choice;
        cout<<endl;

        if(choice > 0)
        {
            ss.str("");
            ss<<choice;

            while(roomA.roomNum == 0)
            {
                pRoom = pRoot->FirstChildElement("room");

                proom->roomNum = atoi(pRoom->FirstChildElement(("connection_" + ss.str()).c_str())->GetText());
            }

            while(roomA.roomNum != roomA.testNum)
            {
                proom->testNum = atoi(pRoom->FirstChildElement("room_num")->GetText());
                pRoom = pRoom->NextSiblingElement();

                //cout<<roomA.testNum<<endl;
            }

            pRoom = pRoom->PreviousSiblingElement();
        }

        else
            break;
    }

    return;
}
