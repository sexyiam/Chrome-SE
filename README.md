Small Windows lab binary that ties a real Chrome update click to a follow-on command.
You run the stub → Chrome opens with --simulate-upgrade → you click Finish update → you click Relaunch now → the stub runs a hidden cmd /c chain (default: download PuTTY with curl.exe and launch it).
The payload fires only when you actually press Relaunch now

Can be used to evade IOCs and analysis from procmon,prochacker via delaying the install for example dropping a sideload dll or signed application(payload)
