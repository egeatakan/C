# include <math.h> // pow function is in math library
# include <stdio.h>
// cubeVolume function prototype
int cubeVolume(int sideLength);
// main function
int main(void) {
 int result;
 result = cubeVolume(3);
 printf("A cube with side length 2 has volume %d\n",
result);
 return 0;
}

// cubeVolume function
int cubeVolume(int sideLength) {
 int volume = pow(sideLength,3);
 return volume;
}