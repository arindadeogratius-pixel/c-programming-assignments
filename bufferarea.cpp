#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

// Returns the points that fall within 'radius' of 'center'
vector<Point> pointsInBuffer(Point center, double radius, const vector<Point>& points) {
    vector<Point> result;
    for (const auto& p : points) {
        if (distance(center, p) <= radius) {
            result.push_back(p);
        }
    }
    return result;
}

int main() {
    Point center = {0.0, 0.0};                     // center location
    vector<double> bufferSizes = {1.0, 5.0, 10.0};  // different buffer sizes
    vector<Point> points = {                        // given set of points
        {0.5, 0.5}, {3.0, 4.0}, {8.0, 1.0}, {9.0, 9.0}, {0.2, -0.3}
    };

    for (double radius : bufferSizes) {
        cout << "Buffer radius " << radius << ":\n";
        vector<Point> inside = pointsInBuffer(center, radius, points);
        for (const auto& p : inside) {
            cout << "  (" << p.x << ", " << p.y << ")\n";
        }
        cout << "\n";
    }

    return 0;
}