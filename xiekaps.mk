
xiekaps.dll: dlldata.obj xieka_p.obj xieka_i.obj
	link /dll /out:xiekaps.dll /def:xiekaps.def /entry:DllMain dlldata.obj xieka_p.obj xieka_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del xiekaps.dll
	@del xiekaps.lib
	@del xiekaps.exp
	@del dlldata.obj
	@del xieka_p.obj
	@del xieka_i.obj
