st - simple terminal
--------------------
st is a simple terminal emulator for X which sucks less.


Requirements
------------
In order to build st you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (st is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install st (if
necessary as root):

    make clean install


Running st
----------
If you did not install st with make clean install, you must compile
the st terminfo entry with the following command:

    tic -sx st.info

See the man page for additional details.

Credits
-------
Based on Aurélien APTEL <aurelien dot aptel at gmail dot com> bt source code.

---
## Patches order
1. glyph-wide-support

2. font2

3. anysize : 
- If you're patching on your own then apply the patch from my diff instead of patches

4. scrollbackringbuffer (Not a single rejfile LOL)

5. st-scrollback-mouse-2
6. st-scrollback-mouse-increment

or use my diff file directly

Since we're using scrollbackringbuffer patch so format for somekeybindins is different for st-scrollback-mouse-increment
Hence it's better to use my diff instead of changing things on your own

7. clipboard

8. dynamic Cursor

9. Focus (Alpha+ alpha focus highlight
