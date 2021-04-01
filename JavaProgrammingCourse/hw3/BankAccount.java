
public class BankAccount {
	private String fname;
	private String uname;
	private String pword;
	private double balance;
	protected String operation;
	public BankAccount(String fname, String uname, String pword, double balance) {
		this.fname = fname;
		this.uname = uname;
		this.pword = pword;
		this.balance = balance;
	}
	public String getFname() {
		return fname;
	}
	public void setFname(String fname) {
		this.fname = fname;
	}
	public String getUname() {
		return uname;
	}
	public void setUname(String uname) {
		this.uname = uname;
	}
	public String getPword() {
		return pword;
	}
	public void setPword(String pword) {
		this.pword = pword;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public String getOperation() {
		return operation;
	}
	public void setOperation(String operation) {
		 this.operation = operation;
	}
	//login function which prints 1 only when inputs are correct
	public int login(String name, String password) { 
		if((this.uname.equals(name)) && (this.pword.equals(password))) {
			return 1;
		}
		else
			return 0;
	}
	public void checkBalance() {
		System.out.print("User: "+this.uname +"\nBalance: "+this.balance);
		this.operation = "Check Balance";
	}
	public void withdrawMoney(double amount) {
		if (amount > this.balance) {
			System.out.print("Withdrawal amount exceeded account balance.");
		}
		else {
			this.balance -= amount;
			this.operation = "Withdrawal";
		}
	}
	public void lastOperation() {
		System.out.print("Name: "+this.fname+"\nCurrent Balance: "+this.balance+
				"\nLast Operation: "+this.operation);
	}
	
	
}
