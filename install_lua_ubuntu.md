```sh
sudo apt install libreadline-dev

tar zxf lua-5.3.5.tar.gz
cd lua-5.3.5
make linux
make install INSTALL_TOP=~/soft/lua

tar zxf luarocks-3.0.4.tar.gz
cd luarocks-3.0.4
./configure --prefix=~/soft/lua        # This will install luarocks into lua directory
make
make install
```
