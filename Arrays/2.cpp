string reverseWord(string str){
    
  //Your code here
  
  //calculating the size
  int c=0;
  int i=0;
  while(str[i]!='\0')
  {
      c++;
      i++;
  }
  
  i=0;
  int j=c-1;
  while(i<j)
  {
      char ch=str[i];
      str[i]=str[j];
      str[j]=ch;
      i++;
      j--;
  }
  return str;
}