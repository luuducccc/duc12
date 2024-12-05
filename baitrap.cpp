#include <stdio.h>
#include <math.h>


// Hàm tính biểu thức 1.a
double calculateExpr1a() {
    double result = sqrt(3 + sqrt(3 + sqrt(3)));
    return result;
}

// Hàm tính biểu thức 1.b
double calculateExpr1b() {
    double denominator = 2 + 1.0/(2 + 1.0/2);
    return 1.0/denominator;
}

int main() {
    printf("Result 1a: %lf\n", calculateExpr1a());
    printf("Result 1b: %lf\n", calculateExpr1b());
    return 0;
}
// Hàm tính các biểu thức trong bài 2
void calculateExpr2(double a, double b, double c) {
    // 2.a
    double expr2a = a*a - 2*b + a*b/c;
    
    // 2.b
    double expr2b = (b*b - 4*a*c)/(2*a);
    
    // 2.c
    double expr2c = (3*a - pow(b,3) - 2*sqrt(c))/sqrt(a*a/b - 4*a/b/c + 1);
    
    // 2.d
    double expr2d = sqrt(a*a/b - 4*a/b/c + 1);
    
    printf("Kết quả bài 2:\n");
    printf("a) a^2 - 2b + ab/c = %.2f\n", expr2a);
    printf("b) (b^2 - 4ac)/2a = %.2f\n", expr2b);
    printf("c) (3a - b^3 - 2√c)/√(a^2/b - 4a/bc + 1) = %.2f\n", expr2c);
    printf("d) √(a^2/b - 4a/bc + 1) = %.2f\n", expr2d);
}
//  câu 3 
void calculateTriangle(double a, double b, double c) {  
    if (a + b > c && a + c > b && b + c > a) {  
        double p = (a + b + c) / 2; // nửa chu vi  
        double S = sqrt(p * (p - a) * (p - b) * (p - c)); // diện tích  
        double ha = (2 * S) / a; // chiều cao  
        double ma = (1.0 / 2) * sqrt(2 * b * b + 2 * c * c - a * a); // trung tuyến  
        double ga = (S / p) * (b * c / (p - a)); // đường cao  
        double r = S / p; // bán kính đường tròn nội tiếp  
        double R = (a * b * c) / (4 * S); // bán kính đường tròn ngoại tiếp  

        printf("3.C = %.2f, S = %.2f\n", 2 * p, S);  
        printf("ha = %.2f\n", ha);  
        printf("ma = %.2f\n", ma);  
        printf("ga = %.2f\n", ga);  
        printf("r = %.2f, R = %.2f\n", r, R);  
    } else {  
        printf("Độ dài các cạnh không tạo thành một tam giác.\n");  
    }  
}  
// Bài 4: Nhập vào 4 chữ số và tính tổng  
void bai4() {  
    int a, b, c, d;  
    printf("Nhập vào 4 chữ số (a, b, c, d): ");  
    scanf("%d %d %d %d", &a, &b, &c, &d);  
    
    int tong = a + b + c + d;  
    printf("Tổng 4 chữ số là: %d\n", tong);  
    printf("Chữ số hàng trăm: %d\n", c);  
    printf("Chữ số hàng đơn vị: %d\n", d);   
}  

// Bài 5: Nhập vào một số nguyên và tính tổng các chữ số  
void bai5() {  
    int num, firstDigit, lastDigit, sum = 0;  
    printf("Nhập một số nguyên (có 4 chữ số): ");  
    scanf("%d", &num);  

    lastDigit = num % 10;           
    while (num != 0) {  
        sum += num % 10;           
        num /= 10;  
    }  

    printf("Tổng các chữ số là: %d\n", sum);  
    printf("Chữ số đầu: %d\n", firstDigit = sum / 1000);  
    printf("Chữ số cuối: %d\n", lastDigit);              
}  

// Bài 6: Nhập 2 số a và b, đổi giá trị  
void bai6() {  
    int a, b, t;  

    printf("Nhập số a: ");  
    scanf("%d", &a);  
    printf("Nhập số b: ");  
    scanf("%d", &b);  

    
   
    a += b; // a = a + b  
    b = a - b; // b = a - b (bây giờ là giá trị ban đầu của a)  
    a -= b; // a = a - b (a bây giờ là giá trị ban đầu của b)  
    printf("Sau khi đổi giá trị (không dùng biến phụ): a = %d, b = %d\n", a, b);  
}  

