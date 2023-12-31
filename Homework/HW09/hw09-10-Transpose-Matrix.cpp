/*
    ผู้ใช้กรอกจำนวนที่ต้องการในอาเรย์ 2 มิติ พร้อมกับกรอกค่าลงไปในอาเรย์จนครบทุกค่า จากนั้นให้คุณทำการ Transpose ค่าในอาเรย์และแสดงผลบนหน้าจอ
    
    Test case:
        Array element : 
            2 3
        Input :
            9 8 7
            6 5 5
    Output:
        Array
            9 8 7
            6 5 5
        Array Transpose
            9 6
            8 5
            7 5

    Test case:
        Array element : 
            3 6
        Input :
            1 2 3 4 5 6
            7 8 9 10 11 12
            13 14 15 16 17 18
    Output:
        Array
            1 2 3 4 5 6
            7 8 9 10 11 12
            13 14 15 16 17 18
        Array Transpose
            1 7 13
            2 8 14
            3 9 15
            4 10 16
            5 11 17
            6 12 18
*/#include <stdio.h>

int main() {
    int rows, cols;

    // รับข้อมูลจำนวนแถวและคอลัมน์จากผู้ใช้
    printf("Array element :\n");
    scanf("%d %d", &rows, &cols);

    // ประกาศอาเรย์เพื่อเก็บข้อมูล
    int arr[rows][cols];

    // รับข้อมูลจากผู้ใช้
    printf("Input :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // แสดงอาเรย์ต้นฉบับ
    printf("Array\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // ทำการ Transpose และแสดงผล
    printf("Array Transpose\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
