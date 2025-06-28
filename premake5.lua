workspace "capybara"
configurations {"Debug", "Release"}
architecture "x86_64"
system "windows"

project "capybara-cli"
kind "ConsoleApp"
language "C++"
cppdialect "C++20"
targetdir "bin/%{cfg.system}_%{cfg.architecture}/%{cfg.buildcfg}"

files {"**.cpp"}

filter "configurations:Debug"
defines {"DEBUG"}
symbols "On"

filter "configurations:Release"
defines {"NDEBUG"}
optimize "On"
targetname "capysay"
