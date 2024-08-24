import os

def write_file_contents(outfile, filepath, relative_path):
    # Write the name and extension of the file
    filename = os.path.basename(filepath)
    outfile.write(f"File: {filename}\n")
    # Write the relative path of the file
    outfile.write(f"Path: {relative_path}\n")
    try:
        # Attempt to read the file with UTF-8 encoding
        with open(filepath, 'r', encoding='utf-8') as infile:
            content = infile.read()
    except UnicodeDecodeError:
        # If UTF-8 fails, try reading with a different encoding
        try:
            with open(filepath, 'r', encoding='ISO-8859-1') as infile:
                content = infile.read()
        except Exception as e:
            # If all attempts fail, log the error and skip the file
            outfile.write(f"Error reading file: {e}\n")
            content = ""
    except Exception as e:
        # Log any other errors and skip the file
        outfile.write(f"Error opening file: {e}\n")
        content = ""

    # Write the file contents
    outfile.write(content + "\n")
    # Add two blank lines
    outfile.write("\n\n")

def process_directory(outfile, directory, base_path):
    for root, dirs, files in os.walk(directory):
        # Process files in the current directory
        for filename in files:
            filepath = os.path.join(root, filename)
            relative_path = os.path.relpath(filepath, base_path)
            write_file_contents(outfile, filepath, relative_path)

        # Process subdirectories
        for dir in dirs:
            subdirectory = os.path.join(root, dir)
            process_directory(outfile, subdirectory, base_path)
        # After processing the current directory and its subdirectories, stop walking
        break

directory = '/home/jaime/Desktop/Tese/Repository/Fault-Tolerant-Risc-V-Implementations/Minimal_RVfpga_EL2_Basys3/Tests/Test1'
output_file = 'output.txt'

with open(output_file, 'w') as outfile:
    process_directory(outfile, directory, directory)
