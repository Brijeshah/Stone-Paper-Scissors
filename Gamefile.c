#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main ()
{
  int k = 0, b;
  do
    {
      srand (time (NULL));
      k = rand () % 3;
      char *x[] = { "Stone", "Paper", "Siccors" };
      printf ("\n1)Stone\n2)Paper\n3)Siccors");
      printf ("\nSelect option:");
      scanf ("%d", &b);

      switch (b)

	{
	case (1):
	  {
	    if (x[k] == "Stone")
	      {
		printf ("Draw :-|");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	    else if (x[k] == "Paper")
	      {
		printf ("You Loose :-(");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	    else if (x[k] == "Siccors")
	      {
		printf ("You Win :-)");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	  }

	case (2):
	  {
	    if (x[k] == "Stone")
	      {
		printf ("You win :-)");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	    else if (x[k] == "Paper")
	      {
		printf ("Draw :-|");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	    else if (x[k] == "Siccors")
	      {
		printf ("You Loose :-(");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	  }

	case (3):
	  {
	    if (x[k] == "Stone")
	      {
		printf ("You Loose :-(");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	    else if (x[k] == "Paper")
	      {
		printf ("You Won :-)");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	    else if (x[k] == "Siccors")
	      {
		printf ("Draw :-|");
		printf ("\nComputer selected:%s", x[k]);
		break;
	      }
	  }
	}
    }
  while (2 > 1);
}
