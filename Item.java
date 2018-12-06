package texteg;

class Item{
    
    private String name, itemText, index;

    public Item(){
	name = "";
        index = "";
        itemText = "default";
    }
	
    public Item (String newName, String newText, String newIndex){
	name = newName;
        index = newIndex;
        itemText = newText;
    }
	
    public String getName(){
	return name;								//Return item name
    }
	
    public void setName(String newName){
	name = newName;								//Rename item name
    }
    
    public void createWeap(String w, int d){
        name = w;
    }
    
    public String getIndex(){
        return index;
    }
    
    public void setIndex(String ind){
        index = ind;
    }
    
    public void createText(String newText){
        itemText = newText;
    }
    
    public String printText(){
        return itemText;
    }
    
    @Override
    public String toString(){
	return "Item:" + name;                                                 //Return the item in command
    }
}
