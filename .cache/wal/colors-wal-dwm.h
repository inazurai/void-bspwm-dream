static const char norm_fg[] = "#f1efdf";
static const char norm_bg[] = "#0B0716";
static const char norm_border[] = "#a8a79c";

static const char sel_fg[] = "#f1efdf";
static const char sel_bg[] = "#D86B8F";
static const char sel_border[] = "#f1efdf";

static const char urg_fg[] = "#f1efdf";
static const char urg_bg[] = "#CE9977";
static const char urg_border[] = "#CE9977";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
