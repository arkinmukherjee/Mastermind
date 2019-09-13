// Function to load in decalrations for code class
#include <vector>

using namespace std;

class code {

	public:
		code(const int& n, const int& m);
		const int checkCorrect(const code& c1);
		const int checkIncorrect(const code& c1);
		const vector<int> getCode();
	private:
		void initRandom();
		const bool checkSize(const vector<int>& code1);
		const bool checkRange(const int& val1);

		vector<int> secretCode;
		int codeLength;
		int maxValue;
};