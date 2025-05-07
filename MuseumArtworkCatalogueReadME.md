🖼️ Museum Artwork Catalog CLI Program
This project is a simple command-line application written in C++ (or your chosen language) for managing a museum's catalog of paintings. It allows users to create, read, and append records to a text file named obras.txt, which stores detailed information about each artwork.

🎨 Features
Create: Generate a new obras.txt file to store catalog data.

Add: Append new artwork records to the existing file.

Read: Display all stored records in a neatly formatted table with headings, using tabs for alignment.

📁 Data Structure
Each artwork entry includes:

Catalog number (positive integer)

Title (string)

Painter's name (string)

Painter's school (one of the following):

Spanish

Flemish

Italian

French

Dutch

German

English

📊 Output Formatting
When reading the file, the program:

Displays a structured table of the data

Uses headers and proper tabulation for readability

Computes and displays totals grouped by catalog number, artwork, and painter

🧰 Libraries Used
