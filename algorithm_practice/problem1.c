#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DBL_MAX 1.79769e+308
#define NSIZE 2000
typedef struct point {
	int x;
	int y;
}Point;

double getDistance (int x1, int y1, int x2, int y2);

int main(int argc, char const *argv[]) {
	int t, n, T, N;

	int i, j, size, point1, point2;
	double min = DBL_MAX, distance = 0.0;
	// size = atoi(argv[1]);
	Point pointArray[NSIZE];
	scanf("%d", &T);
	for (t = 0; t < T; t++) {
		scanf("%d", &N);
		for (n = 0; n < N; n++) {
			scanf("%d %d",&pointArray[n].x, &pointArray[n].y);
		}
		for (i = 0; i < N - 1; ++i) {
			for (j = i + 1; j < N; ++j) {
				distance = getDistance(pointArray[i].x, pointArray[i].y, pointArray[j].x, pointArray[j].y);
				if (min > distance) {
					min = distance;
				}			 
			}
		}
		printf("%d %d %f\n", point1, point2, min);
	}
	return 0;
}

double getDistance (int x1, int y1, int x2, int y2) {
	double distance;
	distance = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
	// printf("%d %d %d %d = %lf\n", x1, y1, x2, y2, distance);
	return distance;
}