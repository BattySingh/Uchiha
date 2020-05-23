fun main() {
    var greeting: String? = null;

    when (greeting) {
        null -> greeting = "new greeting";
        else -> println(greeting);
    }
    
    println(greeting);
}