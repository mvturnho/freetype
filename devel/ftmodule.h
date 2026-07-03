/*
 * This file registers the FreeType modules compiled into the library.
 *
 * If you use GNU make, this file IS NOT USED!  Instead, it is created in
 * the objects directory (normally `<topdir>/objs/`) based on information
 * from `<topdir>/modules.cfg`.
 *
 * Please read `docs/INSTALL.ANY` and `docs/CUSTOMIZE` how to compile
 * FreeType without GNU make.
 *
 */

/*
 * openHASP / LVGL 9.3 integration note: this file is LVGL 9.3's own shipped
 * ftmodule.h (lvgl/src/libs/freetype/ftmodule.h), adopted verbatim. The
 * module set it enables (tt_driver_class, sfnt_module_class,
 * ft_smooth_renderer_class only) already exactly matched what this project
 * needs before this comparison was done - openHASP uses TrueType/OpenType-TT
 * fonts exclusively (embedded .ttf, no Type1/CFF/BDF/PCF font sources
 * anywhere in the codebase) - so there are no openHASP-specific deviations
 * to record here. If a future need for another format (e.g. CFF-flavored
 * .otf) is demonstrated, re-enable the corresponding driver here and
 * document why.
 */

/* FT_USE_MODULE( FT_Module_Class, autofit_module_class ) */
FT_USE_MODULE(FT_Driver_ClassRec, tt_driver_class)
/* FT_USE_MODULE( FT_Driver_ClassRec, t1_driver_class ) */
/* FT_USE_MODULE( FT_Driver_ClassRec, cff_driver_class ) */
/* FT_USE_MODULE( FT_Driver_ClassRec, t1cid_driver_class ) */
/* FT_USE_MODULE( FT_Driver_ClassRec, pfr_driver_class ) */
/* FT_USE_MODULE( FT_Driver_ClassRec, t42_driver_class ) */
/* FT_USE_MODULE( FT_Driver_ClassRec, winfnt_driver_class ) */
/* FT_USE_MODULE( FT_Driver_ClassRec, pcf_driver_class ) */
/* FT_USE_MODULE( FT_Driver_ClassRec, bdf_driver_class ) */
/* FT_USE_MODULE( FT_Module_Class, psaux_module_class ) */
/* FT_USE_MODULE( FT_Module_Class, psnames_module_class ) */
/* FT_USE_MODULE( FT_Module_Class, pshinter_module_class ) */
FT_USE_MODULE(FT_Module_Class, sfnt_module_class)
FT_USE_MODULE(FT_Renderer_Class, ft_smooth_renderer_class)
/* FT_USE_MODULE( FT_Renderer_Class, ft_raster1_renderer_class ) */
/* FT_USE_MODULE( FT_Renderer_Class, ft_sdf_renderer_class ) */
/* FT_USE_MODULE( FT_Renderer_Class, ft_bitmap_sdf_renderer_class ) */
/* FT_USE_MODULE( FT_Renderer_Class, ft_svg_renderer_class ) */

/* EOF */
