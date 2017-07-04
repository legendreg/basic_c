int mystrcmp (const char str[],  const char str2[])
{
  int i;
  i = 0;

  while (str[i] == str2[i])
{ 
	if (str[i] == 0 || str2[i] == 0)
{
	return (0);
}
	i = i+1;
}

int x = str[i];
int z = str2[i];

return(x-z);
}
