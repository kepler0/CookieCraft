package com.k2b6s9j.CCraft;

import cpw.mods.fml.common.Mod;
import cpw.mods.fml.common.Mod.EventHandler;
import cpw.mods.fml.common.event.FMLPreInitializationEvent;
import cpw.mods.fml.common.event.FMLInitializationEvent;
import cpw.mods.fml.common.event.FMLPostInitializationEvent;

@Mod(modid = "CCraft", name="CCraft", version = "0.1")
public class CCraft {
  @EventHandler
  public native void preInit(FMLPreInitializationEvent event);

  @EventHandler
  public native void init(FMLInitializationEvent event);

  @EventHandler
  public native void postInit(FMLPostInitializationEvent event);
}
