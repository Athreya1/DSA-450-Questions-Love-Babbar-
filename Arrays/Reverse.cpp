 int len = str.length() ; 
  string rev = "" ; 
  for(int i=0; i<len/2; i++)
  {
      char temp = str[i] ; 
      str[i] = str[len-1-i] ; 
      str[len-1-i] = temp; 
     
  }
  return str;
