int Reverse (char* Param, char* PName)
{
 char n, Character[2000], Varname[2000];
 char FullString[2000];
 int i = strlen(Param);
 strcpy(FullString,"");
 strcpy(&n,"");
 while (i >= 0)
  {
  sscanf(Param+i, "%c", &n);
  sprintf (Character,"%c",n);
  strcat(FullString, Character);
  i--;
  }
 lr_save_string(FullString,PName);
}

vuser_init()
{
	return 0;
}