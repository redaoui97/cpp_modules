# ------------------ HEADER FILE ----------------------
def generate_header(class_name, attributes, methods):
    header_code = f"#ifndef {class_name.upper()}_H\n"
    header_code += f"# define {class_name.upper()}_H\n\n"
    header_code += "#include <iostream>\n\n"
    header_code += f"class {class_name} \n{{"

    header_code += "\n    private:\n"
    
    # Attributes
    for attr in attributes:
        header_code += f"       {attr['type']} {attr['name']};\n"
    
    #------------------------------------------#
    header_code += "    public:\n"
    
    # Default Constructor
    header_code += f"       {class_name}();\n"
    
    # Parametrized Constructor
    param_list = ', '.join([f"{attr['type']} {attr['name']}" for attr in attributes])
    header_code += f"       {class_name}({param_list});\n"
    
    # Copy Constructor
    header_code += f"       {class_name}(const {class_name}& copy);\n"
    
    # Destructor
    header_code += f"       ~{class_name}();\n"
    
    # Copy Assignment Operator
    header_code += f"       {class_name}& operator=(const {class_name}& copy);\n"
    
    header_code += "};\n\n"
    header_code += f"#endif\n"
    return header_code


# ------------------ PUBLIC FILE ----------------------
def generate_cpp(class_name, attributes, methods):
    cpp_code = f"#include \"{class_name}.hpp\"\n\n"
    
    # Default Constructor
    cpp_code += f"{class_name}::{class_name}()\n{{\n"
    for attr in attributes:
        cpp_code += f"    {attr['name']} = {attr['default']};\n"
    cpp_code += "}\n\n"
    
    # Parametrized Constructor
    param_list = ', '.join([f"{attr['type']} {attr['name']}" for attr in attributes])
    cpp_code += f"{class_name}::{class_name}({param_list})\n{{\n"
    for attr in attributes:
        cpp_code += f"    this->{attr['name']} = {attr['name']};\n"
    cpp_code += "}\n\n"
    
    # Copy Constructor
    cpp_code += f"{class_name}::{class_name}(const {class_name}& copy)\n{{\n"
    for attr in attributes:
        cpp_code += f"    this->{attr['name']} = copy.{attr['name']};\n"
    cpp_code += "}\n\n"
    
    # Destructor
    cpp_code += f"{class_name}::~{class_name}()\n{{\n\n"
    cpp_code += "}\n\n"
    
    # Copy Assignment Operator
    cpp_code += f"{class_name}& {class_name}::operator=(const {class_name}& copy)\n{{\n"
    cpp_code += "    if (this == &copy)\n"
    cpp_code += "        return *this;\n"
    for attr in attributes:
        cpp_code += f"    this->{attr['name']} = copy.{attr['name']};\n"
    cpp_code += "    return *this;\n"
    cpp_code += "}\n\n"
    
    return cpp_code

def generate_class_files(class_name, attributes, methods):
    header_content = generate_header(class_name, attributes, methods)
    cpp_content = generate_cpp(class_name, attributes, methods)
    
    with open(f"{class_name}.hpp", 'w') as header_file:
        header_file.write(header_content)
    
    with open(f"{class_name}.cpp", 'w') as cpp_file:
        cpp_file.write(cpp_content)

# Example usage:
class_name = "MyClass"
attributes = [
    {"type": "std::string", "m_name": "m_name"},
    {"type": "std::string", "name": "m_name2"},
    {"type": "std::string", "name": "name", "default": "\"woooow\""},
]
methods = []

generate_class_files(class_name, attributes, methods)