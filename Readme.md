IDAFreewareFunctionMapping
====

未完成，当前仅完成了已导出的部分，且仅支持 msvc

提供 IDA 免费版的函数映射，可以用来生成 IDA 免费版可用的插件

使用 CMake 生成：

```
mkdir build && cd build
cmake .. && cmake --build .
```

将生成的 Chino.dll 放置于 IDA 安装目录，以与 ida64.dll 同一目录为准，插件编译时使用 Chino.lib 替换 ida.lib，其他部分使用 IDA SDK 的原有部分即可

若需修改现有插件，将插件的导入表中的 ida64.dll 修改为 Chino.dll 即可

----

Sorry for my poor english...

Not finished, only exported part provided, and only support msvc now.

Provide function mapping for IDA Freeware, can be used to build plugins available for IDA Freeware

To build, use the following command line(CMake 3.0 and msvc required):

```
mkdir build && cd build
cmake .. && cmake --build .
```

Put the generated file Chino.dll to your IDA installation path, the same directory the ida64.dll placed at. When you building your plugin, replace ida.lib with Chino.lib.

If you would like to modify prebuilt plugins, you can simply edit the import table of the plugin, change "ida64.dll" to "Chino.dll".
