private atomic function
createletter_c
(
show : Boolean)
{
data → c_letters := data → board → create sprite set
letter_c := data → board → create picture(art → letterc)
letter_c → set pos(math → random range(data → board → width + 10, data → board → width + 20), math → random range(0, data → board → height - 10))
letter_c → set z index(2)
letter_c → set speed x(math → random range( - 100, - 300))
data → c_letters → add(letter_c)
if (show → equals(true)) {
letter_c → show
} else {
letter_c → hide
}
}
