
public class BankAccount {
	String firstName;
	String lastName;
	double balance;
	BankAccount(String str1, String str2, double num){
		this.setFirstName(str1);
		this.setLastName(str2);
		this.setBalance(num);
	}
	public String getFirstName() {
		return firstName;
	}
	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}
	public String getLastName() {
		return lastName;
	}
	public void setLastName(String lastName) {
		this.lastName = lastName;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public void withdraw(double amount) {
		if (this.balance < amount) {
			System.out.println(this.firstName + " " + this.lastName + " withdrew $" + (int)amount);
			System.out.println("Failed. Withdrawal amount exceeded account balance.");
		}
		else {
			this.balance -= amount;
			System.out.println(this.firstName + " " + this.lastName + " withdrew " + (int)amount +"$");
			System.out.println("Success.");
		}
	}
	public void transfer(BankAccount receiverObject, double amount) { 
		if(amount > this.balance) {
			System.out.println(this.firstName + " "+ this.lastName + " transferred $" + (int)amount + 
					" to " + receiverObject.firstName + " " + receiverObject.lastName);
			System.out.println("Failed. You have not enough money!");
		}
		else {
			receiverObject.balance += amount;
			this.balance -=amount;
			System.out.println(this.firstName + " "+ this.lastName + " transferred $" + (int)amount + 
					" to " + receiverObject.firstName + " " + receiverObject.lastName);
			System.out.println("Success.");
		}
	}
	public void printBalance() { // declared balance printing method
		System.out.println(this.firstName +" "+ this.lastName + "'s balance: $"+(int)this.balance);
	}
	
}
