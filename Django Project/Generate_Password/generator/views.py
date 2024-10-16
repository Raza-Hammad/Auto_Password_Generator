from django.shortcuts import render
import random


def home(request):

    context = {
        'weak_range': range(6,16),
        'strong_range': range(16,129),
        'unbelievable_range': [256,512,1024,2048],
    }

    return render(request, 'generator/home.html', context)


def password(request):

    lower_case_letters = list('abcdefghijklmnopqrstuvwxyz')
    upper_case_letters = list('ABCDEFGHIJKLMNOPQRSTUVWXYZ')
    numbers = list('0123456789')

    lower_case_letters1 = list('abcdefghijklmnopqrstuvwxyz')
    upper_case_letters1 = list('ACDEFGHIJKLMNPQRTUVWXY')
    numbers1 = list('34679')
    symbols = list('!"#$%&\'()*+,-./:;<=>?@[\\]^_`{|}~')

    length = int(request.GET.get('length',16))

    if request.GET.get('ambiguous'):
        available_chars = lower_case_letters1

        if request.GET.get('uppercase'):
            available_chars += upper_case_letters1

        if request.GET.get('numbers'):
            available_chars += numbers1
    else:
        available_chars = lower_case_letters

        if request.GET.get('uppercase'):
            available_chars += upper_case_letters

        if request.GET.get('numbers'):
            available_chars += numbers

    if request.GET.get('symbols'):
        available_chars += symbols
    
    password = ''
    for l in range(length):
        password += random.choice(available_chars)

    PasswordStrength=''
    StrengthAlert = ''
    if (len(password) <= 5):
        PasswordStrength = 'alert-danger'
        StrengthAlert = 'weak'
    elif(len(password) <=12):
        PasswordStrength='alert-warning'
        StrengthAlert = 'meduim'
    elif(len(password) >=13):
        PasswordStrength='alert-success'
        StrengthAlert = 'strong'
    context={
        'password':password,
        'passwordStrength':PasswordStrength,
        'strengthAlert':StrengthAlert
    }

    return render(request, 'generator/password.html',context )