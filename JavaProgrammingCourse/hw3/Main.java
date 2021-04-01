import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in); //declare scanner & variable
		BankAccount account1 = new BankAccount("Firuz", "firuz", "p@ssw0rd", 2000.0);
		BankAccount account2 = new BankAccount("Kang Seong", "kang", "p@ssw0rd123", 34000.0);
		BankAccount account3 = new BankAccount("SiHyeon Ryu", "ryu", "p@ssw0rd1234", 10000.0);
		BankAccount currentAccount = new BankAccount("","","",0);
		String name;
		String password;
		int login = 0;
		
		//login function. repeats until it gets correct input.
		while (login == 0) { 
			System.out.print("Login\nUsername: ");
			name = scan.nextLine();
			System.out.print("Password: ");
			password = scan.nextLine();
			login = account1.login(name, password);
			if(login == 1) {
				currentAccount = account1;
				break;
			}
			login = account2.login(name, password);
			if(login == 1) {
				currentAccount = account2;
				break;
			}
			login = account3.login(name, password);
			if(login == 1) {
				{
					currentAccount = account3;
					break;
				}
			}
		}
		int userChoice = 5;
		
		while(userChoice>0) {
			System.out.print("1. Check balance (Enter 1);\n2. Withdraw money (Enter 2);\n"
					+ "3. Last Operation (Enter 3);\n0. Exit (Enter 0);\n");
			userChoice = scan.nextInt();
			if(userChoice == 1) {
				currentAccount.checkBalance();
				System.out.print("\n");}
			else if (userChoice == 2) {
				System.out.print("Enter amount: ");
				double amount = scan.nextDouble();
				currentAccount.withdrawMoney(amount);
				//System.out.print("\n");
				}
			else if (userChoice == 3) {
				currentAccount.lastOperation();
				System.out.print("\n");}
		}
		
		System.out.println("Thank you for banking with us!");
		
		scan.close();
}
}
