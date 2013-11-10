/**
    Opencv example code: basic algebra operations in Opencv
    Enrique Marin
    88enrique@gmail.com
*/


#include <iostream>
#include <stdio.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

int main(){

    // Matrix initialization
    float a[] = {3,2,5,6,5,8,2,3,4};
    Mat A = Mat(3, 3, CV_32FC1, a);
    cout << "A: " << endl << A << endl << endl;

    float b[] = {7,4,3,5,3,2,1,2,9};
    Mat B = Mat(3, 3, CV_32FC1, b);
    cout << "B: " << endl << B << endl << endl;

    Mat C;

    // Vector initialization
    float d[] = {2,4,1};
    Mat D = Mat(3, 1, CV_32FC1, d);
    cout << "D: " << endl << D << endl << endl;
    float e[] = {5,2,9};
    Mat E = Mat(3, 1, CV_32FC1, e);
    cout << "E: " << endl << E << endl << endl;

    Mat F;


    // Matrix and vector multiplication
    cout << "Matrix-vector multiplication: " << A*D << endl << endl;

    // Matrix zeros
    C = Mat::zeros(3,3,CV_32FC1);
    cout << "Matrix Zeros: " << endl << C << endl << endl;

    // Matrix ones
    C = Mat::ones(3,3,CV_32FC1);
    cout << "Matrix Ones: " << endl << C << endl << endl;

    // Matrix identity
    C = Mat::eye(3,3,CV_32FC1);
    cout << "Matrix Identity: " << endl << C << endl << endl;

    // Matrix addition
    C = A + B;
    cout << "Addition: " << endl << C << endl << endl;

    // Matrix multiplication
    C = A * B;
    cout << "Multiplication: " << endl << C << endl << endl;

    // Matrix multiplication per element
    C = A.mul(B);
    cout << "Multiplication 1 to 1: " << endl << C << endl << endl;

    // Cross product
    F = D.cross(E);
    cout << "Cross product: " << endl << F << endl << endl;

    // Dot product
    F = D.dot(E);
    cout << "Dot product: " << endl << F << endl << endl;

    // Matrix inverse
    C = A.inv();
    cout << "Inverse: " << endl << C << endl << endl;

    // Matrix transpose
    C = A.t();
    cout << "Transpose: " << endl << C << endl << endl;

    // Matrix determinant
    cout << "Determinant: " << endl << determinant(A) << endl << endl;

    // Vector normalization
    normalize(D, F);
    cout << "Normalization: " << endl << F << endl << endl;

    return 0;
}

