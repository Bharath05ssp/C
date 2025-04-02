int lengthOfLastWord(char* s) {
   int i = strlen(s) - 1;
   int count=0;

   while ( i>=0 && isspace(s[i]))
   {
   i--;

   };
   while(i>=0 && !isspace(s[i]))
   {
    i--;
    count++;
   
   }
 return count;
}