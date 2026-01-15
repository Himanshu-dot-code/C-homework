//  class Account{
    
//     int accountNo;
//     String holderName;
//     double balance;

//     Account(int a, String b, double c){

//             accountNo = a;
//             holderName = b;
//             balance = c;

//     }

//     void display(){

//             System.out.println("Account number : " + accountNo);
//             System.out.println("Holder name : " + holderName);
//             System.out.println(" Balance : " + balance);
//     }
// }

// class friend{

//     static int numOffriends;
//     String name;

//     friend(String name){
//         this.name = name;
//         numOffriends++ ;
//     }

//     static void show(){
//         System.out.println("number of friends: " + numOffriends);
//     }
// }

// class Person{
//     String name;
//     int age;

//     Person(String name, int age){
//         this.name = name;
//         this.age = age;
//     }

//     void display(){

//         System.out.println("Name is : " + name + " Age is: " + age);
//     }
// }

//  class Student extends Person{
//     int rollNo;

//     Student(String name, int age, int roll){
//         super(name, age);
//         rollNo = roll;
//     }

//     void show(){

//         System.out.println("Name is : " + name + " Age is: " + age + " rollno. : " + rollNo);
//     }


// }


// class Report{

//     String name;
//     String vibe;
//     String nickname;
    

//     Report(String name, String vibe, String nickname){

//         this.name = name;
//         this.vibe = vibe;
//         this.nickname = nickname;
        
//     }

//     public String toString(){

//         return this.name + " is " + this.vibe + ".\n I call her " + this.nickname ;
//     }
// }


public class Oop {

    public static void  main (String[]args){


//  ACCOUNT PROBLEM
        
        // Account account = new Account(192929,"himanshu",4.33) ;

        // account.display();

// STATIC KEYWORD
        // friend friend1 = new friend("Himanshu Negi");
        // friend friend2 = new friend("Himanshu Negi");

        // friend.show();


// Super keyword
        // Student student = new Student("Negi",19,2416558);

        // student.show();


// tostring method

        // Report report = new Report(" "," kind and bhondu","Gadhi");
        // System.out.print(report);


    }


    
}
