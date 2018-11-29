//Loads and parses an XML file

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <cstdio>
#include <vector>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

void player(string game)
{
    string name = (game + ".xml");
    string title, author, description;
    int choice = 1, i = 0, a = 0;
    int roomNum = 0, testNum = 0;
    vector<int> v;
    stringstream ss;
    v.push_back(a);

    cin.clear();
    cin.sync();
    cin.ignore();

    XMLDocument project;
    project.LoadFile(name.c_str());

    XMLElement *pRoot;
    pRoot = project.FirstChildElement("text_adventure");
    XMLElement *pRoom;
    pRoom = pRoot->FirstChildElement("room");
    XMLElement *pText;
    XMLElement *pNum;

    title = pRoot->FirstChildElement("game")->GetText();
    author = pRoot->FirstChildElement("author")->GetText();

    cout<<"'" + title + "'" + " by " + author<<endl<<endl;

    while(choice != 0)
    {
        title = pRoom->FirstChildElement("title")->GetText();
        cout<<title<<endl;
        description = pRoom->FirstChildElement("description")->GetText();
        cout<<description<<endl<<endl;

        v.clear();

        ss.str("");
        i = 1;
        ss<<i;
        roomNum = 1;
        testNum = 0;
        pText = pRoom->FirstChildElement(("description_" + ss.str()).c_str());
        pNum = pRoom->FirstChildElement((("connection_") + ss.str()).c_str());

        while(pText && pNum)
        {
            ss.str("");
            ss<<i;

            description = pText->GetText();
            a = atoi(pNum->GetText());
            cout<<ss.str() + ".) " + description<<endl;

            v.push_back(a);

            i++;
            ss.str("");
            ss<<i;
            pText = pText->NextSiblingElement(("description_" + ss.str()).c_str());
            pNum = pNum->NextSiblingElement(("connection_" + ss.str()).c_str());
        }

        cout<<"0.) Quit playing."<<endl;
        cout<<endl<<"What action would you like to take?: ";
        cin >> choice;
        cout<<endl;

        if(choice > 0)
        {
            ss.str("");
            ss<<choice;

            pRoom = pRoot->FirstChildElement("room");

            roomNum = v.at(choice - 1);

            while(roomNum != testNum)
            {
                testNum = atoi(pRoom->FirstChildElement("room_num")->GetText());
                if(roomNum != testNum)
                    pRoom = pRoom->NextSiblingElement();
            }
        }
    }

    cout<<endl;
    cout<<"Thank you for playing.";

    return;
}
