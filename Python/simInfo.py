# before running this code install phonenumber in your terminal by typing :- 'pip install phonenumbers'

import phonenumbers
from phonenumbers import carrier
from phonenumbers import geocoder

a = input("enter your phone number with country code:")
phone_number  = phonenumbers.parse(a)

print(geocoder.description_for_number(phone_number,"en"))
print(carrier.name_for_number(phone_number,"en"))
