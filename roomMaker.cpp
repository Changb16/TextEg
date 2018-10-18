//Bryan Chang
//Room creator program
//TextEg

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

struct room {
	string title;
	string roomNum;
	string dialog;
}test;

int roomMaker()
{
    ofstream temp;
    temp.open("temp.xml", ios::app);

	//Create new room object and create pointer to new room
	room roomA;
	room * proom;
	proom = &roomA;

	cin.clear();
	cin.sync();

	cout << "Enter room name: " <<endl;
	getline(cin,proom->title);

    cout << "Enter room index number: ";
	getline(cin,proom->roomNum);

	cout << "Enter dialog for room: "<<endl;
	getline(cin,proom->dialog);

	temp<<"  <room>"<<endl;
	temp<<"    <title> " + roomA.title + " </title>"<<endl;
	temp<<"    <room_num> " + roomA.roomNum + " </room_num>"<<endl;
	temp<<"    <description> " + roomA.dialog + " </description>"<<endl;
	temp<<"  </room>"<<endl;

	//Review room to user
	cout<<"" << endl;
	cout<<"" << endl;
	cout<<"Here is the room you've made"<<endl;
	cout<<"============================"<<endl;
	cout<<"Room name: "<< roomA.title<<endl;
	cout<<"Room index number: "<<roomA.roomNum<<endl;
	cout<<"Dialog: "<<roomA.dialog<<endl;

	temp.close();

	cin.get();
	return 0;
}
