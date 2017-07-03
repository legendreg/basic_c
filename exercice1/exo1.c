int main(void)
{
	int monnombre=42;
	signed char monchar='a';
	float monfloat=2.5;
	int tableau[4];
	
	tableau[0] = 10;

	tableau[1] = 23;

	tableau[2] = 505;

	tableau[3] = 8;

	signed char tableau1[5];
    tableau1[0] = 'z';

    tableau1[1] = 'r';

    tableau1[2] = 'c';

    tableau1[3] = 'i';
  
    tableau1[4] = '\n';
	
	float tableau2[2];
	tableau2[0] = 2.1;
	tableau2[1] = 2.2;

	write(1,tableau1,5);
}


