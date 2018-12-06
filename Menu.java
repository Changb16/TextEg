package texteg;

import java.util.Scanner;

class Menu {
    
    public void menuStart(){
        
        Scanner inputUser = new Scanner(System.in);
        int answer, u = 0;
        ItemCreator newItem = new ItemCreator();
        CheckItem newItemCheck = new CheckItem();
        RoomCreator newRoom = new RoomCreator();
        
        System.out.println("################################");
        System.out.println("#Welcome to TextEg Java Edition#");
        System.out.println("################################");
        
        
        while (u == 0){
            System.out.println("\n\n");
            
            System.out.println("#################################");
            System.out.println("#Choose an Option to Get Started#");
            System.out.println("# 1- Build New Item             #");
            System.out.println("# 2- Build New Room             #");
            System.out.println("# 3- Exit                       #");
            System.out.println("#################################");
        
            System.out.print("Option: ");
            answer = inputUser.nextInt();
        
            switch (answer) {
                case 1:
                    newItem.itemBuild();
                    break;
                case 2:
                    //newItemCheck.itemCheck();
                    //newItem.checkItem();
                    //System.out.println("\nComing Soon\n");
                    newRoom.roomCreate();
                    break;
                case 3:
                    System.exit(0);
                default:
                    System.out.println("Please use a proper number");
                    break;
            }
            
        }
        
        
        
    }
    
}
