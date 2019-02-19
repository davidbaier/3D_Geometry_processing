#include "EigenTutorial.hh"

void EigenTutorial::solve_sparse_linear_system() {
    SMatd A;
    std::vector<T> tripletList;
    VecXd b;

    //This is a small sparse linear system Ax = b, where
    //     | 2  3  0  0  0 |
    //     | 3  0  4  0  6 |
    // A = | 0 -1 -3  2  0 |
    //     | 0  0  1  0  0 |
    //     | 0  4  2  0  1 |
    //and b is (8  20  13  6  17)T. Read the documentation of Eigen on sparse linear
    //algebra (http://eigen.tuxfamily.org/dox-3.2/group__Sparse__chapter.html).
    //Solve the system and output the value of A, x and b.

    //Add your code here

}