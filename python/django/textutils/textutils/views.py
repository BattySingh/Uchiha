# i have created this file
from django.http import HttpResponse

# def index(request):
    # return HttpResponse("<h1>Hello</h1>")
    # fileOpen = open('1.txt', 'r')
    # return HttpResponse(fileOpen.read())

#     return HttpResponse('<a href="https://www.youtube.com">Youtube</a><br><a href="https://www.facebook.com">Facebook</a><br><a href="https://www.twitter.com">Twitter</a><br><a href="https://www.wikipedia.com">Wikipedia</a><br><a href="https://www.google.com">Google</a><br>')

# def about(request):
#     return HttpResponse("About me")

from django.shortcuts import render

def index(request):
    return render(request, 'index.html')
    # return HttpResponse('''
    #     <a href=""><button>Home</button></a><a href="/removepunc"><button>Remove Punc</button></a><a href="/capfirst"><button>Capitalize first</button></a><a href="/newlineremove"><button>New line remover</button></a><a href="/spaceremove"><button>Space remover</button></a><br><br>
    #     Home
    #     <br><br><button onclick="window.history.back()">Back</button>
    # ''')

# def removepunc(request):
#     getText = request.GET.get('text', 'default')
#     print(getText)
#     return HttpResponse('''
#         <a href="/"><button>Home</button></a><a href="/removepunc"><button>Remove Punc</button></a><a href="/capfirst"><button>Capitalize first</button></a><a href="/newlineremove"><button>New line remover</button></a><a href="/spaceremove"><button>Space remover</button></a><br><br>
#         Remove Punctuation
#         <br><br><button onclick="window.history.back()">Back</button>
#     ''')

# def capfirst(request):
#     return HttpResponse('''
#         <a href="/"><button>Home</button></a><a href="/removepunc"><button>Remove Punc</button></a><a href="/capfirst"><button>Capitalize first</button></a><a href="/newlineremove"><button>New line remover</button></a><a href="/spaceremove"><button>Space remover</button></a><br><br>
#         Captitalize first
#         <br><br><button onclick="window.history.back()">Back</button>
#     ''')

# def newlineremove(request):
#     return HttpResponse('''
#         <a href="/"><button>Home</button></a><a href="/removepunc"><button>Remove Punc</button></a><a href="/capfirst"><button>Capitalize first</button></a><a href="/newlineremove"><button>New line remover</button></a><a href="/spaceremove"><button>Space remover</button></a><br><br>
#         New line remover
#         <br><br><button onclick="window.history.back()">Back</button>
#     ''')

# def spaceremove(request):
#     return HttpResponse('''
#         <a href="/"><button>Home</button></a><a href="/removepunc"><button>Remove Punc</button></a><a href="/capfirst"><button>Capitalize first</button></a><a href="/newlineremove"><button>New line remover</button></a><a href="/spaceremove"><button>Space remover</button></a><br><br>
#         Space remover
#         <br><br><button onclick="window.history.back()">Back</button>
#     ''')

# def charcount(request):
#     return HttpResponse('''
#         <a href="/"><button>Home</button></a><a href="/removepunc"><button>Remove Punc</button></a><a href="/capfirst"><button>Capitalize first</button></a><a href="/newlineremove"><button>New line remover</button></a><a href="/spaceremove"><button>Space remover</button></a><br><br>
#         Character count
#         <br><br><button onclick="window.history.back()">Back</button>
#     ''')

def analyze(request):
    text = request.GET.get('text', 'default')
    isCheck = request.GET.get('removepunc', 'off')
    isCapitalize = request.GET.get('capitalizer', 'off')
    isLineRemover = request.GET.get('newLineRemover', 'off')
    isSpaceRemover = request.GET.get('spaceRemover', 'off')
    isCharacterCount = request.GET.get('characterCounter', 'off')

    def withoutPunc(text):
        punc = '''`~!@#$%^&*()-_=+{[}]|\'";:,<.>/?'''
        noPunc = ""

        for char in text:
            if char not in punc:
                noPunc = noPunc + char
        return noPunc
    
    if (isCheck == 'on'):
        myText = withoutPunc(text)
        params = {'purpose': 'Remove Punctuaion', 'analyzed_text': myText}
        # return render(request, 'analyze.html', params)

    if (isCapitalize == 'on'):
        def capi(text):
            c = ""
            for t in text:
                c = c + t.upper()
            return c

        myText = capi(text)
        params = {'purpose': 'Capitalize', 'analyzed_text': myText}
        # return render(request, 'analyze.html', params)

    if (isLineRemover == 'on'):
        def lineRemov(text):
            r = text.replace('  ', " ")
            return r

        myText = lineRemov(text)
        params = {'purpose': 'New Line Remover', 'analyzed_text': myText}
        # return render(request, 'analyze.html', params)

    if (isSpaceRemover == 'on'):
        def spaceRemov(text):
            r = text.replace('  ', " ")
            return r

        myText = spaceRemov(text)
        params = {'purpose': 'Space Remover', 'analyzed_text': myText}
        # return render(request, 'analyze.html', params)

    if (isCharacterCount == 'on'):
        def charCoun(text):
            count = 0
            for t in text:
                count = count + 1
            return count

        myText = charCoun(text)
        params = {'purpose': 'Character Counter', 'analyzed_text': myText}
        # return render(request, 'analyze.html', params)
        
    if (True):
        return render(request, 'analyze.html', params)

    else:
        return HttpResponse('Error')