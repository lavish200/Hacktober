import java.util.Scanner;

public class bubble {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of Array: ");
        int a = sc.nextInt();
        int[] list = new int[a];
        for (int i = 0; i < list.length; i++) {
            System.out.print("Enter the Value of array: ");
            list[i] = sc.nextInt();
        }
        int temp;
        for (int i = 0; i < list.length; i++) {
            for (int j = i + 1; j < list.length; j++) {
                if (list[i] > list[j]) {
                    temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }

        }
        System.out.print("The Sorted Array is: ");
        for (int i = 0; i < list.length; i++) {
            System.out.print(list[i] + " ");
        }
        sc.close();
    }
}
