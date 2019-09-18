// Header file for the declaration of the code class

//libraries
#include <vector>

//standard namespace
using namespace std;

//declares the code class
class code {

//public member prototype functions
public:
	code(const int& n, const int &m);
	code(vector<int> guess);
	const int checkCorrect(const code &guess);
	const int checkIncorrect(const code &guess);
	const vector<int> getCode() const { return secretCode; }; //inline code to return the secretCode
	void setGuess(vector<int> guess);

//private member prototype functions and variables
private:
	void initRandom();
	const bool checkSize(const int& guessSize);
	const bool checkRange(const int& val1);

	vector<int> secretCode;
	int codeLength;
	int maxValue;
};