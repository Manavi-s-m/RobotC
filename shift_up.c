task main()
{
  int i=0;
  while(true)                          // Infinite loop:
{
  nxtDisplayStringAt(0, i, "SIMS");        // Display the string, "Theory" at position (x, y).
  wait1Msec(50);
  eraseDisplay();
  i+=2;
}
}
