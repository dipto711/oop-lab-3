import java.util.Scanner;
public class Student {
    private int id;
    private String name;
    private String department;
    private double cgpa;

    private static String university = "XYZ University";
    private static int totalStudents = 0;

    public Student(int id, String name, String department, double cgpa) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.cgpa = cgpa;
        totalStudents++;
    }


    public void displayStudentDetails() {
        System.out.println("Student ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("CGPA: " + cgpa);
        System.out.println("University: " + university);
        System.out.println();
    }


    public static void displayTotalStudents() {
        System.out.println("Total number of students: " + totalStudents);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        Student student1 = new Student(
                scanner.nextInt(),
                scanner.next(),
                scanner.next(),
                scanner.nextDouble()
        );

        Student student2 = new Student(
                scanner.nextInt(),
                scanner.next(),
                scanner.next(),
                scanner.nextDouble()
        );

        Student student3 = new Student(
                scanner.nextInt(),
                scanner.next(),
                scanner.next(),
                scanner.nextDouble()
        );


        student1.displayStudentDetails();
        student2.displayStudentDetails();
        student3.displayStudentDetails();

        displayTotalStudents();
    }
}
