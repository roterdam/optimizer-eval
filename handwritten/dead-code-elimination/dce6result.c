// around loops, interesting

void dead_result6(int *data) {
  int i;
  int k = 0;
  int m = 0;
  int n = 0;
  int stop = data[0];
  for (i = 0; i < stop; i++) {
    int j = data[1];
    if (j)
      k++;
    else
      k++;
    j = data[2];
    data[j] = 2;
  }
  data[3] = k;
}

