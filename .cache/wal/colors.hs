--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/home/inazurai/Downloads/retro.jpg"

-- Special
background="#0B0716"
foreground="#f1efdf"
cursor="#f1efdf"

-- Colors
color0="#0B0716"
color1="#CE9977"
color2="#D86B8F"
color3="#AFA591"
color4="#D5AD97"
color5="#DDD2AF"
color6="#E2DAC9"
color7="#f1efdf"
color8="#a8a79c"
color9="#CE9977"
color10="#D86B8F"
color11="#AFA591"
color12="#D5AD97"
color13="#DDD2AF"
color14="#E2DAC9"
color15="#f1efdf"
