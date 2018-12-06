package texteg;

class Food extends Item{
    
    private double heals = 0;
    private String name;
    
    public Food (String newName, double newHeals){
        name = newName;
        heals = newHeals;
    }
    
    public double getHeals(){
        return heals;
    }
    
    @Override
    public String toString(){
        return super.toString() + "\nHealing Power: " + heals;
    }
    
}
