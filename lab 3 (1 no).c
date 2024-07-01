import java.util.Scanner;

class Book {
    String title;
    String author;
    int year;
    static String genre;
    Book(String title, String author, int year) {
        this.title = title;
        this.author = author;
        this.year = year;
    }


    void displayBookDetails() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Year: " + year);
        System.out.println("Genre: " + genre);
    }


    static int count = 0;
    public static void displayTotalBooks() {
        System.out.println("Total number of books: " + count);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        System.out.print("Enter the genre: ");
        Book.genre = scanner.nextLine();


        Book book1 = new Book(getInput("Enter title 1: "), getInput("Enter author 1: "), getYear("Enter year 1: "));
        Book book2 = new Book(getInput("Enter title 2: "), getInput("Enter author 2: "), getYear("Enter year 2: "));
        Book book3 = new Book(getInput("Enter title 3: "), getInput("Enter author 3: "), getYear("Enter year 3: "));

        Book.count++;
        Book.count++;
        Book.count++;

        System.out.println("Book 1 details:");
        book1.displayBookDetails();
        System.out.println("Book 2 details:");
        book2.displayBookDetails();
        System.out.println("Book 3 details:");
        book3.displayBookDetails();

        Book.displayTotalBooks();
    }

    private static String getInput(String prompt) {
        Scanner scanner = new Scanner(System.in);
        System.out.print(prompt);
        return scanner.nextLine();
    }

    private static int getYear(String prompt) {
        Scanner scanner = new Scanner(System.in);
        System.out.print(prompt);
        return scanner.nextInt();
    }
}

