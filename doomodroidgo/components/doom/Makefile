# Makefile does build a odroidgodoom.a with the Export D_DoomMain which is our starting point!
doom.a: doom.o
	ar rcs doom.a am_map.o deh_ammo.o deh_bexstr.o deh_cheat.o deh_doom.o deh_frame.o deh_misc.o deh_ptr.o deh_sound.o deh_thing.o deh_weapon.o d_items.o d_main.o d_net.o doomdef.o doomstat.o dstrings.o f_finale.o f_wipe.o g_game.o hu_lib.o hu_stuff.o info.o m_menu.o m_random.o p_ceilng.o p_doors.o p_enemy.o p_floor.o p_inter.o p_lights.o p_map.o p_maputl.o p_mobj.o p_plats.o p_pspr.o p_saveg.o p_setup.o p_sight.o p_spec.o p_switch.o p_telept.o p_tick.o p_user.o r_bsp.o r_data.o r_draw.o r_main.o r_plane.o r_segs.o r_sky.o r_things.o s_sound.o sounds.o statdump.o st_lib.o st_stuff.o wi_stuff.o i_main.o i_system.o m_argv.o m_misc.o d_iwad.o d_mode.o deh_str.o i_timer.o m_config.o net_common.o net_dedicated.o net_io.o net_packet.o net_sdl.o net_query.o net_server.o net_structrw.o aes_prng.o d_event.o d_loop.o gusconf.o i_cdmus.o i_endoom.o i_glob.o i_input.o i_joystick.o i_midipipe.o i_musicpack.o i_oplmusic.o i_pcsound.o i_sdlmusic.o i_sdlsound.o i_sound.o i_video.o i_videohr.o midifile.o mus2mid.o m_bbox.o m_cheat.o m_controls.o m_fixed.o net_client.o net_defs.h net_gui.o net_loop.o net_petname.o sha1.o memio.o tables.o v_diskicon.o v_video.o w_checksum.o w_main.o w_wad.o w_file.o w_file_stdc.o w_file_posix.o w_file_win32.o w_merge.o z_zone.o deh_io.o deh_main.o deh_mapping.o deh_text.o

doom.o: libodroidSDL2.o libtextscreen.o libpcsound.o liopl.o
	gcc -I. -c am_map.c deh_ammo.c deh_bexstr.c deh_cheat.c deh_doom.c deh_frame.c deh_misc.c deh_ptr.c deh_sound.c deh_thing.c deh_weapon.c d_items.c d_main.c d_net.c doomdef.c doomstat.c dstrings.c f_finale.c f_wipe.c g_game.c hu_lib.c hu_stuff.c info.c m_menu.c m_random.c p_ceilng.c p_doors.c p_enemy.c p_floor.c p_inter.c p_lights.c p_map.c p_maputl.c p_mobj.c p_plats.c p_pspr.c p_saveg.c p_setup.c p_sight.c p_spec.c p_switch.c p_telept.c p_tick.c p_user.c r_bsp.c r_data.c r_draw.c r_main.c r_plane.c r_segs.c r_sky.c r_things.c s_sound.c sounds.c statdump.c st_lib.c st_stuff.c wi_stuff.c i_main.c i_system.c m_argv.c m_misc.c d_iwad.c d_mode.c deh_str.c i_timer.c m_config.c net_common.c net_dedicated.c net_io.c net_packet.c net_sdl.c net_query.c net_server.c net_structrw.c aes_prng.c d_event.c d_loop.c gusconf.c i_cdmus.c i_endoom.c i_glob.c i_input.c i_joystick.c i_midipipe.c i_musicpack.c i_oplmusic.c i_pcsound.c i_sdlmusic.c i_sdlsound.c i_sound.c i_video.c i_videohr.c midifile.c mus2mid.c m_bbox.c m_cheat.c m_controls.c m_fixed.c net_client.c net_defs.h net_gui.c net_loop.c net_petname.c sha1.c memio.c tables.c v_diskicon.c v_video.c w_checksum.c w_main.c w_wad.c w_file.c w_file_stdc.c w_file_posix.c w_file_win32.c w_merge.c z_zone.c deh_io.c deh_main.c deh_mapping.c deh_text.c -I. -L. -lodroidSDL2 -lpcsound -lopl -ltextscreen
        
libodroidSDL2.a: libodroidSDL2.o
	ar rcs libodroidSDL2.a libodroidSDL2.o

libodroidSDL2.o:
	gcc -I. -c libodroidSDL2.c

libtextscreen.a: libtextscreen.o
	ar rcs libtextscreen.a txt_button.o txt_checkbox.o txt_conditional.o txt_desktop.o txt_dropdown.o txt_fileselect.o txt_gui.o txt_inputbox.o txt_io.o txt_label.o txt_radiobutton.o txt_scrollpane.o txt_sdl.o txt_separator.o txt_spinctrl.o txt_strut.o txt_table.o txt_utf8.o txt_widget.o txt_window_action.o txt_window.o

libtextscreen.o:
	gcc -I. -c txt_button.c txt_checkbox.c txt_conditional.c txt_desktop.c txt_dropdown.c txt_fileselect.c txt_gui.c txt_inputbox.c txt_io.c txt_label.c txt_radiobutton.c txt_scrollpane.c txt_sdl.c txt_separator.c txt_spinctrl.c txt_strut.c txt_table.c txt_utf8.c txt_widget.c txt_window_action.c txt_window.c

libpcsound.a: libpcsound.o
	ar rcs libpcsound.a pcsound_bsd.o pcsound.o pcsound_linux.o pcsound_sdl.o pcsound_win32.o

libpcsound.o:
	gcc -I. -c pcsound_bsd.c pcsound.c pcsound_linux.c pcsound_sdl.c pcsound_win32.c

libopl.a: liopl.o
	ar rcs libopl.a ioperm_sys.o opl3.o opl.o opl_linux.o opl_obsd.o opl_queue.o opl_sdl.o opl_timer.o opl_win32.o

liopl.o:
	gcc -I. -c ioperm_sys.c opl3.c opl.c opl_linux.c opl_obsd.c opl_queue.c opl_sdl.c opl_timer.c opl_win32.c

