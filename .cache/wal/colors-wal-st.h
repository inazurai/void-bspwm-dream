const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0B0716", /* black   */
  [1] = "#CE9977", /* red     */
  [2] = "#D86B8F", /* green   */
  [3] = "#AFA591", /* yellow  */
  [4] = "#D5AD97", /* blue    */
  [5] = "#DDD2AF", /* magenta */
  [6] = "#E2DAC9", /* cyan    */
  [7] = "#f1efdf", /* white   */

  /* 8 bright colors */
  [8]  = "#a8a79c",  /* black   */
  [9]  = "#CE9977",  /* red     */
  [10] = "#D86B8F", /* green   */
  [11] = "#AFA591", /* yellow  */
  [12] = "#D5AD97", /* blue    */
  [13] = "#DDD2AF", /* magenta */
  [14] = "#E2DAC9", /* cyan    */
  [15] = "#f1efdf", /* white   */

  /* special colors */
  [256] = "#0B0716", /* background */
  [257] = "#f1efdf", /* foreground */
  [258] = "#f1efdf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
