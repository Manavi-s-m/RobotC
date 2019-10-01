task main()
{
  int i=0;
  do
  {
    nxtDisplayTextLine(1,"helo");
    motor[motorA]=50;
    PlaySound(soundBeepBeep);
    wait1Msec(2000);
    eraseDisplay();
    motor[motorA]=0;
    nxtDisplayTextLine(3,"Hi");
    motor[motorB]=50;
    PlaySound(soundLowBuzz);
    wait1Msec(2000);
    eraseDisplay();
    motor[motorB]=0;
    i++;
 }while(i<3);
}
