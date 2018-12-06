package texteg;

import java.util.ArrayList;

class Furniture extends Item{
    
    private String name, description;
    private int health = 0;
    ArrayList <Thing> furnitureContents = new ArrayList <> ();
    
    public Furniture(){
        name = "";
        description = "";
    }
    
    public Furniture (String newName, int newHealth){
	name = newName;
        health = newHealth;
    }
	
    public String getName(){
	return name;								
    }
    
    public int getHealth(){
        return health;
    }
    
    public void setHealth(int newHealth){
        health = newHealth;
    }
	
    @Override
    public String toString(){
	return "Furniture:" + name + " with " + health + " health";                                                 
    }
    
}
