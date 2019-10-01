task main()
{
  int i=5000;
  motor[motorB]=50;
  motor[motorC]=0;
  wait1Msec(i);
   motor[motorB]=0;
  motor[motorC]=50;
  wait1Msec(i);
}
