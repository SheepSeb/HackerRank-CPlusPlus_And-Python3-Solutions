#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int elem_max=-1;
    int elem_sum,elem_sum1,elem_sum2,elem_sum3;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            elem_sum1 = arr[i][j]+arr[i][j+1]+arr[i][j+2];
            elem_sum2 = arr[i+1][j+1];
            elem_sum3 = arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            elem_sum =elem_sum1+elem_sum2+elem_sum3;
            if(i==0 &&j==0 || elem_sum > elem_max)
                elem_max = elem_sum;
        }
    }
    return elem_max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
