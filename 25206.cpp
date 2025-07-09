#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class calculator {
	string name;
	float degree;
	string grade;
	string grade_table[9] = { "F", "D0", "D+", "C0", "C+", "B0", "B+", "A0", "A+" };
	float grade_score[9] = { 0.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5 };
public:
	calculator() = default;
	calculator(string name, float degree, string grade) {
		this->name = name;
		this->degree = degree;
		this->grade = grade;
	}
	float calculate() {
		for (int i = 0; i < 9; i++) {
			if (grade == grade_table[i]) return grade_score[i]*degree;
		}
		return 0.0f;
	}
};

int main() {
	calculator input[20];
	string name;
	float degree;
	string grade;
	float cnt = 0;
	for (int i = 0; i < 20; i++) {
		cin >> name >> degree >> grade;
		if (grade != "P") cnt+= degree;
		input[i] = calculator(name, degree, grade);
	}
	float hap = 0;
	for (int i = 0; i < 20; i++) {
		hap += input[i].calculate();
	}
	cout << fixed << setprecision(6) << hap / cnt;
}