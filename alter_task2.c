task main()
{
  int i=3000;
  motor[motorB]=50;
  motor[motorC]=-50;
  wait1Msec(i);
   motor[motorB]=-50;
  motor[motorC]=50;
  wait1Msec(i);
}
