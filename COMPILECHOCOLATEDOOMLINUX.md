Compile chocolate doom by hand:
```
sudo apt-get install gcc make libsdl2-dev libsdl2-net-dev libsdl2-mixer-dev python-pil automake autoconf libtool git pkg-config
mkdir doom
cd doom
git clone https://github.com/chocolate-doom/chocolate-doom .
cd src
cd doom
# Write config.h:
vi ./config.h
>>>
/* Define to 1 if you have the declaration of `strcasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRCASECMP 1
/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRNCASECMP 1
/* Define to 1 if you have the <dev/isa/spkrio.h> header file. */
/* #undef HAVE_DEV_ISA_SPKRIO_H */
/* Define to 1 if you have the <dev/speaker/speaker.h> header file. */
/* #undef HAVE_DEV_SPEAKER_SPEAKER_H */
/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1
/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1
/* Define to 1 if you have the `ioperm' function. */
#define HAVE_IOPERM 1
/* Define to 1 if you have the `amd64' library (-lamd64). */
/* #undef HAVE_LIBAMD64 */
/* Define to 1 if you have the `i386' library (-li386). */
/* #undef HAVE_LIBI386 */
/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1
/* libpng installed */
/* #undef HAVE_LIBPNG */
/* libsamplerate installed */
/* #undef HAVE_LIBSAMPLERATE */
/* Define to 1 if you have the <linux/kd.h> header file. */
#define HAVE_LINUX_KD_H 1
/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1
/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1
/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1
/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1
/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1
/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1
/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1
/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1
/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1
/* Name of package */
#define PACKAGE "chocolate-doom"
/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "chocolate-doom-dev-list@chocolate-doom.org"
/* Define to the full name of this package. */
#define PACKAGE_NAME "Chocolate Doom"
/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Chocolate Doom 3.0.0"
/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "chocolate-doom"
/* Define to the home page for this package. */
#define PACKAGE_URL ""
/* Define to the version of this package. */
#define PACKAGE_VERSION "3.0.0"
/* Change this when you create your awesome forked version */
#define PROGRAM_PREFIX "chocolate-"
/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1
/* Version number of package */
#define VERSION "3.0.0"
<<<
# Copy Headerfiles from the folder above
cp ../deh_main.h .
cp ../doomtype.h .
cp ../deh_str.h .
cp ../sha1.h .
cp ../z_zone.h .
cp ../doomkeys.h .
cp ../i_timer.h .
cp ../d_mode.h .
cp ../d_event.h .
cp ../m_cheat.h .
cp ../tables.h .
cp ../m_fixed.h .
cp ../i_video.h .
cp ../v_patch.h .
cp ../d_ticcmd.h .
cp ../net_defs.h .
cp ../w_wad.h .
cp ../w_file.h .
cp ../m_controls.h .
cp ../m_misc.h .
cp ../i_system.h .
cp ../v_video.h .
cp ../d_loop.h .
cp ../deh_defs.h .
cp ../deh_io.h .
cp ../deh_mapping.h .
cp ../i_sound.h .
cp ../m_argv.h .
cp ../i_swap.h .
cp ../i_input.h .
cp ../d_iwad.h .
cp ../w_checksum.h .
cp ../w_main.h .
cp ../v_diskicon.h .
cp ../m_bbox.h .
cp ../m_config.h .
cp ../i_endoom.h .
cp ../i_joystick.h .
cp ../net_client.h .
cp ../net_dedicated.h .
cp ../net_query.h .
cp ../net_server.h .
cp ../net_common.h .
cp ../net_packet.h .
cp ../net_sdl.h .
cp ../net_io.h .
cp ../net_structrw.h .
cp ../aes_prng.h .
cp ../net_loop.h .
cp ../net_gui.h .
cp ../i_cdmus.h .
cp ../i_glob.h .
cp ../net_gui.h .
cp ../memio.h .
cp ../i_midipipe.h .
cp ../mus2mid.h .
cp ../gusconf.h .
cp ../midifile.h .
cp ../net_petname.h .
cp ../w_merge.h .
cp ../../textscreen/textscreen.h .
cp ../../textscreen/txt_main.h .
cp ../../textscreen/txt_sdl.h .
cp ../../textscreen/txt_button.h .
cp ../../textscreen/txt_widget.h .
cp ../../textscreen/txt_checkbox.h .
cp ../../textscreen/txt_conditional.h .
cp ../../textscreen/txt_desktop.h .
cp ../../textscreen/txt_window.h .
cp ../../textscreen/txt_window_action.h .
cp ../../textscreen/txt_table.h .
cp ../../textscreen/txt_dropdown.h .
cp ../../textscreen/txt_fileselect.h .
cp ../../textscreen/txt_inputbox.h .
cp ../../textscreen/txt_label.h .
cp ../../textscreen/txt_radiobutton.h .
cp ../../textscreen/txt_scrollpane.h .
cp ../../textscreen/txt_separator.h .
cp ../../textscreen/txt_spinctrl.h .
cp ../../textscreen/txt_strut.h .
cp ../../textscreen/txt_gui.h .
cp ../../textscreen/txt_io.h .
cp ../../textscreen/txt_utf8.h .
cp ../../textscreen/fonts/small.h .
cp ../../textscreen/fonts/normal.h .
cp ../../textscreen/fonts/large.h .
cp ../../textscreen/fonts/codepage.h .
cp ../../pcsound/pcsound.h .
cp ../../pcsound/pcsound_internal.h .
cp ../../opl/opl.h .
cp ../../opl/opl3.h .
cp ../../opl/opl_internal.h .
cp ../../opl/opl_queue.h .
cp ../../opl/opl_timer.h .

# Now copy the shared c-Files from the folder above
cp ../i_main.c .
cp ../i_system.c .
cp ../m_argv.c .
cp ../m_misc.c .
cp ../d_dedicated.c .
cp ../d_iwad.c .
cp ../d_mode.c .
cp ../deh_str.c .
cp ../i_timer.c .
cp ../m_config.c .
cp ../net_common.c .
cp ../net_dedicated.c .
cp ../net_io.c .
cp ../net_packet.c .
cp ../net_sdl.c .
cp ../net_query.c .
cp ../net_server.c .
cp ../net_structrw.c .
cp ../z_native.c .
cp ../aes_prng.c .
cp ../d_event.c .
cp ../d_iwad.c .
cp ../d_loop.c .
cp ../d_mode.c .
cp ../deh_str.c .
cp ../gusconf.c .
cp ../i_cdmus.c .
cp ../i_endoom.c .
cp ../i_glob.c .
cp ../i_input.c .
cp ../i_joystick.c .
cp ../i_midipipe.c .
cp ../i_musicpack.c .
cp ../i_oplmusic.c .
cp ../i_pcsound.c .
cp ../i_sdlmusic.c .
cp ../i_sdlsound.c .
cp ../i_sound.c .
cp ../i_timer.c .
cp ../i_video.c .
cp ../i_videohr.c .
cp ../midifile.c .
cp ../mus2mid.c .
cp ../m_bbox.c .
cp ../m_cheat.c .
cp ../m_config.c .
cp ../m_controls.c .
cp ../m_fixed.c .
cp ../net_client.c .
cp ../net_common.c .
cp ../net_dedicated.c .
cp ../net_defs.h .
cp ../net_gui.c .
cp ../net_io.c .
cp ../net_loop.c .
cp ../net_packet.c .
cp ../net_petname.c .
cp ../net_query.c .
cp ../net_sdl.c .
cp ../net_server.c .
cp ../net_structrw.c .
cp ../sha1.c .
cp ../memio.c .
cp ../tables.c .
cp ../v_diskicon.c .
cp ../v_video.c .
cp ../w_checksum.c .
cp ../w_main.c .
cp ../w_wad.c .
cp ../w_file.c .
cp ../w_file_stdc.c .
cp ../w_file_posix.c .
cp ../w_file_win32.c .
cp ../w_merge.c .
cp ../z_zone.c .
cp ../deh_io.c .
cp ../deh_main.c .
cp ../deh_mapping.c .
cp ../deh_text.c .
cp ../deh_str.c .
cp ../d_mode.c .
cp ../d_iwad.c .
cp ../i_timer.c .
cp ../m_config.c .
cp ../m_controls.c .
cp ../net_io.c .
cp ../net_packet.c .
cp ../net_petname.c .
cp ../net_sdl.c .
cp ../net_query.c .
cp ../net_structrw.c .
cp ../z_native.c .
cp ../icon.c .

# Make sure textscreen.h uses the local .h-File
sed -i s@../src/doomkeys.h@doomkeys.h@g textscreen.h

# Now copy our three needed libs:
# Textscreen
cp ../../textscreen/txt_button.c .
cp ../../textscreen/txt_checkbox.c .
cp ../../textscreen/txt_conditional.c .
cp ../../textscreen/txt_desktop.c .
cp ../../textscreen/txt_dropdown.c .
cp ../../textscreen/txt_fileselect.c .
cp ../../textscreen/txt_gui.c .
cp ../../textscreen/txt_inputbox.c .
cp ../../textscreen/txt_io.c .
cp ../../textscreen/txt_label.c .
cp ../../textscreen/txt_radiobutton.c .
cp ../../textscreen/txt_scrollpane.c .
cp ../../textscreen/txt_sdl.c .
cp ../../textscreen/txt_separator.c .
cp ../../textscreen/txt_spinctrl.c .
cp ../../textscreen/txt_strut.c .
cp ../../textscreen/txt_table.c .
cp ../../textscreen/txt_utf8.c .
cp ../../textscreen/txt_widget.c .
cp ../../textscreen/txt_window_action.c .
cp ../../textscreen/txt_window.c .
# pcsound
cp ../../pcsound/pcsound_bsd.c .
cp ../../pcsound/pcsound.c .
cp ../../pcsound/pcsound_linux.c .
cp ../../pcsound/pcsound_sdl.c .
cp ../../pcsound/pcsound_win32.c .
cp ../../pcsound/pcsound_bsd.c .
# opl
cp ../../opl/ioperm_sys.c .
cp ../../opl/opl3.c .
cp ../../opl/opl.c .
cp ../../opl/opl_linux.c .
cp ../../opl/opl_obsd.c .
cp ../../opl/opl_queue.c .
cp ../../opl/opl_sdl.c .
cp ../../opl/opl_timer.c .
cp ../../opl/opl_win32.c .

# Copy SDL Headerfiles from System
cp /usr/include/SDL2/SDL_endian.h .
cp /usr/include/SDL2/SDL_stdinc.h .
cp /usr/include/SDL2/SDL_config.h .
cp /usr/include/SDL2/SDL_platform.h .
cp /usr/include/SDL2/begin_code.h .
cp /usr/include/SDL2/close_code.h .
cp /usr/include/SDL2/SDL.h .
cp /usr/include/SDL2/SDL_filesystem.h .
cp /usr/include/SDL2/SDL_main.h .
cp /usr/include/SDL2/SDL_assert.h .
cp /usr/include/SDL2/SDL_atomic.h .
cp /usr/include/SDL2/SDL_audio.h .
cp /usr/include/SDL2/SDL_error.h .
cp /usr/include/SDL2/SDL_mutex.h .
cp /usr/include/SDL2/SDL_thread.h .
cp /usr/include/SDL2/SDL_rwops.h .
cp /usr/include/SDL2/SDL_clipboard.h .
cp /usr/include/SDL2/SDL_cpuinfo.h .
cp /usr/include/SDL2/SDL_events.h .
cp /usr/include/SDL2/SDL_video.h .
cp /usr/include/SDL2/SDL_pixels.h .
cp /usr/include/SDL2/SDL_rect.h .
cp /usr/include/SDL2/SDL_surface.h .
cp /usr/include/SDL2/SDL_blendmode.h .
cp /usr/include/SDL2/SDL_keyboard.h .
cp /usr/include/SDL2/SDL_keycode.h .
cp /usr/include/SDL2/SDL_scancode.h .
cp /usr/include/SDL2/SDL_mouse.h .
cp /usr/include/SDL2/SDL_joystick.h .
cp /usr/include/SDL2/SDL_gamecontroller.h .
cp /usr/include/SDL2/SDL_quit.h .
cp /usr/include/SDL2/SDL_gesture.h .
cp /usr/include/SDL2/SDL_touch.h .
cp /usr/include/SDL2/SDL_haptic.h .
cp /usr/include/SDL2/SDL_hints.h .
cp /usr/include/SDL2/SDL_loadso.h .
cp /usr/include/SDL2/SDL_log.h .
cp /usr/include/SDL2/SDL_messagebox.h .
cp /usr/include/SDL2/SDL_power.h .
cp /usr/include/SDL2/SDL_render.h .
cp /usr/include/SDL2/SDL_shape.h .
cp /usr/include/SDL2/SDL_system.h .
cp /usr/include/SDL2/SDL_timer.h .
cp /usr/include/SDL2/SDL_version.h .
cp /usr/include/SDL2/SDL_net.h .
cp /usr/include/SDL2/SDL_mixer.h .
cp /usr/include/SDL2/SDL_opengl.h .
cp /usr/include/SDL2/SDL_opengl_glext.h .

# Make our Libs
# Textscreen
# Make sure txt_sdl.c uses local font files
sed -i s@fonts/small.h@small.h@g txt_sdl.c
sed -i s@fonts/normal.h@normal.h@g txt_sdl.c
sed -i s@fonts/large.h@large.h@g txt_sdl.c
# And local libs
sed -i s@fonts/codepage.h@codepage.h@g txt_sdl.c
gcc -I. -c txt_button.c txt_checkbox.c txt_conditional.c txt_desktop.c txt_dropdown.c txt_fileselect.c txt_gui.c txt_inputbox.c txt_io.c txt_label.c txt_radiobutton.c txt_scrollpane.c txt_sdl.c txt_separator.c txt_spinctrl.c txt_strut.c txt_table.c txt_utf8.c txt_widget.c txt_window_action.c txt_window.c
ar rcs libtextscreen.a txt_button.o txt_checkbox.o txt_conditional.o txt_desktop.o txt_dropdown.o txt_fileselect.o txt_gui.o txt_inputbox.o txt_io.o txt_label.o txt_radiobutton.o txt_scrollpane.o txt_sdl.o txt_separator.o txt_spinctrl.o txt_strut.o txt_table.o txt_utf8.o txt_widget.o txt_window_action.o txt_window.o
# pcsound
gcc -I. -c pcsound_bsd.c pcsound.c pcsound_linux.c pcsound_sdl.c pcsound_win32.c pcsound_bsd.c
ar rcs libpcsound.a pcsound_bsd.o pcsound.o pcsound_linux.o pcsound_sdl.o pcsound_win32.o pcsound_bsd.o
# opl
gcc -I. -c ioperm_sys.c opl3.c opl.c opl_linux.c opl_obsd.c opl_queue.c opl_sdl.c opl_timer.c opl_win32.c
ar rcs libopl.a ioperm_sys.o opl3.o opl.o opl_linux.o opl_obsd.o opl_queue.o opl_sdl.o opl_timer.o opl_win32.o

# Now we've got everything setup, so make our own self contained doom folder
mkdir ~/mydoom
mv * ~/mydoom
cd ~/mydoom

# Now link all .c-Files to the Executable DOOM:
# Additional libraries which need to be linked, provided by the doom soure:
# /textscreen/libtextscreen.a
# /pcsound/libpcsound.a 
# /opl/libopl.a
# Additional libraries which need to be linked, provided by our Linux build System:
# SDL
# SDLMIXER
# SDLNET
# We do not make d_dedicated.c here, because this is the doom server!
# We're using the memory allocator 'z_zone.c', not 'z_native.c' which uses malloc()
gcc am_map.c deh_ammo.c deh_bexstr.c deh_cheat.c deh_doom.c deh_frame.c deh_misc.c deh_ptr.c deh_sound.c deh_thing.c deh_weapon.c d_items.c d_main.c d_net.c doomdef.c doomstat.c dstrings.c f_finale.c f_wipe.c g_game.c hu_lib.c hu_stuff.c info.c m_menu.c m_random.c p_ceilng.c p_doors.c p_enemy.c p_floor.c p_inter.c p_lights.c p_map.c p_maputl.c p_mobj.c p_plats.c p_pspr.c p_saveg.c p_setup.c p_sight.c p_spec.c p_switch.c p_telept.c p_tick.c p_user.c r_bsp.c r_data.c r_draw.c r_main.c r_plane.c r_segs.c r_sky.c r_things.c s_sound.c sounds.c statdump.c st_lib.c st_stuff.c wi_stuff.c i_main.c i_system.c m_argv.c m_misc.c d_iwad.c d_mode.c deh_str.c i_timer.c m_config.c net_common.c net_dedicated.c net_io.c net_packet.c net_sdl.c net_query.c net_server.c net_structrw.c aes_prng.c d_event.c d_loop.c gusconf.c i_cdmus.c i_endoom.c i_glob.c i_input.c i_joystick.c i_midipipe.c i_musicpack.c i_oplmusic.c i_pcsound.c i_sdlmusic.c i_sdlsound.c i_sound.c i_video.c i_videohr.c midifile.c mus2mid.c m_bbox.c m_cheat.c m_controls.c m_fixed.c net_client.c net_defs.h net_gui.c net_loop.c net_petname.c sha1.c memio.c tables.c v_diskicon.c v_video.c w_checksum.c w_main.c w_wad.c w_file.c w_file_stdc.c w_file_posix.c w_file_win32.c w_merge.c z_zone.c deh_io.c deh_main.c deh_mapping.c deh_text.c -lSDL2 -lSDL2_mixer -lSDL2_net -I. -L. -lpcsound -lopl -ltextscreen -o DOOM

# AND try to run it!
./DOOM -iwad /home/tc/Downloads/DOOM2.WAD
```

```
##### Not needed Steps:
# Create Objectfiles folder 'doom' -> Just for test, gcc does do that for us!
gcc -I. -c am_map.c
gcc -I. -c deh_ammo.c
gcc -I. -c deh_bexstr.c
gcc -I. -c deh_cheat.c
gcc -I. -c deh_doom.c
gcc -I. -c deh_frame.c
gcc -I. -c deh_misc.c
gcc -I. -c deh_ptr.c
gcc -I. -c deh_sound.c
gcc -I. -c deh_thing.c
gcc -I. -c deh_weapon.c
gcc -I. -c d_items.c
gcc -I. -c d_main.c
gcc -I. -c d_net.c
gcc -I. -c doomdef.c
gcc -I. -c doomstat.c
gcc -I. -c dstrings.c
gcc -I. -c f_finale.c
gcc -I. -c f_wipe.c
gcc -I. -c g_game.c
gcc -I. -c hu_lib.c
gcc -I. -c hu_stuff.c
gcc -I. -c info.c
gcc -I. -c m_menu.c
gcc -I. -c m_random.c
gcc -I. -c p_ceilng.c
gcc -I. -c p_doors.c
gcc -I. -c p_enemy.c
gcc -I. -c p_floor.c
gcc -I. -c p_inter.c
gcc -I. -c p_lights.c
gcc -I. -c p_map.c
gcc -I. -c p_maputl.c
gcc -I. -c p_mobj.c
gcc -I. -c p_plats.c
gcc -I. -c p_pspr.c
gcc -I. -c p_saveg.c
gcc -I. -c p_setup.c
gcc -I. -c p_sight.c
gcc -I. -c p_spec.c
gcc -I. -c p_switch.c
gcc -I. -c p_telept.c
gcc -I. -c p_tick.c
gcc -I. -c p_user.c
gcc -I. -c r_bsp.c
gcc -I. -c r_data.c
gcc -I. -c r_draw.c
gcc -I. -c r_main.c
gcc -I. -c r_plane.c
gcc -I. -c r_segs.c
gcc -I. -c r_sky.c
gcc -I. -c r_things.c
gcc -I. -c s_sound.c
gcc -I. -c sounds.c
gcc -I. -c statdump.c
gcc -I. -c st_lib.c
gcc -I. -c st_stuff.c
gcc -I. -c wi_stuff.c

# create Objectfiles 'folder above doom' -> Just for test, gcc does do that for us!
gcc -I. -c i_main.c
gcc -I. -c i_system.c
gcc -I. -c m_argv.c
gcc -I. -c m_misc.c
gcc -I. -c d_dedicated.c
gcc -I. -c d_iwad.c
gcc -I. -c d_mode.c
gcc -I. -c deh_str.c
gcc -I. -c i_timer.c
gcc -I. -c m_config.c
gcc -I. -c net_common.c
gcc -I. -c net_dedicated.c
gcc -I. -c net_io.c
gcc -I. -c net_packet.c
gcc -I. -c net_sdl.c
gcc -I. -c net_query.c
gcc -I. -c net_server.c
gcc -I. -c net_structrw.c
gcc -I. -c z_native.c
gcc -I. -c aes_prng.c
gcc -I. -c d_event.c
gcc -I. -c d_iwad.c
gcc -I. -c d_loop.c
gcc -I. -c d_mode.c
gcc -I. -c deh_str.c
gcc -I. -c gusconf.c
gcc -I. -c i_cdmus.c
gcc -I. -c i_endoom.c
gcc -I. -c i_glob.c
gcc -I. -c i_input.c
gcc -I. -c i_joystick.c
gcc -I. -c i_midipipe.c
gcc -I. -c i_musicpack.c
gcc -I. -c i_oplmusic.c
gcc -I. -c i_pcsound.c
gcc -I. -c i_sdlmusic.c
gcc -I. -c i_sdlsound.c
gcc -I. -c i_sound.c
gcc -I. -c i_timer.c
gcc -I. -c i_video.c
gcc -I. -c i_videohr.c
gcc -I. -c midifile.c
gcc -I. -c mus2mid.c
gcc -I. -c m_bbox.c
gcc -I. -c m_cheat.c
gcc -I. -c m_config.c
gcc -I. -c m_controls.c
gcc -I. -c m_fixed.c
gcc -I. -c net_client.c
gcc -I. -c net_common.c
gcc -I. -c net_dedicated.c
gcc -I. -c net_defs.h
gcc -I. -c net_gui.c
gcc -I. -c net_io.c
gcc -I. -c net_loop.c
gcc -I. -c net_packet.c
gcc -I. -c net_petname.c
gcc -I. -c net_query.c
gcc -I. -c net_sdl.c
gcc -I. -c net_server.c
gcc -I. -c net_structrw.c
gcc -I. -c sha1.c
gcc -I. -c memio.c
gcc -I. -c tables.c
gcc -I. -c v_diskicon.c
gcc -I. -c v_video.c
gcc -I. -c w_checksum.c
gcc -I. -c w_main.c
gcc -I. -c w_wad.c
gcc -I. -c w_file.c
gcc -I. -c w_file_stdc.c
gcc -I. -c w_file_posix.c
gcc -I. -c w_file_win32.c
gcc -I. -c w_merge.c
gcc -I. -c z_zone.c
gcc -I. -c deh_io.c
gcc -I. -c deh_main.c
gcc -I. -c deh_mapping.c
gcc -I. -c deh_text.c
gcc -I. -c deh_str.c
gcc -I. -c d_mode.c
gcc -I. -c d_iwad.c
gcc -I. -c i_timer.c
gcc -I. -c m_config.c
gcc -I. -c m_controls.c
gcc -I. -c net_io.c
gcc -I. -c net_packet.c
gcc -I. -c net_petname.c
gcc -I. -c net_sdl.c
gcc -I. -c net_query.c
gcc -I. -c net_structrw.c
gcc -I. -c z_native.c
```
