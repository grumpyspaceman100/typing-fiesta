private atomic function
createletter_a
(
show : Boolean)
{
data → a_letters := data → board → create sprite set
letter_a := data → board → create picture(art → lettera)
letter_a → set pos(math → random range(data → board → width + 10, data → board → width + 20), math → random range( - 10, data → board → height - 10))
letter_a → set speed x(math → random range( - 100, - 300))
letter_a → set z index(2)
data → a_letters → add(letter_a)
if (show → equals(true)) {
letter_a → show
} else {
letter_a → hide
letter_a → set speed x(0)
}
}
