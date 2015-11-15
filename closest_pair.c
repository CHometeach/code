#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DBL_MAX 1.79769e+308

typedef struct point {
	int id;
	int x;
	int y;
}Point;

double getDistance (int x1, int y1, int x2, int y2);

int main(int argc, char const *argv[]) {	
	int i, j, size, point1, point2;
	double min = DBL_MAX, distance = 0.0;
	size = atoi(argv[1]);
	Point pointArray[size];
	for (i = 0; i < size; ++i) {
		scanf("%d %d %d", &pointArray[i].id, &pointArray[i].x, &pointArray[i].y);
	}
	for (i = 0; i < size - 1; ++i) {
		for (j = i + 1; j < size; ++j) {
			distance = getDistance(pointArray[i].x, pointArray[i].y, pointArray[j].x, pointArray[j].y);
			if (min > distance) {
				min = distance;
				point1 = pointArray[i].id;
				point2 = pointArray[j].id;
			}			 
		}
	}
	printf("%d %d %f\n", point1, point2, min);
	return 0;
}

double getDistance (int x1, int y1, int x2, int y2) {
	double distance;
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	printf("%d %d %d %d = %f\n", x1, y1, x2, y2, distance);
	return distance;
}