package texteg;

class Weapon extends Item{
    
    private String name = "";
    private int damage = 0;
    private int health = 0;
    
    public Weapon(){
        name = "";
    }
    
    public Weapon (String newName, int newdamage) {
        name = newName;
        damage = newdamage;
    }
    
    @Override
    public String getName(){
        return name;
    }
    
    public int getDamage(){
        return damage;
    }
    
    @Override
    public void setName(String newName){
        name = newName;
    }
    
    public void setDamage(int newDamage){
        damage = newDamage;
    }
    
    public void printWeapon(Weapon newWeapon){
        if (newWeapon == null){
            System.out.println("No Weapon");
        }
        else {
            System.out.println(name);
        }
        
    }
    
    @Override
    public String toString(){
	return "Weapon:" + name;                                                 //Return the item in command
    }
}
