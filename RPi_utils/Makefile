all: send codesend RFSniffer steuerung

send: RCSwitch.o send.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $+ -o $@ -lwiringPi
	
codesend: RCSwitch.o codesend.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $+ -o $@ -lwiringPi
	
RFSniffer: RCSwitch.o RFSniffer.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $+ -o $@ -lwiringPi

steuerung: steuerung.cpp
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -g RCSwitch.cpp $+ -o $@ -lwiringPi

clean:
	$(RM) *.o send codesend servo RFSniffer
