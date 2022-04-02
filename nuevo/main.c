{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": 
    [    
        {
            "name": "Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/bin/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": 
            [
                {
                        "description": "Enable pretty-printing for gob",
                        "text": "-enable-pretty printing",
                        "ignoreFailures": true
                },
                {
                        "description": "Set Disasembñy Flavor to Intel",
                        "text": "-gdb-set disassembly-flavor intel",
                        "ignoreFailures": true
                }
            ]
        }
    ]
}