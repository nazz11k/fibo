#pragma once

#include "iostream"
#include "iomanip"

using namespace std;

void fuller(int** mat, int n);
int** trans(int** mat, int n);
void outer(int** mat, int n, string name);
void sorter(int** mat, int n);