# h7encrypt

The `h7encrypt` command is a custom script that encrypts and decrypts txt files. This guide explains how to set up and use the `h7encrypt` command.

## Installation

1- Clone or download the repository to your local machine.

```bash
git clone https://github.com/h7yt0p/h7encrypt.git
```

2- Navigate to the directory containing the `h7encrypt` script using the terminal:

```bash
cd h7encrypt
```

3- Compile the codes and make the script executable:

```bash
g++ encrypt.cpp -o encrypt && g++ decrypt.cpp -o decrypt && chmod +x encrypt && chmod +x decrypt
```

4- Create a symbolic link to make the `cpptemplater` command available globally (optional):

```bash
sudo cp h7encrypt /usr/local/bin/
```

Now, you can use the `h7encrypt` command globally in your terminal.

## Usage

To use the `h7encrypt` command, follow these steps:

1. Open a terminal.
2. Type `h7encrypt` followed by the name of the txt file you want to encrypt or decrypt. For example:

   We have a file named test.txt, and we want to encrypt this file.

   ```bash
   h7encrypt test e
   ```
3. The script will remove the test.txt file and then creates "test.en"

If you encounter any issues, double-check the file path and permissions.
Ensure that you have the necessary privileges to execute files in the chosen directory
