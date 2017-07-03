int main (void)
{
char c = '6';
int n = c - 48;

if (0 <= n && n <= 9)
{
	write(1,"0",1);
}
else
{
	write(1,"1",1);
}

return(0);

}
