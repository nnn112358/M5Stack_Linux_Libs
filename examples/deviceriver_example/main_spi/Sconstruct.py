import json, os
COMPONENT_INFO = {}

# COMPONENT_ADD_INCLUDE = ''
# COMPONENT_ADD_PRIVATE_INCLUDE = ''
# COMPONENT_ADD_SRCS = ''
# COMPONENT_ADD_ASM_SRCS = ''
# COMPONENT_ADD_DEFINITIONS = ''
# COMPONENT_ADD_DEFINITIONS_PRIVATE = ''
# COMPONENT_ADD_REQUIREMENTS = ''
# COMPONENT_ADD_LINKOPTIONS_PRIVATE = ''
# COMPONENT_ADD_STATIC_LIB = ''
# COMPONENT_ADD_DYNAMIC_LIB = ''
# COMPONENT_ADD_C_FLAGS = ''
# COMPONENT_ADD_CXX_FLAGS = ''
# COMPONENT_ADD_C_LINK_FLAGS = ''
# COMPONENT_ADD_CXX_LINK_FLAGS = ''


# COMPONENT_C_FLAGS = ''
# COMPONENT_CXX_FLAGS = ''
# COMPONENT_C_LINK_FLAGS = ''
# COMPONENT_CXX_LINK_FLAGS = ''



############### Add include ###################
COMPONENT_INFO["COMPONENT_ADD_INCLUDE"] = ['include']
COMPONENT_INFO["COMPONENT_ADD_PRIVATE_INCLUDE"] = []
###############################################

############ Add source files #################
COMPONENT_INFO["COMPONENT_ADD_SRCS"] = append_srcs_dir('src')
COMPONENT_INFO["COMPONENT_ADD_ASM_SRCS"] = []

###############################################

###### Add required/dependent components ######
COMPONENT_INFO["COMPONENT_ADD_REQUIREMENTS"] = []

with open(os.path.join(sdk_path, 'components/components.py')) as f:
    exec(f.read())

COMPONENT_INFO["COMPONENT_ADD_REQUIREMENTS"] += COMPONENT_LIST.split(',')

# COMPONENT_INFO["COMPONENT_ADD_REQUIREMENTS"].append('m')
###############################################

###### Add link search path for requirements/libs ######
###############################################

############ Add static libs ##################
COMPONENT_INFO["COMPONENT_ADD_STATIC_LIB"] = []
###############################################

############ Add dynamic libs ##################
COMPONENT_INFO["COMPONENT_ADD_DYNAMIC_LIB"] = []
###############################################


#### Add compile option for this component ####
#### Just for this component, won't affect other 
#### modules, including component that depend 
#### on this component

COMPONENT_INFO["COMPONENT_ADD_DEFINITIONS"] = []
COMPONENT_INFO["COMPONENT_ADD_DEFINITIONS_PRIVATE"] = []
COMPONENT_INFO["COMPONENT_ADD_LINK_FLAGS"] = []
COMPONENT_INFO["COMPONENT_ADD_LINK_FLAGS_PRIVATE"] = []


COMPONENT_INFO["COMPONENT_REGISTER_COMPONENT"] = 'project'

###############################################

os.environ["COMPONENT_INFO"] = json.dumps(COMPONENT_INFO)