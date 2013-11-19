# Arscons : scons script for Arduino

build & upload Arduino sketch on the command line with scons!

- No java needed!
- Use Arduino IDE's conf. so, all board which supported by Arduino supported by arscons.
- Works on Ubuntu Linux, Mac OS X and Windows.
- Need pyserial to triggering reset just before upload.

## Basic Usage:

- make a folder which have same name of the sketch (ex. Blink/ for Blink.pde)
- put the sketch and the SConstruct under the folder.
- to make the HEX do following in the folder:

    $ scons

- to upload the binary, do following in the folder:

    $ scons upload

- refer [Expert Usage](https://github.com/suapapa/arscons/wiki/Expert-Usage) for change the confs.
- refer [Arscons Users](https://github.com/suapapa/arscons/wiki/Arscons-Users) for arscons in practice (and hacks!)

## `site_scons.arduino_build` module

In addition to the basic usage described above, the `site_scons.arduino_build`
module may be included in other projects using SCons to build any Arduino
components.  The `site_scons` directory provides a way to integrate custom
builders and tools for SCons. See [here][1] for more information about
`site_scons` support in SCons.

## Thanks to:

- Ovidiu Predescu <ovidiu@gmail.com> and Lee Pike <leepike@gmail.com> for Mac port and bugfix.
- Steven Ashley <steven@ashley.net.nz> for Windows port.
- Kyle Gordon for many patches which including Arduino-1 support


[1]: http://www.scons.org/doc/1.0.1/HTML/scons-user/x3627.html
