workspace "capybara"
    configurations { "Debug", "Release" }

project "capybara-cli"
    kind "ConsoleApp"
    language "c++"
    cppdialect "C++20"
    targetdir "bin/%{cfg.system}_%{cfg.architecture}/%{cfg.buildcfg}"

    files {"**.cpp" }

    filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"