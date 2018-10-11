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
	string name;

	//Create new room object and create pointer to new room
	room roomA;
	room * proom;
	proom = &roomA;


	cout << "Enter room name: ";
	//cin.get (cin, proom->title);
	//cin.ignore();
	cin >> proom->title;
	//cout << "Enter room index number:";
	//getline (cin, proom->roomNum);
	cout << "Enter dialog for room: ";
	//cin.get (cin, proom->dialog);
	//cin.ignore();
	cin >> proom->dialog;

	//Review room to user
	cout <<  "" << endl;
	cout << "" << endl;
	cout << "Here is the room you've made" << endl;
	cout << "============================"<< endl;
	cout << "Room name: "<<  roomA.title << endl;
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
