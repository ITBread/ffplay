#ifndef FFMPEG_CONFIG_H
#define FFMPEG_CONFIG_H
#define FFMPEG_CONFIGURATION "configuration: --disable-static --enable-shared --enable-gpl --enable-version3 --enable-sdl2 --enable-bzlib --enable-fontconfig --enable-gnutls --enable-iconv --enable-libass --enable-libbluray --enable-libfreetype --enable-libmp3lame --enable-libopenjpeg --enable-libopus --enable-libshine --enable-libsnappy --enable-libsoxr --enable-libtheora --enable-libtwolame --enable-libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxml2 --enable-libzimg --enable-lzma --enable-zlib --enable-gmp --enable-libvidstab --enable-libvorbis --enable-cuda --enable-cuvid --enable-d3d11va --enable-nvenc --enable-dxva2 --enable-avisynth --enable-libmfx"
#define FFMPEG_LICENSE "GPL version 2 or later"
#define FFMPEG_VERSION "3.4.2"
#define CONFIG_THIS_YEAR 2017
#define FFMPEG_DATADIR "/home/ycg/ffmpeg"
#define AVCONV_DATADIR "/home/ycg/ffmpeg"
#define CC_IDENT "gcc 7.2.0 (GCC)"
#define av_restrict restrict
#define  CONFIG_RECORD 1
#if  defined(_MSC_VER) && (_MSC_VER < 1800 )//低于vc2013
#define inline __inline
#endif

#define CONFIG_AVFILTER 1

#endif /* FFMPEG_CONFIG_H */