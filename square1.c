task main()
{
  int i;
  for(i=0;i<20;i++)
  {
  motor[motorB]=75;
  motor[motorC]=75;
  wait1Msec(2000);
  motor[motorB]=100;
  motor[motorC]=-100;
  wait1Msec(3000);
}
}
