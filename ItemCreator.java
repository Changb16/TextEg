package texteg;

import java.util.Scanner;

class ItemCreator {
    
    Scanner inputUser = new Scanner(System.in);
    String name, description, answer, index;
    int heals, damage;
    Item tempItem;
    
    public void itemBuild(){
        
        System.out.print("Is this a Food? Y or N: ");
        answer = inputUser.next();
        answer += inputUser.nextLine();
        answer = answer.toLowerCase();
        
        if ("y".equals(answer)){
            System.out.print("Name your New Food.\nFood Name: ");
            name = inputUser.next();
            name += inputUser.nextLine();
            System.out.print("How much does it heal for?\nHeals: ");
            heals = inputUser.nextInt();
            Food tempFood = new Food(name, heals);
            System.out.print("What is the food description?\nDesc: ");
            description = inputUser.next();
            description += inputUser.nextLine();
            tempFood.createText(description);
            System.out.print("What would you like it's index to be?\nIndex: ");
            index = inputUser.next();
            index += inputUser.nextLine();
            tempFood.setIndex(index);
            System.out.println("\n\nYou have created " + tempFood.getName() + " that heals " + tempFood.getHeals() + " health.");
            System.out.println("It's description reads: " + tempFood.printText());
            System.out.println("Index: " + tempFood.getIndex());
        }
        else if ("n".equals(answer)){
            System.out.print("Is this a Weapon? Y or N: ");
            answer = inputUser.next();
            answer += inputUser.nextLine();
            answer = answer.toLowerCase();
            
            if ("y".equals(answer)){
                System.out.print("Name your New Weapon.\nWeapon Name: ");
                name = inputUser.next();
                name += inputUser.nextLine();
                System.out.print("How much does it damage for? ");
                damage = inputUser.nextInt();
                Weapon tempWeap = new Weapon(name, damage);
                System.out.print("What is the weapon description?\nDesc: ");
                description = inputUser.next();
                description += inputUser.nextLine();
                tempWeap.createText(description);
                System.out.print("What would you like it's index to be?\nIndex: ");
                index = inputUser.next();
                index += inputUser.nextLine();
                tempWeap.setIndex(index);
                System.out.println("\n\nYou have created " + tempWeap.getName() + " that hurts for " + tempWeap.getDamage() + " damage.");
                System.out.println("It's description reads: " + tempWeap.printText());
                System.out.println("Index: " + tempWeap.getIndex());
                }
            
            else if ("n".equals(answer)){
                System.out.print("Is this a piece of Furniture? Y or N: ");
                answer = inputUser.next();
                answer += inputUser.nextLine();
                answer = answer.toLowerCase();
                
                if ("y".equals(answer)){
                    System.out.print("Name your New Furniture.\nFurniture Name: ");
                    name = inputUser.next();
                    name += inputUser.nextLine();
                    System.out.print("How much health does it have?\nHealth: ");
                    int health = inputUser.nextInt();
                    Furniture tempFurn = new Furniture(name, health);
                    System.out.print("What is the furniture description?\nDesc: ");
                    description = inputUser.next();
                    description += inputUser.nextLine();
                    tempFurn.createText(description);
                    System.out.print("What would you like it's index to be?\nIndex: ");
                    index = inputUser.next();
                    index += inputUser.nextLine();
                    tempFurn.setIndex(index);
                    System.out.println("\n\nYou have created " + tempFurn.getName() + " with " + tempFurn.getHealth() + " health.");
                    System.out.println("It's description reads: " + tempFurn.printText());
                    System.out.println("Index: " + tempFurn.getIndex());
                }
                else if ("n".equals(answer)){
                    System.out.print("Name your New Item.\nItem Name: ");
                    name = inputUser.next();
                    name += inputUser.nextLine();
                    answer = answer.toLowerCase();
                    
                    System.out.print("What is the item description?\nDesc: ");
                    description = inputUser.next();
                    description += inputUser.nextLine();
                    System.out.print("What would you like it's index to be?\nIndex: ");
                    index = inputUser.next();
                    index += inputUser.nextLine();
                    tempItem = new Item(name, description, index);
                    tempItem.setIndex(index);
                    System.out.println("\n\nYou have created " + tempItem.getName() + ".");
                    System.out.println("It's description reads: " + tempItem.printText());
                    System.out.println("Index: " + tempItem.getIndex());
                }
                
                
            }
            
        }
        
    }
    
/*    public void checkItem(){
    
        String check1, nameCheck;
        int u = 0;
        int j = 0;
        
        while (u == 0){
            
            System.out.print("What is the item index?\nIndex: ");
            answer = inputUser.next();
            answer += inputUser.nextLine();
            
            check1 = tempItem.getIndex();
            
            System.out.println(check1);
            System.out.println(answer);
            
            if (answer.equals(check1)){
                nameCheck = tempItem.getName();
                System.out.println("What would you like to do with ");
            }
            
            
        }
    }
    */
    
}
