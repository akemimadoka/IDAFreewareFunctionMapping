IDAFreewareFunctionMapping
====

未完成

提供 IDA 免费版的函数映射，可以用来生成 IDA 免费版可用的插件

使用 CMake 生成：

```
mkdir build && cd build
cmake .. && cmake --build .
```

将生成的 Chino.dll 放置于 IDA 安装目录，以与 ida64.dll 同一目录为准，插件编译时使用 Chino.lib 替换 ida.lib，其他部分使用 IDA SDK 的原有部分即可

若需修改现有插件，将插件的导入表中的 ida64.dll 修改为 Chino.dll 即可
