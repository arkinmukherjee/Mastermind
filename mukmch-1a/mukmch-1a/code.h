// Function to load in declarations for code class
#include <vector>

using namespace std;

class code {

public:
	code(const int& n, const int &m);
	code(vector<int> guess);
	const int checkCorrect(const code &guess);
	const int checkIncorrect(const code &guess);
	const vector<int> getCode() const;
	void setGuess(vector<int> guess);
private:
	void initRandom();
	const bool checkSize(const int& guessSize);
	const bool checkRange(const int& val1);

	vector<int> secretCode;
	int codeLength;
	int maxValue;
};