task main()
{
  for(int i=0;i<9;i++)
  {
  motor[motorB]=50;
  motor[motorC]=50;
  wait1Msec(3000);
  motor[motorB]=100;
  motor[motorC]=-100;
  wait1Msec(900);
}
}
