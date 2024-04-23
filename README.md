# h7encrypt

The `encrypt` command is a custom script that encrypts and decrypts txt files. This guide explains how to set up and use the `encrypt` command.

## Installation

1- Clone or download the repository to your local machine.

```bash
git clone https://github.com/talukara/encrypt.git
```

2- Navigate to the directory containing the `encrypt` script using the terminal:

```bash
cd h7encrypt
```

3- Compile the codes and make the script executable:

```bash
g++ encrypt.cpp -o encrypt && g++ decrypt.cpp -o decrypt && chmod +x encrypt && chmod +x decrypt
```

4- Create a symbolic link to make the `encrypt` command available globally:

```bash
sudo cp h7encrypt /usr/local/bin/ && sudo mkdir /usr/local/bin/encrypt-files && sudo cp decrypt encrypt /usr/local/bin/encrypt-files
```

Now, you can use the `encrypt` command globally in your terminal.

## Usage

To use the `encrypt` command, follow these steps:

1. Open a terminal.
2. Type `encrypt` followed by the name of the txt file you want to encrypt or decrypt. ```encrypt txtfilename [e/d]```.For example:

   We have a file named test.txt, and we want to encrypt this file.

   ```bash
   encrypt test e
   ```
3. The script will remove the test.txt file and then creates "test.en"

If you encounter any issues, double-check the file path and permissions.
Ensure that you have the necessary privileges to execute files in the chosen directory
