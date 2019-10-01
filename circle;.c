task main()
{
while(true)
{
  loop2:
  int i=0,j=0;
  nxtDrawCircle(50, 45, 25);
  wait1Msec(2000);
   eraseDisplay();
  nxtDrawLine(65, 30, 45, 30);
  wait1Msec(2000);
   while(true)
   {

  nxtDisplayStringAt(i, 25, "SIMS");
  wait1Msec(100);
  eraseDisplay();
  i+=2;
  if(i==100) goto loop1;
}
loop1:
  i=0;
while(true)
{
  nxtDisplayStringAt( 0,i, "SIMS");
  wait1Msec(100);
  eraseDisplay();
  i+=2;
   if(i==60) goto loop3;
}

 loop3:   i=0;
   j=0;
  while(true)                          // Infinite loop:
{
  nxtDisplayStringAt(i, j, "SIMS");
  wait1Msec(100);
  eraseDisplay();
  i+=3;
  j+=2;

  if(i==100 || j==60)
  goto loop2;
}

}


}
