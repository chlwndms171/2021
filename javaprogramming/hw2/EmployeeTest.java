
public class EmployeeTest {

	public static void main(String[] args) {
		//creating two objects using Employee class
		Employee obj1 = new Employee("John", "Ewing", 3000);
		Employee obj2 = new Employee("Jack", "Sparrow", 100000); 
		
		//printing original value
		System.out.println(obj1);
		System.out.println(obj2);
		
		System.out.println("After raise by 5%");
		
		//printing modified value
		System.out.println(obj1.fivePercent());
		System.out.println(obj2.fivePercent());
		
	} 

}
