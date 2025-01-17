import argparse
from pathlib import Path
import os

def main():
    parser = argparse.ArgumentParser("Script to remove spaces at end of lines")

    parser.add_argument("path", type=Path)
    args = parser.parse_args()

    file_or_dir = args.path
    for root, _, files in os.walk(file_or_dir):
        print(files)
        for f in files:
            trim_right_file(os.path.join(root, f))

def trim_right_file(fpath: str):
    with open(fpath, "r") as f:
        new_file_data = [l.rstrip()+"\n" for l in f.readlines()]

    with open(fpath, "w") as f:
        f.writelines(new_file_data)

            


if __name__ == "__main__":
    main()