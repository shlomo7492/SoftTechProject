<?php
//Printing the correct header
//spliting url to array
$str = strtolower($_SERVER['REQUEST_URI']);
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
echo $length.$urlArray[1];
if (($length== 0)||($urlArray[1]=='softtechproject'))
{
    include 'template/front_page_templ.inc';

}
if ($length== 1)
{
   if ($urlArray[1]='login')
   {
       include 'template/login_page_templ.inc';

   }
   if ($urlArray[1]='profile')
   {
       include 'template/profile_page_templ.inc';

   }
   if ($urlArray[1]='contact')
   {
       include 'template/contact_page_templ.inc';

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
