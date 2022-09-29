#include<stdio.h>
#include<stdlib.h>
void fire_thrusters(double vectors[12]) {
  int i;
  for (i = 0; i < 12; i++) {
    vectors[i] = 0;
  }
}
void safe_thrusters(double vec[3]) {
  int i;
  for (i=0; i<3; i++) {
    vec[i] = 0;
  }
}
int get_idx(char *a) {
  return atoi(a);
}
int main(int argc, char **argv) {
  double thruster[3];
  int i;
  safe_thrusters(thruster);
  i = atoi(argv[1]);
  if (i < 3) {
    //return -1;
  }
  thruster[i] = (float)atoi(argv[2]);
  fire_thrusters(thruster);
  return 0;
}

