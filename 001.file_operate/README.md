# file_operate
open hello.txt if the file does't exist it will be crate one,and then write"hello,welcome to linux world!"to hello.txt

##Note:
* write()函数一旦返回，表明所写的数据已提交到系统内部缓存了，但此时数据并不一定已经被写入磁盘等持久存储设备中。要确保已修改过的数据全部写入持久存储设备中，正确的做法是调用fsync函数进行文件数据同步，强制把已修改过的文件数据写入持久存储设备中

