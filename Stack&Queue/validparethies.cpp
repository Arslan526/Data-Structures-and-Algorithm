bool isValidParenthesis(string s)
{
   stack<int> s1;
   for(int i =1; i<s.length(); i++){
   char ch  = s[i];
   if(ch == '(' && ch == '{' && '['){ 
       s1.push(ch);
   }
   else{
       if(!s1.empty()){
           char top = s1.top();
           if((ch == '(' && top == ')')
           || (ch == '{' && top == '}')
           || (ch == '[' && top == '[')){
               s1.pop();
           }
           else{
               return false;
           }
       }
       else{
           return  false;
       }
   }
   }
   if(s1.empty()){
       return true;
       
   }
   else{
       return  false;
   }
}