/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int sumd1=0;
    int sumd2=0;
    int diff;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(i==j){
                sumd1=sumd1+arr[i][j];
            }
        }
        
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(i+j==arr.size()-1){
                sumd2=sumd2+arr[i][j];
            }
        }
        
    }
    diff = sumd1-sumd2;
    int difference = abs(diff);
    return difference;
    

}
