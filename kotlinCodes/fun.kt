fun getMe(n: Int, k: Int) {
    var n1: Int = 0; var n2: Int = 0; var n3: Int = 0; var n4: Int = 0;
    n1 = (n / ( 1 + k + (k * k) + (k * k * k)));
    n2 = k * n1;
    n3 = k * k * n1;
    n4 = k * k * k * n1;

    print(n1);
    print(" ");
    print(n2);
    print(" ");
    print(n3);
    print(" ");
    println(n4);
}

fun main() {
    getMe(40, 3);
    getMe(1200, 7);
    getMe(320802005, 400);
    getMe(4, 1);
}