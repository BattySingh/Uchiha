// Working with spread opeartor

fun myGreet(greeting:String, vararg myArr:String) {
    myArr.forEach { item ->
        println(greeting + ", " + item);
    }
}

fun main() {
    val myArr = arrayOf("scooby doo", "naruto uzumaki", "jackie chan");
    myGreet("Hello", *myArr);
}