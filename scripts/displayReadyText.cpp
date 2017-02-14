private atomic function
displayReadyText
(
show : Boolean)
{
ready_text := data → board → create picture(art → readytext)
ready_text → hide
ready_text → set pos(data → board → width / 2, data → board → height / 2)
ready_text → set z index(1)
type_text := data → board → create picture(art → typetext)
type_text → hide
type_text → set pos(data → board → width / 2, data → board → height / 2)
type_text → set z index(1)
if (show → equals(true)) {
ready_text → show
ready_text → create animation → beat(0.5, 2, 1.1)
time → run after(0.8) {
ready_text → create animation → puff out(0.5, "cubic", 1.5)
}
time → run after(0.9) {
ready_text → delete
}
time → run after(1) {
type_text → show
type_text → create animation → beat(0.5, 2, 1.1)
}
time → run after(1.3) {
type_text → create animation → puff out(0.5, "cubic", 1.5)
}
time → run after(1.4) {
type_text → delete
}
} else {
ready_text → hide
type_text → hide
}
}
