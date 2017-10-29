//Given a string s, find and return the first instance of a non-repeating character in it.
//If there is no such character, return '_'.


char firstNotRepeatingCharacter(std::string s) {
    int alp[26];
    int i;
    for (i=0;i <s.length(); i++)
        alp[ s[i]-'a']++;
    for (i=0;i <26; i++)
     if (alp[i]==1)
      {
         // cout<<char(i+'a')<<endl;
          return char(i+'a') ;
      }
    return '_'; 
}
