一些点:
1.BandResource中的文件必须拖入工程中,这种.band文件不是靠我们代码来生成的
2.必须把你的音频转为aiff格式然后塞入.band包中(这个转码的你可以直接用你魔音代码里的转码工具类)
3.直接用UIActivityViewController分享.band文件
4.还有一个注意点,就是苹果设置铃声最长只能30s,如果你给的音频文件有50s的话,那么也能用,但是库乐队会自动裁剪前30s的音频,(比如我这个demo里给的音频是1分钟的,但是最后设置成铃声后只有前30s的内容,自己可以去听听),所以魔音的操作逻辑应该是先裁剪好30s以内的音频,再讲其转为aiff格式,再塞入.band包,再传给库乐队
