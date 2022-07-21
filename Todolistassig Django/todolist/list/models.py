from django.db import models
from datetime import date, datetime

# Create your models here.
class Listdetails(models.Model):
    authname = models.CharField(max_length=122,default="ss")
    desc = models.TextField(default="")
    compstatus = models.CharField(max_length=4,default="NO")
    compdate = models.DateField(default=datetime.now())
    creatdate = models.DateField(default=datetime.now())

    def __str__(self):
        return self.authname