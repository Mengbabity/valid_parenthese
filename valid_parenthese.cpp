# valid_parenthese
#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> p;
		char c = NULL;

		for (int i = 0; i < int(s.length()); i++)
		{
			c = s.at(i);
			switch (c)
			{
			case '(':p.push(c);
				break;
			case '{':p.push(c);
				break;
			case '[':p.push(c);
				break;
			case ')':if (p.empty() || p.top() != '(') return false;
					 else
						 p.pop();
				break;
			case '}':if (p.empty() || p.top() != '{') return false;
					 else
						 p.pop();
				break;
			case ']':if (p.empty() || p.top() != '[') return false;
					 else
						 p.pop();
				break;
			}
		}
		cout << p.empty() << endl;
		return p.empty();
	}
};

void main(){
	Solution s;
	s.isValid("{[(())]}");
}
