
//Bryan Chang
//Room creator program
//TextEg

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct room {
	string title;
	//int  roomNum;
	string dialog;
}test;


int roomCreator(){

	//const int nameSize = 20;
	//const int dialogSize = 200;
	//string name;
	//string dialog;
	

	//Create new room object and create pointer to new room
	room roomA;
	room * proom;
	proom = &roomA;


	cout << "Enter room name: " <<endl;
	//cin >> name; 
	//getline(cin,name);
	//roomA.title = name;
	//cin.ignore();
	cin >> proom->title;
	//cout << "Enter room index number:";
	//cin.getline (proom->roomNum,50);
	cout << "Enter dialog for room: ";
	cin >> proom->dialog;
	//cin.get (cin, proom->dialog);
	//cin.ignore();
	//cin.getline (proom->dialog, dialogSize);

	//Review room to user
	cout <<  "" << endl;
	cout << "" << endl;
	cout << "Here is the room you've made" << endl;
	cout << "============================"<< endl;
	cout << "Room name: "<<  roomA.title  << endl;
	cout << "Dialog: " << roomA.dialog << endl;
	

	cin.get();
	return 0; 
}


int main(){
	
	//Char var to store y/n answer from user
	char ans;
	string named;

	
	//Ask user if they want to make a room and record answer
	cout<<"Program has started"<<endl;
	cout<<"Would you like to create a new room? [y/n]"<<endl;
	cout<<"Choice: ";
	cin>>ans;
	
	//If yes start room creator function
	if (ans=='y'){
		//cout<<"Enter room name:";
		//cin>>named;
		roomCreator();
		
		
	
	}

	//Else terminate
	else{
		return 0;
	}
	
	
}
