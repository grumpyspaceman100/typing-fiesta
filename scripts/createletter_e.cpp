private atomic function
createletter_e
(
show : Boolean)
{
data → e_letters := data → board → create sprite set
letter_e := data → board → create picture(art → lettere)
letter_e → set pos(math → random range(data → board → width + 10, data → board → width + 20), math → random range(0, data → board → height - 10))
letter_e → set z index(2)
letter_e → set speed x(math → random range( - 100, - 300))
data → e_letters → add(letter_e)
if (show → equals(true)) {
letter_e → show
} else {
letter_e → hide
}
}
