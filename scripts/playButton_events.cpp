private function
playButton_events
(
play_button : Sprite)
{
play_button → on touch down(touch down)
where touch down(x : Number , y : Number) {
play_button → set y(play_button → y + 1)
}
play_button → on touch up(touch up)
where touch up(x : Number , y : Number) {
play_button → set y(play_button → y - 1)
play_button → hide
code → displayReadyText(true)
time → run after(0.5) {
 ;
}
}
}
