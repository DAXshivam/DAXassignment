from typing import List
from django.shortcuts import render,redirect
from datetime import datetime
from list.models import Listdetails
from .models import Listdetails
# Create your views here.
def post_list(request):
    listsall= Listdetails.objects.all()
    return render(request, 'display.html', {'listsall': listsall})
def delete_post(request,id):
    all = Listdetails.objects.all()
    for f in all:
        if f.id == id:
            f.delete()
            return redirect(index)
        # return render(request,'display.html',{})
def index(request):
    return render(request,'index.html')
def display(request):
    return render(request,'display.html')
def create(request):
    if request.method == "POST":
        authname = request.POST.get("authname")
        desc = request.POST.get("description")
        compstatus = request.POST.get("compstatus")
        compdate = request.POST.get("compdate")
        create = Listdetails(authname = authname,desc = desc,compstatus = compstatus,compdate = compdate,creatdate = datetime.now())
        create.save()
    return render(request,'index.html')
def update(request,id):
    object = Listdetails.objects.get(id=id)
    return render(request,'update_list.html',{'object':object})
def update_list(request,id):
    all = Listdetails.objects.all()
    for a in all:
        if a.id == id:
            authname = request.POST.get("authname1")
            desc = request.POST.get("description1")
            compstatus = request.POST.get("compstatus1")
            compdate = request.POST.get("compdate1")
            creatdate = datetime.now()
            a.authname = authname
            a.desc = desc
            a.compstatus = compstatus
            a.compdate=compdate
            a.creatdate = creatdate
            a.save()
  
            return redirect(index)



     


