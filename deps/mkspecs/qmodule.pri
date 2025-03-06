QT_CPU_FEATURES.x86_64 = 
QT.global_private.enabled_features = debug x86intrin sse2 sse3 ssse3 sse4_1 sse4_2 avx f16c avx2 avx512f avx512er avx512cd avx512pf avx512dq avx512bw avx512vl avx512ifma avx512vbmi avx512vbmi2 aesni vaes rdrnd rdseed shani localtime_s alloca_malloc_h alloca system-zlib dbus gui network printsupport testlib widgets xml relocatable intelcet largefile precompile_header sse2 sse3 ssse3 sse4_1 sse4_2 avx f16c avx2 avx512f avx512er avx512cd avx512pf avx512dq avx512bw avx512vl avx512ifma avx512vbmi avx512vbmi2 aesni vaes rdrnd rdseed shani
QT.global_private.disabled_features = use_bfd_linker use_gold_linker use_lld_linker use_mold_linker android-style-assets gc_binaries developer-build private_tests elf_private_full_version reduce_exports no_direct_extern_access mips_dsp mips_dspr2 neon arm_crc32 arm_crypto localtime_r posix_fallocate alloca_h stdlib-libcpp dbus-linked sql libudev openssl dlopen glibc_fortify_source trivial_auto_var_init_pattern stack_protector stack_clash_protection libstdcpp_assertions libcpp_hardening relro_now_linker
CONFIG += largefile precompile_header sse2 sse3 ssse3 sse4_1 sse4_2 avx f16c avx2 avx512f avx512er avx512cd avx512pf avx512dq avx512bw avx512vl avx512ifma avx512vbmi avx512vbmi2 aesni vaes rdrnd rdseed shani
QT_COORD_TYPE = double
QT_BUILD_PARTS = libs tools

QMAKE_LIBS_ZLIB = -L"D:/a/pcsx2-windows-dependencies/pcsx2-windows-dependencies/deps/lib" -lzlib
QMAKE_INCDIR_ZLIB = D:/a/pcsx2-windows-dependencies/pcsx2-windows-dependencies/deps/include
QMAKE_LIBS_ZSTD = -L"D:/a/pcsx2-windows-dependencies/pcsx2-windows-dependencies/deps/lib" -lzstd
QMAKE_INCDIR_ZSTD = D:/a/pcsx2-windows-dependencies/pcsx2-windows-dependencies/deps/include
