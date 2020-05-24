fun main() {
    val myList = listOf("list 1", "list 2", 5, false);

    println(myList);
    println(myList.size);
    println(myList.get(2));
    println(myList[1]);
    println("*********************************");

    for (item in myList) {
        println(item);
    }
    println("*********************************");

    myList.forEach { myItem ->
        println(myItem);
    }
    println("*********************************");
    myList.forEachIndexed { index, item ->
        println("$item is at place $index");
    }
}