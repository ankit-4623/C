/*int** generate(int numRows, int* returnSize, int** returnColumnSizes) 
    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));  
    int** result = (int**)malloc(numRows * sizeof(int*));  

    for (int i = 0; i < numRows; i++) {
        result[i] = (int*)malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1; 
    }*/