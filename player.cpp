//Loads and parses an XML file

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <fstream>
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
	string dialog;
};

void player(string game)
{
    string name = (game + ".xml");
    string title, author;
    int choice, i = 0, j = 1;
    ostringstream in_str;
    stringstream ss;

    cin.clear();
    cin.sync();
    cin.ignore();

    XMLDocument project;
    project.LoadFile(name.c_str());

    if(project.ErrorID() == 0)
    {
        XMLElement *pRoot;
        pRoot = project.FirstChildElement("text_adventure");

        data roomA;
        data * proom;
        proom = &roomA;

        proom->title = pRoot->FirstChildElement("game")->GetText();
        proom->author = pRoot->FirstChildElement("author")->GetText();

        cout<<roomA.title + " by " + roomA.author<<endl<<endl;

        proom->dialog = pRoot->FirstChildElement("room")->FirstChildElement("description")->GetText();
        cout<<roomA.dialog<<endl;
/*
        in_str<<j;
        string description = "description_" + in_str.str();

        while(pRoot->FirstChildElement("room")->FirstChildElement(description.c_str()))
        {

            proom->dialog = pRoot->FirstChildElement("room")->FirstChildElement(description.c_str())->GetText();
            ss<< j << ".) " << roomA.dialog;
            cout<<ss.str()<<endl;

            j++;
            //in_str<<j;
            string description = "description_" + in_str.str();
        }
*/
        cout<<"What action would you like to take?: ";
        cin >> choice;
    }

    return;
}
