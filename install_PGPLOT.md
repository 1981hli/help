```sh
tar zxf pgplot5.2.tar.gz
mkdir PGPLOT
cp pgplot/drivers.list PGPLOT/

vi PGPLOT/drivers.list
# uncomment /GIF line

vi pgplot/drivers/gidriv.f
# Find the "64-bit" segment, under the instructions to change the source codes.

cd PGPLOT
../pgplot/makemake ../pgplot linux g77_gcc_aout

vi makefile
# replace FCOMPL=g77 with FCOMPL=gfortran

make
make cpg
make clean

export PGPLOT_DIR="$HOME/soft/PGPLOT"
```
