import java.util.Scanner;
// import java.util.Random;

public class Main{
        static Scanner scanner = new Scanner(System.in);

    public static void main(String[]args){


        // System.out.print("Enter a Number: ");
        // int first = scanner.nextInt();
        
        // System.out.print("Enter second Number: ");
        // int second = scanner.nextInt();

        // System.out.println(" Operation: \n 1.SUM \n 2.Diff \n 3.Product \n 4.Division");
        // int op = scanner.nextInt();

        // if(op == 1){
        //     int sum = first + second;
        //     System.out.print(" Sum is : " + sum);
        // }
        // else if(op == 2){
        //     int diff = first - second;
        //     System.out.print(" difference is : " + diff);
        // }
        // else if(op == 3){
        //     int pro = first * second;
        //     System.out.print(" product is : " + pro);
        // }
        // else if(op == 4){
        //     int div = first / second;
        //     System.out.print(" division is : " + div);
        // }

 // MADLIB GAME

        // System.out.print("Enter a name: ");
        // String name = scanner.nextLine();

        // System.out.print("Enter an animal: ");
        // String animal = scanner.nextLine();

        // System.out.print("Enter a place: ");
        // String place = scanner.nextLine();

        // System.out.print("Enter a verb (ending with -ing): ");
        // String verb = scanner.nextLine();

        // System.out.print("Enter a food: ");
        // String food = scanner.nextLine();

        // System.out.println(
        //     "One day, " + name + " was walking with a " + animal + " to " + place + ".\n" +
        //     "Suddenly, they started " + verb + " while eating " + food + ".\n" +
        //     "Everyone watching said, \"This is the weirdest day ever!\""
        // );


        // System.out.print("Kya Chahiye tekko ?? ");
        // String item = scanner.nextLine();
        
        // System.out.print("kitne ka ek? ");
        // int price = scanner.nextInt();

        // System.out.print("Kitne chahaiye: ");
        // int number = scanner.nextInt();

        // int total = price*number;
        // System.out.print(number + " " + item + " ke " + total + " rupiye huye ");
        // System.out.print(" to " + total + " rupiya de ");

// IS-ELSE LADDER

        // System.out.print("Enter the marks: ");
        // int g = scanner.nextInt();

        // if(g>=90 && g<=100){
        //     System.out.print("Your grade is A");
        // }
        // else if(g>=80 && g<=89 ){
        //     System.out.print("Your grade is B");
        // }
        // else if(g>=70 && g<=79 ){
        //     System.out.print("Your grade is C");
        // }
        // else if(g>=60 && g<=69 ){
        //     System.out.print("Your grade is D");
        // }
        // else{
        //     System.out.print("You are fail");
        // }

// STRINGS AND SUBSTRINGS 

        // System.out.print("give a string: ");
        // String st = scanner.nextLine();

        // int length = st.length();

        // String sub = st.substring(0,length/2);

        // System.out.println(sub);

        // System.out.print(st.charAt(length-1)) ;

// USERNAME 
        // System.out.print("Enter ur full name: ");
        // String st = scanner.nextLine();
        // int l = st.length();

        // String user = st.substring(0,3);

        // String name = st.substring(l-3,l-1/2);

        // System.out.print("username is " + user + name);

// FOOD ORDER
        // System.out.println(" 1. Pizza \n 2. Burger\n 3. kheer \n 4. Soup");
        // System.out.print("What would u like to order : ");
        // int order = scanner.nextInt();

        // switch(order){
        //     case 1 -> System.out.print("ur item is a Pizza \n Amount : 199 Rs.");
        //     case 2,3 -> System.out.print("ur item is kheer\n Amount : 49 Rs.");
        //     case 4 -> System.out.print("ur item is a Soup \n Amount : 89 Rs.");
        // }

// SIMPLE BEKAAR PROGRAM

        // String username ;
        // String pass;
        // String pas;

        // System.out.print("Enter Username: ");
        // username = scanner.nextLine();

        // if(username.isEmpty()){
        //     System.out.print("Username must not be empty: ");
        // }
        // else if (username.length()<4 || username.length()>12){
        //     System.out.print("Username Length MUST be between 4-12");
        // }

        // System.out.print("Enter Password: ");
        // pass = scanner.nextLine();
        
        // System.out.print("confirm Password: ");
        // pas = scanner.nextLine();

        // if(pass.length()<6 ){
        //     System.out.print("Password length must be more than 6");
        // }
        // else if (pass.compareTo(username)==0){
        //     System.out.print("Username must not be password");
        // }
        
        //  else if(pas.compareTo(pass) <0 || pas.compareTo(pass)>0){
        //     System.out.print("Password mismatch");
        // }
        // else{
        //     System.out.print("Account Created Successfully");
        // }

// NUMBER GUESSING GAME

        // Random random = new Random();//no system.in

        // int randomnum ;
        // int guess = 0;
        // int attempt = 0;
        
        // System.out.println("NUMBER GUESSING GAME:");
        // System.out.println("Guess a number betwwen 1 - 100: ");
        
        // randomnum = random.nextInt(1,101);

        // do{
        //         System.out.print("Enter a guess: ");
        //         guess = scanner.nextInt();
        //         attempt ++;

        //         if(guess<randomnum){
        //                 System.out.println("TOO LOW!!");
        //         }
        //         else if(guess>randomnum){
        //                 System.out.println("TOO HIGH!!");
                        
        //         }
        //         else{
        //                 System.out.println("7 CRORE !!!!!!!!!!!!!!!!!");
        //                 System.out.println("Number of attempts: " + attempt);
        //         }
        // }while(randomnum != guess);

// BANKING PROGRAM 

// Declare variables ;

        double balance = 0;
        int choice;
        boolean isRunning = true;

// MENU;

        do{
        System.out.println("****************");
        System.out.println("BANKING PROGRAM");
        System.out.println("****************");
        System.out.println("1.SHOW BALANCE\n2.DEPOSIT\n3.WITHDRAW\n4.EXIT");
        System.out.println("Enter your choice: ");
        choice = scanner.nextInt();

        switch (choice) {
                case 1 -> showBalance(balance);
                case 2 -> balance += deposit();
                case 3 -> balance -= withdraw(balance);
                case 4 -> {
                        isRunning=false;
                        exit();
                }
                default -> System.out.print("INVALID CHOICE");
        }
}while (isRunning);
         
        scanner.close(); 

 }

//  SHOWBALANCE FUNCTION;

 static void showBalance(double balance){
        System.out.println("Balance : " + balance);
}

// DEPOSIT;

static Double deposit(){

        System.out.println("Enter the amount to deposit: ");
        double amount = scanner.nextDouble();

        if(amount < 0){
                System.out.println("Amount cant be negative !!");
                return 0.0;
        }
        else{
                return amount;
        }       
}

// WITHDRAW;

static double withdraw(double balance){
        System.out.println("Enter the amount to withdraw: ");
        double amount = scanner.nextDouble();

        if(amount>balance){
                System.out.println("INSUFFICIENT FUNDS!!");
                return 0;
        }
        else if(amount<0){
                System.out.println("Amount can't be negative");
                return 0;
        }
        else{
                return amount;
        }
}

// EXIT;

static int exit(){
        
        System.out.print("Thank you!!");
        return 0;
}
}
