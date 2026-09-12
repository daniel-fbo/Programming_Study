fun cod(nome : String) : String{
    val funNome: String = nome

    return funNome
}
fun main(){
    var nome : String = readln(); var nomeCod : String = cod(nome)
    println("O nome ${nome} codificado é ${nome}")
}