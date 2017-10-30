string numb2String(int a)
{
    //convert an integer  number a to string
    //eg  -1345 to "-1345"

    string res="";
   
    if (a==0) return "0";
    bool check;
    check=(a<0) ? true:false;
    a=abs(a);
    while(a>0)
    {
    res+= char(a%10 + '0');
    a=a/10;   
    }
    if (check) res+='-';
    reverse(res.begin(),res.end());
    return res;
}
