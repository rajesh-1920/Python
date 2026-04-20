@echo off
setlocal enabledelayedexpansion

:menu
cls
echo Site-Blocker
echo -----------------
echo 1. Block everything except codeforces.co and its subdomains
echo 2. Restore hosts file from backup
echo 3. Exit
echo -----------------
set /p choice=Enter your choice (1/2/3):

if "%choice%"=="" goto menu
if "%choice%"=="1" goto block_sites
if "%choice%"=="2" goto restore_ogfile
if "%choice%"=="3" goto end

goto menu

:block_sites
cls
echo.
echo Blocking all sites except https://codeforces.co and its subdomains...

:: Backup the original hosts file
xcopy /Y C:\Windows\System32\drivers\etc\hosts C:\Windows\System32\drivers\etc\hosts_backup

:: Clear the current hosts file
echo. > C:\Windows\System32\drivers\etc\hosts

:: Add required entries to the hosts file
(
    echo 127.0.0.1 localhost
    echo ::1 localhost

echo 0.0.0.0 chrome.google.com
echo 0.0.0.0 www.facebook.com
echo 0.0.0.0 facebook.com
echo 0.0.0.0 instagram.com
echo 0.0.0.0 www.instagram.com
echo 0.0.0.0 twitter.com
echo 0.0.0.0 www.twitter.com
echo 0.0.0.0 tiktok.com
echo 0.0.0.0 www.tiktok.com
echo 0.0.0.0 snapchat.com
echo 0.0.0.0 www.snapchat.com
echo 0.0.0.0 reddit.com
echo 0.0.0.0 www.reddit.com
echo 0.0.0.0 linkedin.com
echo 0.0.0.0 www.linkedin.com
echo 0.0.0.0 tumblr.com
echo 0.0.0.0 www.tumblr.com
echo 0.0.0.0 pinterest.com
echo 0.0.0.0 www.pinterest.com
echo 0.0.0.0 periscope.tv
echo 0.0.0.0 www.periscope.tv
echo 0.0.0.0 vk.com
echo 0.0.0.0 www.vk.com
echo 0.0.0.0 weibo.com
echo 0.0.0.0 www.weibo.com
echo 0.0.0.0 myspace.com
echo 0.0.0.0 www.myspace.com

echo 0.0.0.0 youtube.com
echo 0.0.0.0 www.youtube.com
echo 0.0.0.0 github.com
echo 0.0.0.0 www.github.com
echo 0.0.0.0 openai.com
echo 0.0.0.0 chat.openai.com
echo 0.0.0.0 bard.google.com
echo 0.0.0.0 gemini.google.com
echo 0.0.0.0 bing.com
echo 0.0.0.0 copilot.microsoft.com
echo 0.0.0.0 facebook.com
echo 0.0.0.0 www.facebook.com
echo 0.0.0.0 instagram.com
echo 0.0.0.0 reddit.com
echo 0.0.0.0 twitter.com
echo 0.0.0.0 x.com
echo 0.0.0.0 tiktok.com

echo 0.0.0.0 openai.com
echo 0.0.0.0 chat.openai.com
echo 0.0.0.0 chatgpt.com
echo 0.0.0.0 www.chatgpt.com
echo 0.0.0.0 claude.ai
echo 0.0.0.0 poe.com
echo 0.0.0.0 perplexity.ai
echo 0.0.0.0 character.ai
echo 0.0.0.0 bard.google.com
echo 0.0.0.0 gemini.google.com
echo 0.0.0.0 copilot.microsoft.com
echo 0.0.0.0 you.com
echo 0.0.0.0 phind.com
echo 0.0.0.0 youtube.com
echo 0.0.0.0 www.youtube.com
echo 0.0.0.0 m.youtube.com
echo 0.0.0.0 netflix.com
echo 0.0.0.0 www.netflix.com
echo 0.0.0.0 primevideo.com
echo 0.0.0.0 hotstar.com
echo 0.0.0.0 disneyplus.com
echo 0.0.0.0 twitch.tv
echo 0.0.0.0 www.twitch.tv
echo 0.0.0.0 vimeo.com
echo 0.0.0.0 dailymotion.com
echo 0.0.0.0 facebook.com
echo 0.0.0.0 www.facebook.com
echo 0.0.0.0 instagram.com
echo 0.0.0.0 www.instagram.com
echo 0.0.0.0 reddit.com
echo 0.0.0.0 www.reddit.com
echo 0.0.0.0 twitter.com
echo 0.0.0.0 x.com
echo 0.0.0.0 tiktok.com
echo 0.0.0.0 snapchat.com
echo 0.0.0.0 pinterest.com
echo 0.0.0.0 linkedin.com
echo 0.0.0.0 google.com
echo 0.0.0.0 www.google.com
echo 0.0.0.0 bing.com
echo 0.0.0.0 www.bing.com
echo 0.0.0.0 duckduckgo.com
echo 0.0.0.0 yahoo.com
echo 0.0.0.0 yandex.com
echo 0.0.0.0 ecosia.org
echo 0.0.0.0 github.com
echo 0.0.0.0 www.github.com
echo 0.0.0.0 gist.github.com
echo 0.0.0.0 stackoverflow.com
echo 0.0.0.0 www.stackoverflow.com
echo 0.0.0.0 geeksforgeeks.org
echo 0.0.0.0 www.geeksforgeeks.org
echo 0.0.0.0 tutorialspoint.com
echo 0.0.0.0 w3schools.com
echo 0.0.0.0 programiz.com
echo 0.0.0.0 cp-algorithms.com
echo 0.0.0.0 atcoder.jp
echo 0.0.0.0 codechef.com
echo 0.0.0.0 hackerrank.com
echo 0.0.0.0 hackerearth.com
echo 0.0.0.0 leetcode.com
echo 0.0.0.0 spoj.com
echo 0.0.0.0 topcoder.com
echo 0.0.0.0 cses.fi
echo 0.0.0.0 vjudge.net
echo 0.0.0.0 toph.co
echo 0.0.0.0 drive.google.com
echo 0.0.0.0 docs.google.com
echo 0.0.0.0 dropbox.com
echo 0.0.0.0 onedrive.com
echo 0.0.0.0 mega.nz
echo 0.0.0.0 mediafire.com
echo 0.0.0.0 web.whatsapp.com
echo 0.0.0.0 whatsapp.com
echo 0.0.0.0 messenger.com
echo 0.0.0.0 discord.com
echo 0.0.0.0 telegram.org
echo 0.0.0.0 slack.com
echo 0.0.0.0 skype.com
echo 0.0.0.0 zoom.us
echo 0.0.0.0 protonvpn.com
echo 0.0.0.0 nordvpn.com
echo 0.0.0.0 expressvpn.com
echo 0.0.0.0 surfshark.com
echo 0.0.0.0 tunnelbear.com
echo 0.0.0.0 windscribe.com
echo 0.0.0.0 hotspotshield.com
echo 0.0.0.0 kproxy.com
echo 0.0.0.0 proxysite.com
echo 0.0.0.0 hidemyass.com
echo 0.0.0.0 4everproxy.com
echo 0.0.0.0 pastebin.com
echo 0.0.0.0 hastebin.com
echo 0.0.0.0 ideone.com
echo 0.0.0.0 replit.com
echo 0.0.0.0 codesandbox.io
echo 0.0.0.0 glitch.com
echo 0.0.0.0 codepen.io
echo 0.0.0.0 jsfiddle.net
echo 0.0.0.0 archive.org
echo 0.0.0.0 web.archive.org
echo 0.0.0.0 claude.ai
echo 0.0.0.0 poe.com
echo 0.0.0.0 perplexity.ai
echo 0.0.0.0 phind.com
echo 0.0.0.0 you.com
echo 0.0.0.0 character.ai
echo 0.0.0.0 huggingface.co
echo 0.0.0.0 replicate.com
echo 0.0.0.0 jan.ai
echo 0.0.0.0 deepseek.com
echo 0.0.0.0 copilot.microsoft.com
echo 0.0.0.0 codeium.com
echo 0.0.0.0 cursor.sh
echo 0.0.0.0 tabnine.com
echo 0.0.0.0 replit.com
echo 0.0.0.0 www.replit.com
echo 0.0.0.0 codesandbox.io
echo 0.0.0.0 stackblitz.com
echo 0.0.0.0 usaco.guide
echo 0.0.0.0 cp-algorithms.com
echo 0.0.0.0 geeksforgeeks.org
echo 0.0.0.0 leetcode.com
echo 0.0.0.0 atcoder.jp
echo 0.0.0.0 codechef.com
echo 0.0.0.0 hackerrank.com
echo 0.0.0.0 hackerearth.com
echo 0.0.0.0 spoj.com
echo 0.0.0.0 topcoder.com
echo 0.0.0.0 cses.fi
echo 0.0.0.0 vjudge.net
echo 0.0.0.0 pastebin.com
echo 0.0.0.0 hastebin.com
echo 0.0.0.0 gist.github.com
echo 0.0.0.0 stackoverflow.com
echo 0.0.0.0 www.stackoverflow.com
echo 0.0.0.0 quora.com
echo 0.0.0.0 reddit.com
echo 0.0.0.0 medium.com
echo 0.0.0.0 platform.openai.com
echo 0.0.0.0 console.anthropic.com
echo 0.0.0.0 ai.google.dev
echo 0.0.0.0 cloud.google.com
echo 0.0.0.0 aws.amazon.com
echo 0.0.0.0 azure.microsoft.com

echo 0.0.0.0 google.com
echo 0.0.0.0 www.google.com
echo 0.0.0.0 bing.com
echo 0.0.0.0 www.bing.com
echo 0.0.0.0 yahoo.com
echo 0.0.0.0 www.yahoo.com
echo 0.0.0.0 duckduckgo.com
echo 0.0.0.0 www.duckduckgo.com
echo 0.0.0.0 yandex.com
echo 0.0.0.0 www.yandex.com
echo 0.0.0.0 ask.com
echo 0.0.0.0 www.ask.com
echo 0.0.0.0 ecosia.org
echo 0.0.0.0 www.ecosia.org
echo 0.0.0.0 qwant.com
echo 0.0.0.0 www.qwant.com


echo 0.0.0.0 youtube.com
echo 0.0.0.0 www.youtube.com
echo 0.0.0.0 netflix.com
echo 0.0.0.0 www.netflix.com
echo 0.0.0.0 hulu.com
echo 0.0.0.0 www.hulu.com
echo 0.0.0.0 primevideo.com
echo 0.0.0.0 www.primevideo.com
echo 0.0.0.0 spotify.com
echo 0.0.0.0 www.spotify.com
echo 0.0.0.0 soundcloud.com
echo 0.0.0.0 www.soundcloud.com
echo 0.0.0.0 apple.com
echo 0.0.0.0 www.apple.com
echo 0.0.0.0 pandora.com
echo 0.0.0.0 www.pandora.com
echo 0.0.0.0 vimeo.com
echo 0.0.0.0 www.vimeo.com
echo 0.0.0.0 dailymotion.com
echo 0.0.0.0 www.dailymotion.com
echo 0.0.0.0 twitch.tv
echo 0.0.0.0 www.twitch.tv
echo 0.0.0.0 crunchyroll.com
echo 0.0.0.0 www.crunchyroll.com
echo 0.0.0.0 www.shafaetsplanet.com
echo 0.0.0.0 mubinulazamzubayer.blogspot.com
echo 0.0.0.0 csacademy.com

echo 0.0.0.0 amazon.com
echo 0.0.0.0 www.amazon.com
echo 0.0.0.0 ebay.com
echo 0.0.0.0 www.ebay.com
echo 0.0.0.0 aliexpress.com
echo 0.0.0.0 www.aliexpress.com
echo 0.0.0.0 etsy.com
echo 0.0.0.0 www.etsy.com
echo 0.0.0.0 walmart.com
echo 0.0.0.0 www.walmart.com
echo 0.0.0.0 target.com
echo 0.0.0.0 www.target.com
echo 0.0.0.0 bestbuy.com
echo 0.0.0.0 www.bestbuy.com
echo 0.0.0.0 shopify.com
echo 0.0.0.0 www.shopify.com
echo 0.0.0.0 rakuten.com
echo 0.0.0.0 www.rakuten.com


echo 0.0.0.0 marketplace.visualstudio.com
echo 0.0.0.0 github.com
echo 0.0.0.0 www.github.com
echo 0.0.0.0 stackoverflow.com
echo 0.0.0.0 www.stackoverflow.com
echo 0.0.0.0 npmjs.com
echo 0.0.0.0 www.npmjs.com
echo 0.0.0.0 codepen.io
echo 0.0.0.0 www.codepen.io
echo 0.0.0.0 jsfiddle.net
echo 0.0.0.0 www.jsfiddle.net
echo 0.0.0.0 gitlab.com
echo 0.0.0.0 www.gitlab.com
echo 0.0.0.0 codesandbox.io
echo 0.0.0.0 www.codesandbox.io
echo 0.0.0.0 glitch.com
echo 0.0.0.0 www.glitch.com
echo 0.0.0.0 hackerrank.com
echo 0.0.0.0 www.hackerrank.com


echo 0.0.0.0 drive.google.com
echo 0.0.0.0 docs.google.com
echo 0.0.0.0 dropbox.com
echo 0.0.0.0 www.dropbox.com
echo 0.0.0.0 onedrive.com
echo 0.0.0.0 www.onedrive.com
echo 0.0.0.0 icloud.com
echo 0.0.0.0 www.icloud.com
echo 0.0.0.0 box.com
echo 0.0.0.0 www.box.com
echo 0.0.0.0 mega.nz
echo 0.0.0.0 www.mega.nz
echo 0.0.0.0 mediafire.com
echo 0.0.0.0 www.mediafire.com

echo 0.0.0.0 whatsapp.com
echo 0.0.0.0 web.whatsapp.com
echo 0.0.0.0 messenger.com
echo 0.0.0.0 www.messenger.com
echo 0.0.0.0 telegram.org
echo 0.0.0.0 www.telegram.org
echo 0.0.0.0 discord.com
echo 0.0.0.0 www.discord.com
echo 0.0.0.0 signal.org
echo 0.0.0.0 www.signal.org
echo 0.0.0.0 viber.com
echo 0.0.0.0 www.viber.com
echo 0.0.0.0 skype.com
echo 0.0.0.0 www.skype.com
echo 0.0.0.0 slack.com
echo 0.0.0.0 www.slack.com
echo 0.0.0.0 zoom.us
echo 0.0.0.0 www.zoom.us


echo 0.0.0.0 quora.com
echo 0.0.0.0 www.quora.com
echo 0.0.0.0 medium.com
echo 0.0.0.0 www.medium.com
echo 0.0.0.0 wikipedia.org
echo 0.0.0.0 www.wikipedia.org
echo 0.0.0.0 imdb.com
echo 0.0.0.0 www.imdb.com
echo 0.0.0.0 rotten tomatoes.com
echo 0.0.0.0 www.rottentomatoes.com
echo 0.0.0.0 news.ycombinator.com
echo 0.0.0.0 www.news.ycombinator.com
echo 0.0.0.0 bbc.com
echo 0.0.0.0 www.bbc.com

echo 0.0.0.0 atcoder.jp
echo 0.0.0.0 www.atcoder.jp
echo 0.0.0.0 codechef.com
echo 0.0.0.0 www.codechef.com
echo 0.0.0.0 stackoverflow.com
echo 0.0.0.0 www.stackoverflow.com
echo 0.0.0.0 geeksforgeeks.org
echo 0.0.0.0 www.geeksforgeeks.org
echo 0.0.0.0 vjudge.net
echo 0.0.0.0 www.vjudge.net
echo 0.0.0.0 programwiz.com
echo 0.0.0.0 www.programwiz.com
echo 0.0.0.0 hackerrank.com
echo 0.0.0.0 www.hackerrank.com
echo 0.0.0.0 leetcode.com
echo 0.0.0.0 www.leetcode.com
echo 0.0.0.0 spoj.com
echo 0.0.0.0 www.spoj.com
echo 0.0.0.0 topcoder.com
echo 0.0.0.0 www.topcoder.com
echo 0.0.0.0 codingame.com
echo 0.0.0.0 www.codingame.com
echo 0.0.0.0 csacademy.com
echo 0.0.0.0 www.csacademy.com
echo 0.0.0.0 spoj.pl
echo 0.0.0.0 www.spoj.pl
echo 0.0.0.0 cses.fi
echo 0.0.0.0 www.cses.fi

echo 0.0.0.0 chatgpt.com
echo 0.0.0.0 www.chatgpt.com

echo 0.0.0.0 chatgpt.com
echo 0.0.0.0 www.chatgpt.com
echo 0.0.0.0 pastebin.com
echo 0.0.0.0 www.pastebin.com
echo 0.0.0.0 gist.github.com
echo 0.0.0.0 github.com
echo 0.0.0.0 gitlab.com
echo 0.0.0.0 bitbucket.org
echo 0.0.0.0 codepen.io
echo 0.0.0.0 jsfiddle.net
echo 0.0.0.0 repl.it
echo 0.0.0.0 ideone.com
echo 0.0.0.0 paste.ee
echo 0.0.0.0 hastebin.com
echo 0.0.0.0 codewars.com
echo 0.0.0.0 paiza.io
echo 0.0.0.0 ide.geeksforgeeks.org
echo 0.0.0.0 coderpad.io
echo 0.0.0.0 codingame.com
echo 0.0.0.0 hackerrank.com
echo 0.0.0.0 hackerearth.com
echo 0.0.0.0 interviewbit.com
echo 0.0.0.0 topcoder.com
echo 0.0.0.0 leetcode.com
echo 0.0.0.0 atcoder.jp
echo 0.0.0.0 projecteuler.net
echo 0.0.0.0 spoj.com
echo 0.0.0.0 timus.online
echo 0.0.0.0 zbyteczne.com
echo 0.0.0.0 cplusplus.com
echo 0.0.0.0 stackoverflow.com
echo 0.0.0.0 www.stackoverflow.com
echo 0.0.0.0 quora.com
echo 0.0.0.0 reddit.com
echo 0.0.0.0 www.reddit.com
echo 0.0.0.0 cheatsheet.com
echo 0.0.0.0 pastebin.ca
echo 0.0.0.0 pastebin.in
echo 0.0.0.0 privatebin.net
echo 0.0.0.0 zero-bin.net
echo 0.0.0.0 dpaste.com
echo 0.0.0.0 toolbox.com
echo 0.0.0.0 swiftify.io
echo 0.0.0.0 sqlfiddle.com
echo 0.0.0.0 codechef.com
echo 0.0.0.0 glitch.com
echo 0.0.0.0 codeanywhere.com
echo 0.0.0.0 vimeo.com
echo 0.0.0.0 youtube.com
echo 0.0.0.0 www.youtube.com
echo 0.0.0.0 acm.timus.ru

echo 0.0.0.0 drive.google.com
echo 0.0.0.0 docs.google.com
echo 0.0.0.0 sheets.google.com
echo 0.0.0.0 slides.google.com
echo 0.0.0.0 forms.google.com
echo 0.0.0.0 mail.google.com
echo 0.0.0.0 calendar.google.com
echo 0.0.0.0 hangouts.google.com
echo 0.0.0.0 chat.google.com
echo 0.0.0.0 myaccount.google.com
echo 0.0.0.0 keep.google.com
echo 0.0.0.0 photos.google.com
echo 0.0.0.0 cloud.google.com
echo 0.0.0.0 appengine.google.com
echo 0.0.0.0 console.cloud.google.com
echo 0.0.0.0 scholar.google.com
echo 0.0.0.0 maps.google.com
echo 0.0.0.0 www.google.com
echo 0.0.0.0 google.com

echo 0.0.0.0 www.wolframalpha.com
echo 0.0.0.0 cp-algorithms.com
echo 0.0.0.0 usaco.org
echo 0.0.0.0 lightoj.com
echo 0.0.0.0 www.csdn.net
echo 0.0.0.0 www.desmos.com

) > C:\Windows\System32\drivers\etc\hosts

echo Blocking rules applied successfully!
pause
goto menu

:restore_ogfile
cls
echo.
echo Restoring hosts file from backup...
del C:\Windows\System32\drivers\etc\hosts
copy /Y C:\Windows\System32\drivers\etc\hosts_backup C:\Windows\System32\drivers\etc\hosts
echo Hosts file restored successfully.
pause
goto menu

:end
exit
