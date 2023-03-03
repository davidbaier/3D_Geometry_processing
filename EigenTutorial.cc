#include "EigenTutorial.hh"

void EigenTutorial::solve_sparse_linear_system() {
    SMatd A(5,5);
    std::vector<T> tripletList;
    VecXd b(5);

    //This is a small sparse linear system Ax = b, where
    //     | 2  3  0  0  0 |
    //     | 3  0  4  0  6 |
    // A = | 0 -1 -3  2  0 |
    //     | 0  0  1  0  0 |
    //     | 0  4  2  0  1 |
    //and b is (8  45  -3  3  19)T. Read the documentation of Eigen on sparse linear
    //algebra (http://eigen.tuxfamily.org/dox-3.2/group__Sparse__chapter.html).
    //Solve the system and output the value of A, x and b.
    b << 8,45,-3,3,19;
    tripletList.assign({T(0,0,2.0),T(0,1,3.0),T(1,0,3.0),T(1,2,4.0),T(1,4,6.0),T(2,1,-1.0),T(2,2,-3.0),T(2,3,2.0),T(3,2,1.0),T(4,1,4.0),T(4,2,2.0),T(4,4,1.0)});
    A.setFromTriplets(tripletList.begin(), tripletList.end());

    Eigen::SparseLU<Eigen::SparseMatrix<double>> solver;
    solver.analyzePattern(A);
    solver.factorize(A);

    VecXd x = solver.solve(b);

    std::cout << x << std::endl;
}
