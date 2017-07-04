int mystrcmp (const char str[],  const char str2[])
{
  int i;
  i = 0;
  int o;
  o = 0;

  while (str[i] != '\0')                                                                                                                                                  { 
   	i = i+1;
}

while (str2[o] != '\0')                                                                                                                                                   {
	o = o+1;
}
return(i-o);
}
