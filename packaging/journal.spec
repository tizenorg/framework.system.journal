Name:     journal
Summary:  Common libraries for all event log, Exported API sets
Version:  0.1.0
Release:  1
Group:    Framework/system
License:  Apache-2.0
Source0:  %{name}-%{version}.tar.gz

BuildRequires:  cmake
BuildRequires:  pkgconfig(dlog)

Requires(post):    /sbin/ldconfig
Requires(postun):  /sbin/ldconfig

%description
Common libraries for all event log, Exported API sets
It is interface for logging all event.

%package -n libjournal
Summary:    journal library
Group:      Development/Libraries
Requires:   systemd

%description -n libjournal
journal library for device control

%package -n libjournal-devel
Summary:    journal library for (devel)
Group:      Development/Libraries
Requires:   libjournal = %{version}-%{release}

%description -n libjournal-devel
journal library for all event log (devel)

%prep
%setup -q

%build
export LDFLAGS="${LDFLAGS} -Wl,--as-needed,--rpath=%{_libdir}"
CFLAGS+=" -fvisibility=hidden -fvisibility-inlines-hidden -Wno-unused-local-typedefs "; export CFLAGS
CXXFLAGS+=" -fvisibility=hidden -fvisibility-inlines-hidden"; export CFLAGS
FFLAGS+=" -fvisibility=hidden -fvisibility-inlines-hidden"; export CFLAGS

export CFLAGS="${CFLAGS} -DTIZEN_DEBUG_ENABLE"
export CXXFLAGS="${CXXFLAGS} -DTIZEN_DEBUG_ENABLE"
export FFLAGS="${FFLAGS} -DTIZEN_DEBUG_ENABLE"

cmake . -DCMAKE_INSTALL_PREFIX=%{_prefix}
make %{?jobs:-j%jobs} # Call make instruction with smp support

%install
rm -rf %{buildroot}
%make_install

%clean
rm -rf %{buildroot}

%post
/sbin/ldconfig

%postun
/sbin/ldconfig

%files -n libjournal
%defattr(-,root,root,-)
%{_libdir}/libjournal.so
%{_libdir}/libjournal.so.0
%{_libdir}/libjournal.so.0.1.0
%manifest journal.manifest

%files -n libjournal-devel
%defattr(-,root,root,-)
%{_libdir}/pkgconfig/journal.pc
%{_includedir}/journal/*.h

