import java.util.Scanner;
import java.text.DecimalFormat;

public class areaofcircle
{
    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);
        
        double area;
        double radius;
        
        System.out.print("Enter a radius (in cm): ");
        
        radius = sc.nextDouble();          
        area =  Math.PI * Math.pow(radius, 2);
        
        DecimalFormat dec = new DecimalFormat("#.##");
        String area_1 = dec.format(area);
        
        System.out.println("The radius of " + radius + " cm is " + area_1 + " cm².");
    }
}