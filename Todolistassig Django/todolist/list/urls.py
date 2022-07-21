from django.contrib import admin
from django.urls import path
from list import views

urlpatterns = [
    path("", views.index,name="list"),
    path("display", views.post_list,name="post_list"),
    path("index",views.create,name="index"),
    path("display/<int:id>",views.delete_post,name="delete_post"),
   
    path("update/<int:id>",views.update,name = "update"),
    path("updatelist/<int:id>",views.update_list,name="update_list"),
]