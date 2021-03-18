
import java.util.Scanner;
public class InvoiceTest {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in); //declare scanner & variable
		String name;
		int q;
		double p;
		
		System.out.print("Product name: "); //get input
		name = sc.nextLine();
		System.out.print("Quantity: ");
		q = sc.nextInt();
		System.out.print("Price ($): ");
		p = sc.nextDouble();
		
		Invoice obj = new Invoice(name, q, p); // create object
		
		System.out.println("Total invoice amount: $"+obj.getInvoiceAmount()); // print object
		
		sc.close();		
	}

}
