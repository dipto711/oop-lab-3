import java.util.Scanner;

class Book {
    static String genre = "Fiction";
    String title;
    String author;
    int year;
    public Book(String title, String author, int year) {
        this.title = title;
        this.author = author;
        this.year = year;
    }


    public void displayBookDetails() {
        System.out.println("Title: " + title + ", Author: " + author + ", Year: " + year + ", Genre: " + genre);
    }
    public static void displayTotalBooks(int total) {
        System.out.println("Total number of books: " + total);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Book[] books = new Book[3];

        for (int i = 0; i < 3; i++) {
            System.out.print("Enter book title: ");
            String title = scanner.nextLine();
            System.out.print("Enter book author: ");
            String author = scanner.nextLine();
            System.out.print("Enter book year: ");
            int year = scanner.nextInt();
            scanner.nextLine();

            books[i] = new Book(title, author, year);
        }

        for (Book book : books) {
            book.displayBookDetails();
        }

        displayTotalBooks(books.length);
    }
}
