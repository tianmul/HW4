int compare(int a, int b) {
	    return -(a - b);
}
int compare2 (const void * a, const void * b)
{
  return -( *(int*)a - *(int*)b );
}
