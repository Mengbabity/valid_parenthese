# valid_parenthese
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

#C++
The algorithm is simple,but I learn the New STL stack.
Main function:p.empty(); p.push(); p.pop(); p.top();

#Java
The same as C++,using the java.util.Stack;
Stack<Character> p = new Stack<Character>();
The difference is p.peek();  //the same as p.top()
