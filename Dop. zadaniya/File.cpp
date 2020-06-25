#include <iostream> 
#include <fstream>
#include <string>

using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");

    string line;
    ifstream out("input.txt");//читает файл
    ofstream out_row("out_row.txt", ios::out);//запись в файле
    ofstream out_col("out_col.txt", ios::out);//запись в файле
    
    int row,col, **array_row, **array_col, temp;
    double mean, sum = 0;

    //if (out.is_open() && out_row.is_open())
    if (out) {
        cout << "Всё ОК! Записи сделаны.\n\n";
        out >> row >> col;

        array_row = new int* [row];
        array_col = new int* [row];
        for (int i = 0; i < row; i++) {
            array_row[i] = new int[col];
            array_col[i] = new int[col];
        }
        for (int i = 0; i < row; i++) {
            for (int k = 0; k < col; k++) {
                if (k == col- 1) {
                    getline(out, line, '\n');
                }
                else {
                    getline(out, line, ',');
                }
                array_row[i][k] = stoi(line);
                array_col[i][k] = stoi(line);
            }
        }
        for (int i = 0; i < row; i++) {
            for (int k = 0; k < col; k++) {
                for (int j = col - 1; j > k; j--) {
                    if (array_row[i][j] < array_row[i][j - 1]) {
                        temp = array_row[i][j];
                        array_row[i][j] = array_row[i][j - 1];
                        array_row[i][j - 1] = temp;
                    }
                }
            }
        }
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < row- 1; k++) {
                for (int i = 0; i < row- k - 1; i++) {
                    if (array_col[i][j] < array_col[i + 1][j]) {
                        temp = array_col[i][j];
                        array_col[i][j] = array_col[i + 1][j];
                        array_col[i + 1][j] = temp;
                    }
                }
            }
        }
        int max = array_row[0][0], min = array_row[0][0];

        for (int i = 0; i < row; i++) {
            for (int k = 0; k < col; k++) {
                sum += array_row[i][k];
                if (array_row[i][k] > max) {
                    max = array_row[i][k];
                }
                if (array_row[i][k] < min) {
                    min = array_row[i][k];
                }
            }
        }
        mean = sum / (row * col);
        out_row << "Mean: " << mean << "\nMax: " << max << "\nMin: " << min << endl;
        out_col << "Mean: " << mean << "\nMax: " << max << "\nMin: " << min << endl;
     //   out_row << "Отсортированный по строкам, по возрастанию: \n";
     //   out_col << "Отсортированный по стоолбцам, по убыванию: \n";

        for (int i = 0; i < row; i++) {
            for (int k = 0; k < col; k++) {
                out_row << array_row[i][k] << " ";
                out_col << array_col[i][k] << " ";
            }
            out_row << endl;
            out_col << endl;
        }
    }
    else {
        cout << "Не получается открыть файл.\n";
    }

    out.close();
    out_row.close();
    out_col.close();

    system("pause");
}