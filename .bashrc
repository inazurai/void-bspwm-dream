# .bashrc

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
PS1='[\u@\h \W]\$ '

alias xi='sudo xbps-install'
alias xr='sudo xbps-remove'

# Set wallpaper upon logging in
feh --bg-fill ~/Downloads/retro.jpg &

# Invoke pywal with image path
wal -i ~/Downloads/retro.jpg &
. "~/.cache/wal/colors.sh"

alias dotfiles='/usr/bin/git --git-dir=/home/inazurai/.dotfiles/ --work-tree=/home/inazurai'
