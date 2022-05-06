static const char *colorname[] = {

  /* 8 normal colors */
  [0]  = "#272822", /* black   */ // #272828
  [1]  = "#F92672", /* red     */
  [2]  = "#A6E22E", /* green   */
  [3]  = "#F4BF75", /* yellow  */
  [4]  = "#66D9EF", /* blue    */
  [5]  = "#AE81FF", /* magenta */
  [6]  = "#A1EFE4", /* cyan    */
  [7]  = "#F8F8F2", /* white   */
                 
  [8]  = "#75715E",  /* black   */
  [9]  = "#F92672",  /* red     */
  [10] = "#A6E22E", /* green   */
  [11] = "#F4BF75", /* yellow  */
  [12] = "#66D9EF", /* blue    */
  [13] = "#AE81FF", /* magenta */
  [14] = "#A1EFE4", /* cyan    */
  [15] = "#F9F8F5", /* white   */

  /* special colors */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 7;
 unsigned int defaultcs = 13;
 unsigned int defaultrcs= 0;
