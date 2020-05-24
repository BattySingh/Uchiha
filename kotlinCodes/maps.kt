fun main() {
    val maps = mapOf(1 to "a", 2 to "b", 3 to "c");

    println(maps);

    for (vale in maps) {
        println(vale);
    }

    maps.forEach { item ->
        println(item);
    }
}