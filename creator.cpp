//Names the game and author, creates an xml file with the same name as the game,
//then calls the writer function

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <fstream>
#include "writer.h"

using namespace std;

void creator()
{
    string game, author;
    ofstream file;

    cin.clear();
    cin.sync();
    cin.ignore();

    cout<<"Enter the name of the game: ";
    getline(cin, game);

    cout<<"Enter the name of the author: ";
    getline(cin, author);

    cout<<endl<<"'"<<game<<"' by "<<author<<endl;

    file.open((game + ".xml").c_str());

    file<<"<?xml version=\"1.0\" encoding=\"UTF-8\"?>"<<endl;
    file<<"<text_adventure>"<<endl;
    file<<endl;
    file<<"  <game>" + game + "</game>"<<endl;
    file<<"  <author>" + author + "</author>"<<endl;
    file<<endl;
    file<<"</text_adventure>";

    file.close();

    writer(game);
}
