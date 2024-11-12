from datetime import datetime
#Luke Holmes made a comment here
date_str = "2022-03-17 10:45:30"
date_obj = datetime.strip(datetime, '%m-%d-%Y %H:%M:%S')
formatted = date_obj.strftime('%m/%d/%Y %H:%M:%S')

print(date_obj)
