import java.util.Scanner ;

public class Dsa {

    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        
        int target;
        int n;
        int arr[];

        



        scanner.close();
        
    }

    public static int binarysearch(int size, int arr[], int target ){
        int low = 0;
        int high = size-1;

        while(low<=high){

            int mid = (low+high)/2;

            if(arr[mid] == target){
                return mid;
            }

            else if(arr[mid] < target){
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }

        }

        return -1;
    }
    
}
