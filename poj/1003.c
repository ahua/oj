#include <stdio.h>

int bsearch(double *a, int start, int end, double e){
  if(start == end)
    return start;
  int mid = (start + end)/2;
  if(a[mid] < e)
    return bsearch(a, mid + 1, end, e);
  else if(mid == start || a[mid -1] < e)
    return mid;
  else
    return bsearch(a, start, mid - 1, e);
}

int main(int argc, char *argv[])
{
  double s[300];
  int i;
  double up;

  s[0] = 0.5;
  for(i = 1; i < 300; i ++){
    s[i] = s[i-1] + 1.0/(i+2);
  }

  scanf("%lf", &up);
  while(up != 0){
    i = bsearch(s, 0, 299, up);
    printf("%d card(s)\n", i+1);
    scanf("%lf", &up);
  }
  return 0;
}
