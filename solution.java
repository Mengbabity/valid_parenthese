package valid_parenthese;
import java.util.Stack;

public class solution {
    public boolean isValid(String s) {
    	Stack<Character> p = new Stack<Character>();   	
    	char c;  	
		for (int i = 0; i < s.length(); i++)
		{
			c = s.charAt(i);
			switch (c)
			{
			case '(':p.push(c);
				break;
			case '{':p.push(c);
				break;
			case '[':p.push(c);
				break;
			case ')':if (p.empty() || p.peek() != '(') return false;
					 else
						 p.pop();
				break;
			case '}':if (p.empty() || p.peek() != '{') return false;
					 else
						 p.pop();
				break;
			case ']':if (p.empty() || p.peek() != '[') return false;
					 else
						 p.pop();
				break;
			}
		}
        System.out.println(p.empty());
		return p.empty();
    	
    }
}
