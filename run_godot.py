from cProfile import run
import os
import platform

def main():
    os.chdir("godot-3.5-stable")
    runSequence = ""
    if platform.system() == "Windows":
        runSequence = getRunSequence("README/windows_compile.txt")
    else:
        runSequence = getRunSequence("README/compile.txt")
    os.system(runSequence)

def getRunSequence(filepath):
    runSequenceFound = False
    runSequence = ""
    runfile = open(filepath, "r")
    for line in runfile.readlines():
        line = str(line)
        if not runSequenceFound:
            runSequenceFound = line.startswith("# target compilations")
            continue
        
        if line.startswith("#"):
            break
        
        runSequence += line

    runfile.close()

    return runSequence

if __name__ == '__main__':
    main()