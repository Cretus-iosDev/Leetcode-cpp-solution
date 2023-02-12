#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> roundedGrades;
    for (int grade : grades) {
        if (grade < 38) {
            roundedGrades.push_back(grade);
        } else {
            int nextMultipleOfFive = ((grade / 5) + 1) * 5;
            if (nextMultipleOfFive - grade < 3) {
                roundedGrades.push_back(nextMultipleOfFive);
            } else {
                roundedGrades.push_back(grade);
            }
        }
    }
    return roundedGrades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }
    vector<int> roundedGrades = gradingStudents(grades);
    for (int roundedGrade : roundedGrades) {
        cout << roundedGrade << endl;
    }
    return 0;
}
