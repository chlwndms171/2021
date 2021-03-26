

public class BankAccountTest {

	public static void main(String[] args) {
		BankAccount1 obj1 = new BankAccount1("John", "Ewing", 14000);
		BankAccount1 obj2 = new BankAccount1("Jack", "Sparrow", 100000);
		//creating two objects
		
		System.out.println("Balance->");
		obj1.printBalance();
		obj2.printBalance();
		
		System.out.println("Operation->");
		obj1.withdraw(2000);
		
		System.out.println("Balance->");
		obj1.printBalance();
		obj2.printBalance();
		
		System.out.println("Operation->");
		obj2.transfer(obj1, 50000);
		
		System.out.println("Balance->");
		obj1.printBalance();
		obj2.printBalance();
		
		System.out.println("Operation->");
		obj2.withdraw(60000);
		
		System.out.println("Balance->");
		obj1.printBalance();
		obj2.printBalance();
		
		System.out.println("Operation->");
		obj2.transfer(obj1, 55000);
		
		System.out.println("Balance->");
		obj1.printBalance();
		obj2.printBalance();
	}

}
