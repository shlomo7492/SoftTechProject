<?php
//Printing the correct header
include 'header.inc';
//spliting url to array
$str = $_SERVER['REQUEST_URI'];
$urlArray = array_map('trim', explode('/', $str));

//removing null values due to leading / in the url
foreach($urlArray as $key => $link)
{
    if($link === '')
    {
        unset($urlArray[$key]);
    }
}
//getting the actions according the length of the array
$length=count($urlArray);
if ($length== 1)
{
   if ($urlArray[1]='login')
   {

   }
   if ($urlArray[1]='profile')
   {

   }
   if ($urlArray[1]='contact')
   {

   }
}
if ($length== 2)
{
    if (($urlArray[1]='profile') && ($urlArray[2]='article'))
    {

    }
    if (($urlArray[1]='article') && ($urlArray[2]='create'))
    {

    }
    if (($urlArray[1]='article') && ($urlArray[2]='view'))
    {

    }
}
