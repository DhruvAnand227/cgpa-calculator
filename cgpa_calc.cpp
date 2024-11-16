#include <iostream>
#include <string>
using namespace std;

void addSubject(string arr1[], int arr2[], int size) {
    for (int i=0; i<size; i++) {
        string subjectName;
        int subjectMarks;
        cout << "Enter the name of subject " << (i+1) << ": ";
        cin.ignore();
        getline(cin, subjectName, '\n');
        cout << "Enter your marks in " << subjectName << ": ";
        cin >> subjectMarks;
        arr1[i] = subjectName;
        arr2[i] = subjectMarks;  
    }
    return ;
}

float cgpaCalculator(int arr2[], int size) {
    float totalMarks = 0;
    for (int i=0; i<size; i++) {
        totalMarks += arr2[i];
    }
    float percentage = (totalMarks/(size*100))*100;
    float cgpa = percentage/9.5;
    return cgpa;
}

int main() {
    int n;
    cout << "Enter the total subjects you have: ";
    cin >> n;
    string subjectNameArray[n] = {};
    int subjectMarksArray[n] = {};
    addSubject(subjectNameArray, subjectMarksArray, n);
    float cgpa = cgpaCalculator(subjectMarksArray, n);
    cout << endl;
    for (int k=0; k<n; k++) {
        cout << "Your marks in " << subjectNameArray[k] << " is: " << subjectMarksArray[k] << endl;
    } cout << endl;
    cout << "Your total cgpa is: " << cgpa << endl;
    
}
