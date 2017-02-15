private atomic function
createletter_d
(
show : Boolean)
{
data → d_letters := data → board → create sprite set
letter_d := data → board → create picture(art → letterd)
letter_d → set pos(math → random range(data → board → width + 10, data → board → width + 20), math → random range(0, data → board → height - 10))
letter_d → set z index(2)
letter_d → set speed x(math → random range( - 100, - 300))
data → d_letters → add(letter_d)
if (show → equals(true)) {
letter_d → show
} else {
letter_d → hide
}
}
