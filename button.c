task main()
{

  while(true)
  {
    int i=nNxtButtonPressed;
    switch(i)
    {
      case 0:
      motor[motorB]=0;
      motor[motorC]=0;
      wait1Msec(1000);
      break;

      case 1:
      motor[motorB]=-100;
      motor[motorC]=100;
      wait1Msec(300);
      break;

      case 2:
      motor[motorB]=100;
      motor[motorC]=-100;
      wait1Msec(300);
      break;

      case 3:
      motor[motorB]=-100;
      motor[motorC]=-100;
      wait1Msec(1000);
      break;

      default:
        i=3;
    }
  }
}
