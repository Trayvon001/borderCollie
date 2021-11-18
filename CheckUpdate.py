"""
Time：2021/11/17 21:53
Author: Qi Chengwen(BUAA)
Version: V1.0
File: CheckUpdate.py
IDE:Jetbrains PyCharm
Description: the description of this file
"""
import urllib.error
from urllib.request import urlopen

def check_latest_version(target_url):
    try:
        version_info = urlopen(target_url).read().decode('utf-8')
    except urllib.error.URLError:
        return ['-1', '-1', '-1']
    else:
        remove_signs = version_info.replace(' ', '').split('\n')
        latest_version = remove_signs[3].split(':')[1].replace('"', '')[:-1]
        new_functions = remove_signs[6].split(':')[1].replace('"', '')[:-1]
        new_functions = new_functions.replace('\\n', '\n')
        update_time = remove_signs[5].split(':')[1].replace('"', '')[:-1]
        print(latest_version)
        print(new_functions)
        print(update_time)
        return [latest_version, new_functions, update_time]

# target = "https://raw.githubusercontent.com/Trayvon001/borderCollie/master/software_update.json"
# check_latest_version(target)


