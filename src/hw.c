#include <stdio.h>

extern void psub(int N);

int main() {
  printf("hw\n");

  printf("PRE PRE PRE (feat123)\n");
  printf("Master AAA\n");
  printf("Master BBB\n");
  printf("Adding another line in master branch\n");
  printf("Combining (*dogs*) and (CATS) in master branch\n");

  for (int ii=0; ii < 4; ii++) printf("%c\n", 'A'+ii);
  for (int kk=0; kk < 8; kk++) printf("%d ", kk);
  printf("\n");
  printf("(bug001 PRE-MERGE)\n");

  printf ("part I of bug022\n");
  printf ("part J and K of bug022\n");

printf("BLAH BLAH BLAH (feat123)\n");
printf("And finally(feat123)\n");

printf("Working on featABC\n");
printf("Part A and B of  (featABC)\n");
printf("Part C (featABC)\n");

printf("Part 000 of bug102\n");
printf("Part 111 of bug102\n");

  psub(5);
}
