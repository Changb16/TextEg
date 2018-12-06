package texteg;

import java.util.ArrayList;

class Room {
    
    ArrayList <Object> roomContents = new ArrayList <> ();
    String name, index, roomText;
    
    public Room(){
        name = "";
        index = "";
        roomText = "";
    }
    
    public Room (String newName, String newIndex, String newText){
        name = newName;
        index = newIndex;
        roomText = newText;
    }
    
    public String getName(){
        return name;
    }
    
    public String getIndex(){
        return index;
    }
    
    public String getText(){
        return roomText;
    }
    
    public void addItem(Thing item){
        roomContents.add(item);
        System.out.print("New Item has been added to the Room\n\n");
    }
    
    public void removeItem(Thing item){
        roomContents.remove(item);
        System.out.print("Item has been removed from the Room\n\n");
    }
    
    

}
