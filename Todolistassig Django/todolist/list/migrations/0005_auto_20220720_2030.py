# Generated by Django 3.2.14 on 2022-07-20 15:00

import datetime
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('list', '0004_auto_20220720_2028'),
    ]

    operations = [
        migrations.AlterField(
            model_name='listdetails',
            name='compdate',
            field=models.DateField(default=datetime.datetime(2022, 7, 20, 20, 30, 43, 983020)),
        ),
        migrations.AlterField(
            model_name='listdetails',
            name='creatdate',
            field=models.DateField(default=datetime.datetime(2022, 7, 20, 20, 30, 43, 983020)),
        ),
    ]
