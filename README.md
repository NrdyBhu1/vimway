# Just another wayland compositor

Small experiment, trying to get a wayland compositor up and running.

Used lots of good tutorials:

* https://drewdevault.com/2018/02/17/Writing-a-Wayland-compositor-1.html

* https://gist.github.com/SirCmpwn/ae4d1cdcca97ffeb2c35f0878d75dc17

* https://people.freedesktop.org/%7Ewhot/wayland-doxygen/wayland/Server/structwl__listener.html

Not really usable yet but to run it:

```
git clone https://github.com/joalon/vimway
cd vimway
git submodule init
git submodule update
make libnvim
mkdir build
meson build
cd build
ninja
```

