fun main() {
    val myCars = arrayOf("Bugati", "Ferrari", "Lambergini", "Porchese");

    myCars.forEachIndexed { index, car ->
        println("At index: $index is the $car");
    }
}