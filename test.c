#pragma config(Sensor, S1,     ss,                  sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  while(true)
  {
    int flag;
      eraseDisplay();
      if(SensorValue(ss)<25)
      flag=1;
       else
      flag=0;
      //wait1Msec(1000);
            nxtDisplayBigTextLine(3,"Its %d",flag);
      wait1Msec(1000);

      switch(flag)
      {
        case 1: motor[motorB]=-100;
				         motor[motorC]=-100;
				     wait1Msec(1000);
				     PlaySound(soundBeepBeep);
				     motor[motorB]=-100;
				     motor[motorC]=+100;
        nxtDisplayBigTextLine(3,"OBJECT");
        wait1Msec(1500);
        eraseDisplay();
        nxtDisplayBigTextLine(3,":)");
        wait1Msec(1500);
        eraseDisplay();
     wait1Msec(300);
     break;

     default:motor[motorB]=+70;
     motor[motorC]=+70;

   }
}
}
