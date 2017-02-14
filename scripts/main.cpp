function main () {
wall → set background(colors → random → darken(0.4))
wall → show back button(false)
data → board := media → create landscape board(1920, 1080)
data → board → set background(colors → black)
play_button := data → board → create picture(art → playbutton)
play_button → set pos(data → board → width / 2, data → board → height / 2 - 100)
play_button → set z index(5)
code → playButton_events(play_button) 
code → displayReadyText
data → board → post to wall
}
