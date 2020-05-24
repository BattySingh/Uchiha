fun main() {
    val myArr = arrayOf("ne", "to", "o");

    println(myArr[1]);

    for (index in myArr.indices) {
        println("$index has element ${myArr[index]}");
    }
}