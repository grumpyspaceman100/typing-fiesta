private function
quitButton_events
(
quit_button : Sprite)
{
quit_button → on touch down(touch down)
where touch down(x : Number , y : Number) {
quit_button → set y(quit_button → y + 1)
}
quit_button → on touch up(touch up)
where touch up(x : Number , y : Number) {
quit_button → set y(quit_button → y - 1)
wall → clear
app → restart("Play Again? If not, press back or home button to leave the game.")
}
}
