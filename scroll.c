task main()
{
  for(int i=0; i<1000; ++i)            // For Loop from 0 to 999 incrimenting 'i' by 1 each time:
{
  nxtScrollText("Scroll #%d.", i);    // Display "Scroll #i." (%d is replaced with variable 'i' at runtime.)
  wait1Msec(250);                     // Wait 520 milliseconds between each iteration of the For Loop.
}


}
