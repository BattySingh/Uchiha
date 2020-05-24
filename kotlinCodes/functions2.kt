fun greet(greet: String, greetTo: List<String>) {
    greetTo.forEach { name ->
        println("$greet to $name");
    }
}

fun main() {
    val myList = listOf("oranges", "grapes", "apples", "banana");
    greet("Hello", myList);
}