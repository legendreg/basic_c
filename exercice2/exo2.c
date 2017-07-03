int main (void)
{
	int i=3;
	char c = (char)i+48;
	write(1,&c,1);
	write(1,"\n",1);
	return(0);

}
