

public class Invoice {
	private String pName;
	private int quantity;
	private double price;
	
Invoice(String str, int num1, double num2){
	this.setpName(str);
	this.setQuantity(num1);
	this.setPrice(num2);
}

public String getpName() {
	return pName;
}
public void setpName(String pName) {
	this.pName = pName;
}
public int getQuantity() {
	return quantity;
}
public void setQuantity(int quantity) {
	this.quantity = quantity;
}
public double getPrice() {
	return price;
}
public void setPrice(double price) {
	this.price = price;
}

public int getInvoiceAmount () {
		int num = this.quantity * (int)this.price;
		
		return num;
		
	}
}
