string getCompressedString(string &input) 
{
    int n=input.length();
    if(n==0)
    {
        return "";
        
    }
    int s=0;
    int e=0;
    
    string str="";
    
    while(s<n)
    {
        while((s<n)&&input[s]==input[e])
        {
            e++;
        }
        
        int totalchar=e-s;
        
        if(totalchar!=1)
        {
            str=str+input[s];
            str=str+(char)(totalchar+'0');
        }
        else
        {
            str=str+input[s];
        }
        s=e;
    }
    return str;
    
}
