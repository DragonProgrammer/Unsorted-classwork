#include <iostream>
using namespace std;

class gradeactivities
{
protected:
	double score;
public:
	gradeactivities();
	gradeactivities(double s); // sets double score
	void setscore(double a, double b); // also sets double score
	double getscore(); // returns double score
	virtual char getletter() const; // returns the letter corisponding to the double score
};
class Essay: public gradeactivities // grade class for essay
{
public:
	Essay();
	Essay(double c, double g, double l, double s); // sets the score values of the essay, and computes total
	void getval(); // gets values from user for sub scores and computes
	double scoreget(); // returns the total score
	char getletter(); // returns the letter corisponding to the score of essay
private:
	double cont; // score for content
	double gram; // score for grammer
	double len; // score for length
	double spell; // score for spelling
	double e; // final value
};
class final : public gradeactivities //grade class for final
{
public:
	final();
	final(double n, double w); // sets value of double num and duble wro, and computes double val and double f
	void getval();
	double score();
	char getletter(); // returns the letter for the score of final
private:
	double num; // number questions
	double wro; // number wrong
	double val; // value of each question
	double f; // score on final
};

int main()
{
	gradeactivities G;
	Essay e;
	final f;
	char end;
	e.getval();
	cout << " The essay grade " << e.getletter() << endl;
	cout << endl << endl;
	f.getval();
	//cout << f.score() << endl;
	cout << " The exam grade " << f.getletter();
	G.setscore(f.score(), e.scoreget());
	cout << "\n\nThe Class grade is " << G.getletter() << endl;
	cin >> end;

	}

gradeactivities::gradeactivities(double s)
{
	score = s;
}
char gradeactivities::getletter() const
{
	if (score > 0.89)
		return 'A';
	else if (score > 0.79)
		return 'B';
	else if (score > 0.69)
		return 'C';
	else if (score > 0.59)
		return 'D';
	else
		return 'F';
}
double gradeactivities::getscore()
{
	return score;
}
final::final(double n, double w)
{
	num = n;
	wro = w;
	val = 100 / num;
	f = 100 - (val*wro);
}
char final::getletter()
{
	if (f > 89)
		return 'A';
	else if (f > 79)
		return 'B';
	else if (f > 69)
		return 'C';
	else if (f > 59)
		return 'D';
	else
		return 'F';
}
Essay::Essay(double c, double g, double l, double s)
{
	cont = c;
	gram = g;
	len = l;
	spell = s;
	e = cont + gram + len + spell;
}
char Essay::getletter()
{
	if (e > 89)
		return 'A';
	else if (e > 79)
		return 'B';
	else if (e > 69)
		return 'C';
	else if (e > 59)
		return 'D';
	else
		return 'F';
}
void final::getval()
{
	double n, w; // declaring variable to cin the value for number questions and wrong
	cout << "This is for the final exam.\n" << "How many questions?\n";
	cin >> n;
	num = n;
	cout << "How many did they get wrong?\n";
	cin >> w;
	wro = w;
	val = 100 / num; // compute value of each question
	f = 100 - (val*wro); // compute final score by out of 100

	cout << "Each question is worth " << val << endl;
	}
void Essay::getval() 
{
	double c, g, l, s; // declaration of vairiables to cin content, grammar, legnth, and spelling
	cout << "THe following grades are for the essay.\n" << " What was the score on content (out of 30)?\n";
	cin >> c;
	cont = c;
	cout << " What was the score on grammer (out of 30)?\n";
	cin >> g;
	gram = g;
	cout << " What was the score on length (out of 20)?\n";
	cin >> l;
	len = l;
	cout << " What was the score on spelling (out of 20)?\n";
	cin >> s;
	spell = s;
	e = cont + gram + len + spell; // math to get essay grade score
}
double Essay::scoreget()
{
	return e;
}
double final::score()
{
	return f;
}
void gradeactivities::setscore(double a, double b)
{
	score = (a + b)/200;
}
gradeactivities::gradeactivities()
{

}
final::final()
{}
Essay::Essay()
{}