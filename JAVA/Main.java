import java.util.Scanner;
// import java.util.Random;


class Book{

        String title;
        int pages;

        Book(String title, int pages){
                this.title = title;
                this.pages = pages;
        }

        void showInfo(){
                System.out.println(this.title + " pages: " + this.pages);
        }
}

class Library{

        String name;
        int year;
        Book[] books;

        Library(String name, int year, Book[] books){
                this.name = name;
                this.year = year;
                this.books = books;
        }

        void showInfo(){

                System.out.println(this.name + " " + this.year );
                System.out.println("Books availabe: ");
                
                for(Book book : books){
                        book.showInfo();
                }
        }
}

// class Account{
        
//         int accountNo;
//         String holderName;
//         double balance;

//         Account(int a, String b, double c){

//                 accountNo = a;
//                 holderName = b;
//                 balance = c;

//         }

//         void display(){

//                 System.out.println("Account number : " + accountNo);
//                 System.out.println("Holder name : " + holderName);
//                 System.out.println(" Balance : " + balance);
//         }
// }
public class Main{
        
        public static void main(String[]args){
                
                 Scanner scanner = new Scanner(System.in);
                //  Random random = new Random();


//  SIMPLE ARITHMETIC OPERATION

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

// SHOPPING CART 

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

//         double balance = 0;
//         int choice;
//         boolean isRunning = true;

// // MENU;

//         do{

//         System.out.println("****************");
//         System.out.println("BANKING PROGRAM");
//         System.out.println("****************");
//         System.out.println("1.SHOW BALANCE\n2.DEPOSIT\n3.WITHDRAW\n4.EXIT");
//         System.out.print("Enter your choice: ");
//         choice = scanner.nextInt();

//         switch (choice) {
//                 case 1 -> showBalance(balance);
//                 case 2 -> balance += deposit();
//                 case 3 -> balance -= withdraw(balance);
//                 case 4 -> {
//                         isRunning=false;
//                         exit();
//                 }
//                 default -> System.out.print("INVALID CHOICE");
//         }

// }while (isRunning);



// DICE ROLLER PROGRAM
        

        // System.out.println("DICE ROLLER PROGRAM:");
        // System.out.println("Enter the no. of times u wanna roll: ");
        // int roller = scanner.nextInt();
        // int total = 0;

        // if(roller>0){
        //         for(int i = 0; i<roller; i++){
        //         int roll = random.nextInt(1,7);
        //         printdie(roll);
        //         System.out.println("YOu rolled : " + roll);
        //          total +=  roll;

        //         }
                
        //         System.out.println("Total = " + total);
        // }
        // else{
        //         System.out.println("Number should be positive ");
        // }


        // int[] List = {1,10,20,100,45,3,4,5,90};

        // int count = 0;

        // for(int i = 0; i< List.length ; i++){

        //         if(List[i] > 10){

        //                 count++;
        //         }

        // }
        // System.out.print("Number of element greater than 10 : " + count);


        // String[] fruits ;

        // int size ;

        // System.out.print("Enter the size of array : ");
        // size = scanner.nextInt();
        // scanner.nextLine();

        // fruits = new String[size];

        // for(int i = 0; i < size; i++){

        //         System.out.printf("enter %d fruit : " , i+1);
        //         fruits[i] = scanner.nextLine();
        // }

        // for(String fruit : fruits){
        //         System.out.print(fruit + " ");

        // }
 
// 2D ARRAY 

        // char[][] Tele = {{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};

        // for(char[]i : Tele ){
                // for(char j : i ){
                        // System.out.print(j + " ");
                // }
                // System.out.println();
        // }

        // String[] question = {"1.A grim reaper and an immortal warrior live together.",
        //                      "2.In Reply 1988, which district/neighborhood do the families live in?",
        //                      "3.In Business Proposal, what’s the name of Tae-mu’s company?"} ;

        // String[][] options = {{"A) Hotel Del Luna","B) Goblin","C) My Roommate Is a Gumiho" ,"D) Tale of the Nine-Tailed"},
        //                       {"A) Gangnam","B) Samseong-dong","C) Ssangmun-dong","D) Hongdae"},
        //                       {"A) Banchan Holdings","B) Jang Ga Group","C) Go Food Company","D) Ha Ri Foods"}} ;

        // int[] answer ={2,3,3} ;

        // int guess;
        // int score = 0;

        // System.out.println("==================");
        // System.out.println("QUIZZ TIMEEE!!!!!!");
        // System.out.println("==================");

        // for(int i = 0; i < question.length; i++){
        //         System.out.println(question[i]);

        //         for(String option : options[i]){
        //                 System.out.println(option);

        //         }

        //         System.out.print("ANSWER : ");
        //         guess = scanner.nextInt();

        //         if(guess == answer[i]){
        //                 System.out.println("--------------");
        //                 System.out.println("SLAYYYYYYY!!!!");
        //                 System.out.println("--------------");
        //                 score++;
        //         }
        //         else{
        //                 System.out.println("--------------");
        //                 System.out.println("Wrong bitch!!");
        //                 System.out.println("--------------");
        //         }

        // }

        // System.out.print("your score is " + score + " out of " + question.length);


        // System.out.println("^^^^^^^^^^^^^^^^^^^^^");
        // System.out.println("SNAKE | WATER | GUN ");
        // System.out.println("^^^^^^^^^^^^^^^^^^^^^");

        // String[] choices = {"snake","water","gun"};
        // String player;
        // String comp;
        // Boolean isPlay = true;

        // do{

        // System.out.print("Enter ur choice(snake water gun): ");
        // player = scanner.nextLine().toLowerCase();

        // if(!player.equals("snake") && 
        //    !player.equals("water") && 
        //    !player.equals("gun")){

        //         System.out.println("Invalid choice ");
        //         continue;
        // }


        // comp = choices[random.nextInt(3)];
        // System.out.println("computer choice : " + comp);

        // if(player.equals(comp)){
        //         System.out.println("Its a Tie!!..Damnn!!");
        // }

        // else if ((player.equals("snake") && comp.equals("water")) || 
        // (player.equals("water") && comp.equals("gun")) || 
        // (player.equals("gun") && comp.equals("snake")) ){

        //         System.out.println("<<<<<<<<<|| U SLAYEDDDDDD ||>>>>>>>");
        //         System.out.println("<<<<<<<<<|| DAMNNNNNNNNNN ||>>>>>>>");
                
        // }
        // else{
        //         System.out.println("<<<<<<<<<|| U LOST BITCH TO A BOT!! ||>>>>>>>");
        //         System.out.println("BETTER GIVE UP");
        // }        

        // System.out.print("wanna play again(yes/no):");
        // String play = scanner.nextLine().toLowerCase();

        // if(play.equals("yes")){
        //         isPlay = true;
        // }
        // else{
        //         isPlay = false;
        // }

        // }while(isPlay);
        
        // ACCOUNT PROBLEM
        
        // Account account = new Account(192929,"himanshu",4.33) ;

        // account.display();

// Aggregation

        Book book1 = new Book("Lookism",584);
        Book book2 = new Book("Eleceed",384);
        Book book3 = new Book("Windbreaker",267);
        
        Book[] books = {book1,book2,book3};
        Library library = new Library("MANHWA COMMUNITY", 1897, books);

        library.showInfo();

        


        scanner.close(); 

 }

 

// //  SHOWBALANCE FUNCTION;

//  static void showBalance(double balance){
//         System.out.println("Balance : " + balance);
// }

// // DEPOSIT;

// static Double deposit(){

//         System.out.println("Enter the amount to deposit: ");
//         double amount = scanner.nextDouble();

//         if(amount < 0){
//                 System.out.println("Amount cant be negative !!");
//                 return 0.0;
//         }
//         else{
//                 return amount;
//         }       
// }

// // WITHDRAW;

// static double withdraw(double balance){
        
//         System.out.println("Enter the amount to withdraw: ");
//         double amount = scanner.nextDouble();

//         if(amount>balance){
//                 System.out.println("INSUFFICIENT FUNDS!!");
//                 return 0;
//         }
//         else if(amount<0){
//                 System.out.println("Amount can't be negative");
//                 return 0;
//         }
//         else{
//                 return amount;
//         }
// }

// EXIT;

// static int exit(){
        
//         System.out.print("Thank you!!");
//         return 0;
// }

// TO PRINT DIE ASCII CHARACTER
// static void printdie(int roll){
//         String dice1 ="""
//                           ------------
//                          |            |
//                          |            |
//                          |     ●      |
//                          |            |
//                          |            |
//                           ------------
//                         """; 
//         String dice2 ="""
//                           ------------
//                          |●           |
//                          |            |
//                          |            |
//                          |            |
//                          |           ●|
//                           ------------
//                         """; 
//         String dice3 ="""
//                           ------------
//                          |●           |
//                          |            |
//                          |      ●     |
//                          |            |
//                          |           ●|
//                           ------------
//                         """; 
//         String dice4 ="""
//                           ------------
//                          |●          ●|
//                          |            |
//                          |            |
//                          |            |
//                          |●          ●|
//                           ------------
//                         """; 
//         String dice5 ="""
//                           ------------
//                          |●          ●|
//                          |            |
//                          |      ●     |
//                          |            |
//                          |●          ●|
//                           ------------
//                         """; 
//         String dice6 ="""
//                           ------------
//                          |●          ●|
//                          |            |
//                          |●          ●|
//                          |            |
//                          |●          ●|
//                           ------------
//                         """; 

//         switch(roll){
//                 case 1 -> System.out.print(dice1);
//                 case 2 -> System.out.print(dice2);
//                 case 3 -> System.out.print(dice3);
//                 case 4 -> System.out.print(dice4);
//                 case 5 -> System.out.print(dice5);
//                 case 6 -> System.out.print(dice6);
//         }
// }
}
