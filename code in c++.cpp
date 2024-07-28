#include <iostream>
#include <string>
using namespace std;
void introSoftwareDevelopment();
void introEvolutionOfAI();
int main() {
    int choice;
    cout << "Welcome to the Introduction to Software Development and AI Evolution Program!" << endl;
    cout << "Please choose a topic to learn more about:" << endl;
    cout << "1. Introduction to Software Development" << endl;
    cout << "2. Evolution of Upcoming AI" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    while (choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> choice;
    }
    if (choice == 1) {
        introSoftwareDevelopment();
    } else {
        introEvolutionOfAI();
    }

    return 0;
}
void introSoftwareDevelopment() {
    cout << "\n--- Introduction to Software Development ---" << endl;
    cout << "Software development is the process of conceiving, specifying, designing, programming, " << endl;
    cout << "documenting, testing, and bug fixing involved in creating and maintaining applications, " << endl;
    cout << "frameworks, or other software components." << endl;
    cout << "It began in the 1950s with languages like Assembly and Fortran, focusing on scientific " << endl;
    cout << "and military applications." << endl;
    cout << "Over decades, software development has evolved significantly with new programming languages, " << endl;
    cout << "methodologies, and technologies emerging." << endl;
}
void introEvolutionOfAI() {
    cout << "\n--- Evolution of Upcoming AI ---" << endl;
    cout << "Artificial Intelligence (AI) has undergone tremendous evolution since its inception." << endl;
    cout << "From the early days of symbolic AI and expert systems to the current era of machine learning " << endl;
    cout << "and deep learning, AI has made significant strides." << endl;
    cout << "Upcoming AI technologies focus on improving the capabilities of natural language processing, " << endl;
    cout << "computer vision, robotics, and autonomous systems." << endl;
    cout << "AI continues to impact various industries, from healthcare to finance, by providing intelligent " << endl;
    cout << "solutions and enhancing human capabilities." << endl;
}
