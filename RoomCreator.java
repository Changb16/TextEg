package texteg;

import java.util.Scanner;

class RoomCreator {
    
    Scanner inputUser = new Scanner(System.in);
    String answer, name, index, text;
    Room tempRoom;
    
    public void roomCreate(){
        
        System.out.print("What is the name of your room?\nRoom Name: ");
        answer = inputUser.next();
        answer += inputUser.nextLine();
        name = answer;
        
        System.out.print("What is the index of your room?\nRoom Index: ");
        answer = inputUser.next();
        answer += inputUser.nextLine();
        index = answer;
        
        System.out.print("What is the text for your room?\nRoom Text: ");
        answer = inputUser.next();
        answer += inputUser.nextLine();
        text = answer;
        
        tempRoom = new Room(name, index, text);
        System.out.print("New Room Created. Any items you would like to add to it? ");
        answer = inputUser.next();
        answer = answer.toLowerCase();
        
        if ("y".equals(answer)){
            System.out.print("What is the index of the item you wish to add?\nIndex Number: ");
            answer = inputUser.next();
            System.out.print("Item added to room. Any others? ");
        }
        else if ("n".equals(answer)){
            
        }
        
    }
    
}
