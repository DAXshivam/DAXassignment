# Generated by Django 3.2.14 on 2022-07-20 14:58

import datetime
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('list', '0003_auto_20220720_2016'),
    ]

    operations = [
        migrations.AlterField(
            model_name='listdetails',
            name='compdate',
            field=models.DateField(default=datetime.datetime(2022, 7, 20, 20, 28, 22, 688190)),
        ),
        migrations.AlterField(
            model_name='listdetails',
            name='creatdate',
            field=models.DateField(default=datetime.datetime(2022, 7, 20, 20, 28, 22, 688190)),
        ),
    ]
