int lala (char c)
{
int n; 
n = c;

if (40 <= n && n <= 57 || n == 37 || n == 61) 
{
	return(0);
}
else
{
	return(1);
}

return(0);

}

int main (void)
{
int p;
p = lala('p');
int y;
y = p + 48;
 write(1,&y,1);
 write(1,"\n",1);
return(0);
}
