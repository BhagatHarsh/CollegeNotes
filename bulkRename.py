import os

def rename_files(input_folder):
    for root, dirs, files in os.walk(input_folder):
        for file_name in files:
            # Check if the file name starts with 'Side-'
            if file_name.startswith('Slide-'):
                file_path = os.path.join(root, file_name)
                # Split the file name and extension
                name_parts = os.path.splitext(file_name)
                # Get the last name part after splitting on '-'
                last_name = name_parts[0].split('-')[-1]
                # Create the new file name with the last name and original extension
                new_file_name = last_name + name_parts[1]
                # Rename the file
                new_file_path = os.path.join(root, new_file_name)
                os.rename(file_path, new_file_path)

# Example usage: call the rename_files function with the input folder path
input_folder = r'C:\Users\habha\Desktop\codingSpace\DEV\CollegeNotes\docs\OS\Slides'
rename_files(input_folder)
