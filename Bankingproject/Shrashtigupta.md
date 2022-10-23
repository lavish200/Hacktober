import java.util.Scanner ;
public class Banking {
    int bal , amt , ch ; 
     Scanner sc = new Scanner(System.in);
    void set() {
System.out.println("Press 1 for deposit");
System.out.println("Press 2 for withdraw");
System.out.println("Press 3 for show balance");
ch = sc.nextInt();
    }
void cal()
{
    switch (ch){
        case 1 : 
        System.out.println("Enter the amount to be dep");
        if (amt > 0 ) {
            bal = bal + amt ;
            System.out.println("Total balance = " +bal);
        }
        else {
            System.out.println("Invalid Amount");
        }
        break ;
        case 2:
        System.out.println("Enter the amount to be withdraw");
        amt = sc.nextInt();
        if (amt <= bal && amt >= 0) {
            bal = bal - amt ;
            System.out.print("Total bal " + bal) ;
    
        }
        else {
            System.out.println("Invalid amount");
        }
        break ;
        case 3 :
        System.out.println("Total bal = " +bal);
        break ;
        default :
        System.out.println("Wrong choice");

    }
}
public static void main (String[] args )
{
    Banking ob = new Banking() ;
    ob.set();
    ob.cal();
}
}
Output  :
![Screenshot (256)](https://user-images.githubusercontent.com/110158906/197378720-59cd8afa-10d3-41b1-ab4f-24326e38e720.png)
