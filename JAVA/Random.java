import java.util.Scanner;
public class Random {

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int num = scan.nextInt();
    
            for(int j = 1 ; j<=10 ; j++){

                System.out.println(num + " X " + j + " = " + num*j);
            }

            scan.close();
        
    }
    
}
