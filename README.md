# TextEg
Software Engineering Text Engine 6

Please install lua5.2 libraries

Use these command:

sudo apt-get liblua5.2-dev 

In the TextEg-master folder run this command:

g++ menu.cpp -o run creator.cpp runLua.cpp writer.cpp main.cpp roomMaker.cpp player.cpp tinyxml2.cpp -I /usr/include/lua5.2/ -llua5.2
