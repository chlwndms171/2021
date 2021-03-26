
public class Employee {
	private String firstName;
	private String lastName;
	private double monthlySalary;

Employee(String str1, String str2, double num){
	this.setFirstName(str1);
	this.setLastName(str2);
	this.setMonthlySalary(num);
}
public String getFisrstName() {
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
public double getMonthlySalary() {
	return monthlySalary;
}

public void setMonthlySalary(double monthlySalary) {
	if (monthlySalary > 0) {
	this.monthlySalary = monthlySalary; // not setting value which is not positive
	}
	else {
		System.out.println("salary should be more than 0");
	}
}
public String toString() { //defining print type
	String info ="";
	info = info + this.firstName + " " + this.lastName 
			+ "'s monthly salary: $" + (int)this.monthlySalary; 
			
	return info;
}
public String fivePercent() { //defining print type for adding 5 percent on salary
	String info ="";
	info = info + this.firstName + " " + this.lastName 
			+ "'s monthly salary: $" + (int)(this.monthlySalary*1.05);
	
	return info;
}

}