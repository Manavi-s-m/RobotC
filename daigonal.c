task main()
{
  int i=0;
  int j=0;
  while(true)                          // Infinite loop:
{
  nxtDisplayStringAt(i, j, "SIMS");
  wait1Msec(100);
  eraseDisplay();
  i+=3;
  j+=2;
}
}

