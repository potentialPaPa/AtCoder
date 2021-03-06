#!/opt/conda/bin/python

print("Contest Type: ABC")

#contest_type= input()
contest_type = "ABC"

print("Which: ", end="")
contest_num = input()

filename = contest_type + contest_num + ".ipynb"

import os

if os.path.exists(filename):
    print("File Already Exists.")
else:
    import datetime as dt
    import pytz
    now_utc = dt.datetime.now()
    now_jst = now_utc.astimezone(pytz.timezone('Asia/Tokyo'))
    today = now_jst.strftime("%B %d, %Y")
    
    sed1 = "sed -e \'s/XXX/" + contest_num + "/g\' "
    sed2 = "-e \'s/TODAY/" + today + "/g\' "
    command = sed1 + sed2 + "template.ipynb > " + filename
    os.system(command)
    print(contest_type + contest_num + ".ipynb is successfully created!")

