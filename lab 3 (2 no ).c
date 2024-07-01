import java.util.Scanner;

class Student {
    int id;
    String name;
    String department;
    double cgpa;
    static String university;
    static int count = 0;
    Student(int id, String name, String department, double cgpa) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.cgpa = cgpa;
        count++;
    }

    void displayStudentDetails() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("CGPA: " + cgpa);
        System.out.println("University: " + university);
    }

    public static void displayTotalStudents() {
        System.out.println("Total number of students: " + count);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the university: ");
        Student.university = scanner.nextLine();

        Student student1 = new Student(getInt("Enter ID 1: "), getInput("Enter name 1: "), getInput("Enter department 1: "), getDouble("Enter CGPA 1: "));
        Student student2 = new Student(getInt("Enter ID 2: "), getInput("Enter name 2: "), getInput("Enter department 2: "), getDouble("Enter CGPA 2: "));
        Student student3 = new Student(getInt("Enter ID 3: "), getInput("Enter name 3: "), getInput("Enter department 3: "), getDouble("Enter CGPA 3: "));

        System.out.println("Student 1 details:");
        student1.displayStudentDetails();
        System.out.println("Student 2 details:");
        student2.displayStudentDetails();
        System.out.println("Student 3 details:");
        student3.displayStudentDetails();

        Student.displayTotalStudents();
    }

    private static int getInt(String prompt) {
        Scanner scanner = new Scanner(System.in);
        System.out.print(prompt);
        return scanner.nextInt();
    }
    private static String getInput(String prompt) {
        Scanner scanner = new Scanner(System.in);
        System.out.print(prompt);
        return scanner.nextLine();
    }
    private static double getDouble(String prompt) {
        Scanner scanner = new Scanner(System.in);
        System.out.print(prompt);
        return scanner.nextDouble();
    }
}
