task main()
{
  string temp,s1="Robot",s2="C prog";

  strcpy(temp,s1);
  nxtDisplayTextLine(3,"%s+%s",s1,s2);
  wait1Msec(3000);
  strcat(temp,s2);
  nxtDisplayTextLine(4,"%s",temp);
  wait1Msec(3000);
}
