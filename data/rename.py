import os

folder_path = "./CSES"  # Change this to your folder path
prefix = "cses_"  # Change this to the prefix you want to add

for filename in os.listdir(folder_path):
    old_path = os.path.join(folder_path, filename)
    if os.path.isfile(old_path):  # Ensure it's a file
        new_filename = prefix + filename
        new_path = os.path.join(folder_path, new_filename)
        os.rename(old_path, new_path)

print("Renaming completed!")
