private atomic function
createletter_b
(
show : Boolean)
{
data → b_letters := data → board → create sprite set
letter_b := data → board → create picture(art → letterb)
letter_b → set pos(math → random range(data → board → width + 10, data → board → width + 20), math → random range(0, data → board → height + 10))
letter_b → set z index(2)
letter_b → set speed x(math → random range( - 100, - 300))
data → b_letters → add(letter_b)
if (show → equals(true)) {
letter_b → show
} else {
letter_b → hide
}
}
