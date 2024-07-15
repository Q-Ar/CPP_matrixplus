#ifndef S21_MATRIX_OOP_H

class S21Matrix {
    private:
        int rows_, cols_;
        double **matrix_;
    public:
    // конструкторы
        S21Matrix();
        S21Matrix(int rows, int cols);
        ~S21Matrix();
    // -----------------------
    // методы

        bool EqMatrix(const S21Matrix &other) const;
        void SumMatrix(const S21Matrix &other);
        void SubMatrix(const S21Matrix &other);
        void MulNumber(const double num);
        void MulMatrix(const S21Matrix &other);
        S21Matrix Transpose();
        S21Matrix CalcComplements();
        double Determinant();
        S21Matrix InverseMatrix();

        int get_cols() const;
        int get_rows() const;
        void set_rows(int rows);
        void set_cols(int cols);

        

    // ------------------------
};


#endif