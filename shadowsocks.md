## server

sudo apt install shadowsocks-dev

vi ss.json

with the contents

{
    "server":"my_server_ip",
    "server_port":8388,
    "local_port":1080,
    "password":"barfoo!",
    "timeout":600,
    "method":"chacha20-ietf-poly1305"
}

ss-server -c ss.json


## Client

服务器/编辑服务器
