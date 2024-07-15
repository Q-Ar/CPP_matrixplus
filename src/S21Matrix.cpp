#include "s21_matrix_oop.h"

#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <utility>

S21Matrix::S21Matrix(): rows_(0), cols_(0),matrix(nullptr){}
S21Matrix::S21Matrix(int rows, int cols): rows_(rows), cols_(cols){
    if(rows_ < 0 || cols < 0){
        throw std::length_error("Некорректный размер");
    }
    matrix_ = new_double[rows_ * cols_]();
}
