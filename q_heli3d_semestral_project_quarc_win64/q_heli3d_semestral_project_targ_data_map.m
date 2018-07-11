  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_heli3d_semestral_project_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.par_inputs
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.K_AMP
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_P.K_EC_E
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_heli3d_semestral_project_P.K_EC_P
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_heli3d_semestral_project_P.K_EC_T
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_P.VMAX_AMP
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_heli3d_semestral_project_P.VMAX_DAC
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_heli3d_semestral_project_P.ae1
	  section.data(7).logicalSrcIdx = 7;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_heli3d_semestral_project_P.ae2
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_heli3d_semestral_project_P.at
	  section.data(9).logicalSrcIdx = 9;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_heli3d_semestral_project_P.be
	  section.data(10).logicalSrcIdx = 10;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_heli3d_semestral_project_P.bl
	  section.data(11).logicalSrcIdx = 11;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_heli3d_semestral_project_P.bt
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_heli3d_semestral_project_P.ce
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_heli3d_semestral_project_P.cl
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_heli3d_semestral_project_P.ct
	  section.data(15).logicalSrcIdx = 15;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_heli3d_semestral_project_P.x0
	  section.data(16).logicalSrcIdx = 16;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.HILReadEncoderTimebase_clock
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.HILReadEncoderTimebase_channels
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_P.HILWriteAnalog_channels
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_P.HILWriteDigital_channels
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 5;
	
	  ;% q_heli3d_semestral_project_P.HILReadEncoderTimebase_samples_
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 44;
      section.data(44)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.HILInitialize_OOTerminate
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_OOExit
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_OOStart
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_OOEnter
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOFinal
	  section.data(5).logicalSrcIdx = 26;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POFinal
	  section.data(6).logicalSrcIdx = 27;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AIHigh
	  section.data(7).logicalSrcIdx = 28;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AILow
	  section.data(8).logicalSrcIdx = 29;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOHigh
	  section.data(9).logicalSrcIdx = 30;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOLow
	  section.data(10).logicalSrcIdx = 31;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOInitial
	  section.data(11).logicalSrcIdx = 32;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOWatchdog
	  section.data(12).logicalSrcIdx = 33;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POFrequency
	  section.data(13).logicalSrcIdx = 34;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POLeading
	  section.data(14).logicalSrcIdx = 35;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POTrailing
	  section.data(15).logicalSrcIdx = 36;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POInitial
	  section.data(16).logicalSrcIdx = 37;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POWatchdog
	  section.data(17).logicalSrcIdx = 38;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_heli3d_semestral_project_P.Step_Time
	  section.data(18).logicalSrcIdx = 39;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_heli3d_semestral_project_P.Step_Y0
	  section.data(19).logicalSrcIdx = 40;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_heli3d_semestral_project_P.Step_YFinal
	  section.data(20).logicalSrcIdx = 41;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_heli3d_semestral_project_P.Step1_Time
	  section.data(21).logicalSrcIdx = 42;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_heli3d_semestral_project_P.Step1_Y0
	  section.data(22).logicalSrcIdx = 43;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_heli3d_semestral_project_P.Step1_YFinal
	  section.data(23).logicalSrcIdx = 44;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_heli3d_semestral_project_P.Step2_Time
	  section.data(24).logicalSrcIdx = 45;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_heli3d_semestral_project_P.Step2_Y0
	  section.data(25).logicalSrcIdx = 46;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_heli3d_semestral_project_P.Step2_YFinal
	  section.data(26).logicalSrcIdx = 47;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_heli3d_semestral_project_P.Step3_Time
	  section.data(27).logicalSrcIdx = 48;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_heli3d_semestral_project_P.Step3_Y0
	  section.data(28).logicalSrcIdx = 49;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_heli3d_semestral_project_P.Step3_YFinal
	  section.data(29).logicalSrcIdx = 50;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_heli3d_semestral_project_P.Step4_Time
	  section.data(30).logicalSrcIdx = 51;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_heli3d_semestral_project_P.Step4_Y0
	  section.data(31).logicalSrcIdx = 52;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_heli3d_semestral_project_P.Step4_YFinal
	  section.data(32).logicalSrcIdx = 53;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_heli3d_semestral_project_P.Gain_Gain
	  section.data(33).logicalSrcIdx = 54;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_heli3d_semestral_project_P.Constant_Value
	  section.data(34).logicalSrcIdx = 55;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_heli3d_semestral_project_P.Gain1_Gain
	  section.data(35).logicalSrcIdx = 56;
	  section.data(35).dtTransOffset = 34;
	
	  ;% q_heli3d_semestral_project_P.DerivativeFilterElevation_A
	  section.data(36).logicalSrcIdx = 57;
	  section.data(36).dtTransOffset = 35;
	
	  ;% q_heli3d_semestral_project_P.DerivativeFilterElevation_C
	  section.data(37).logicalSrcIdx = 58;
	  section.data(37).dtTransOffset = 37;
	
	  ;% q_heli3d_semestral_project_P.DerivativeFilterPitch_A
	  section.data(38).logicalSrcIdx = 59;
	  section.data(38).dtTransOffset = 39;
	
	  ;% q_heli3d_semestral_project_P.DerivativeFilterPitch_C
	  section.data(39).logicalSrcIdx = 60;
	  section.data(39).dtTransOffset = 41;
	
	  ;% q_heli3d_semestral_project_P.DerivativeFilterTravel_A
	  section.data(40).logicalSrcIdx = 61;
	  section.data(40).dtTransOffset = 43;
	
	  ;% q_heli3d_semestral_project_P.DerivativeFilterTravel_C
	  section.data(41).logicalSrcIdx = 62;
	  section.data(41).dtTransOffset = 45;
	
	  ;% q_heli3d_semestral_project_P.EnableAmp_Value
	  section.data(42).logicalSrcIdx = 63;
	  section.data(42).dtTransOffset = 47;
	
	  ;% q_heli3d_semestral_project_P.Integrator3_IC
	  section.data(43).logicalSrcIdx = 64;
	  section.data(43).dtTransOffset = 51;
	
	  ;% q_heli3d_semestral_project_P.Constant_Value_c
	  section.data(44).logicalSrcIdx = 65;
	  section.data(44).dtTransOffset = 52;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOWatchdog
	  section.data(2).logicalSrcIdx = 67;
	  section.data(2).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_EIInitial
	  section.data(3).logicalSrcIdx = 68;
	  section.data(3).dtTransOffset = 4;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POModes
	  section.data(4).logicalSrcIdx = 69;
	  section.data(4).dtTransOffset = 5;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POConfiguration
	  section.data(5).logicalSrcIdx = 70;
	  section.data(5).dtTransOffset = 6;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POAlignment
	  section.data(6).logicalSrcIdx = 71;
	  section.data(6).dtTransOffset = 7;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POPolarity
	  section.data(7).logicalSrcIdx = 72;
	  section.data(7).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 74;
	  section.data(2).dtTransOffset = 8;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_EIChannels
	  section.data(3).logicalSrcIdx = 75;
	  section.data(3).dtTransOffset = 16;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_EIQuadrature
	  section.data(4).logicalSrcIdx = 76;
	  section.data(4).dtTransOffset = 24;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POChannels
	  section.data(5).logicalSrcIdx = 77;
	  section.data(5).dtTransOffset = 25;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 38;
      section.data(38)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 78;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOTerminate
	  section.data(2).logicalSrcIdx = 79;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOExit
	  section.data(3).logicalSrcIdx = 80;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOTerminate
	  section.data(4).logicalSrcIdx = 81;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOExit
	  section.data(5).logicalSrcIdx = 82;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POTerminate
	  section.data(6).logicalSrcIdx = 83;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POExit
	  section.data(7).logicalSrcIdx = 84;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_CKPStart
	  section.data(8).logicalSrcIdx = 85;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_CKPEnter
	  section.data(9).logicalSrcIdx = 86;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_CKStart
	  section.data(10).logicalSrcIdx = 87;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_CKEnter
	  section.data(11).logicalSrcIdx = 88;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AIPStart
	  section.data(12).logicalSrcIdx = 89;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AIPEnter
	  section.data(13).logicalSrcIdx = 90;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOPStart
	  section.data(14).logicalSrcIdx = 91;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOPEnter
	  section.data(15).logicalSrcIdx = 92;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOStart
	  section.data(16).logicalSrcIdx = 93;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOEnter
	  section.data(17).logicalSrcIdx = 94;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_AOReset
	  section.data(18).logicalSrcIdx = 95;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOPStart
	  section.data(19).logicalSrcIdx = 96;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOPEnter
	  section.data(20).logicalSrcIdx = 97;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOStart
	  section.data(21).logicalSrcIdx = 98;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOEnter
	  section.data(22).logicalSrcIdx = 99;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOReset
	  section.data(23).logicalSrcIdx = 100;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_EIPStart
	  section.data(24).logicalSrcIdx = 101;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_EIPEnter
	  section.data(25).logicalSrcIdx = 102;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_EIStart
	  section.data(26).logicalSrcIdx = 103;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_EIEnter
	  section.data(27).logicalSrcIdx = 104;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POPStart
	  section.data(28).logicalSrcIdx = 105;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POPEnter
	  section.data(29).logicalSrcIdx = 106;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POStart
	  section.data(30).logicalSrcIdx = 107;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POEnter
	  section.data(31).logicalSrcIdx = 108;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_POReset
	  section.data(32).logicalSrcIdx = 109;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_OOReset
	  section.data(33).logicalSrcIdx = 110;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOFinal
	  section.data(34).logicalSrcIdx = 111;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_heli3d_semestral_project_P.HILInitialize_DOInitial
	  section.data(35).logicalSrcIdx = 112;
	  section.data(35).dtTransOffset = 34;
	
	  ;% q_heli3d_semestral_project_P.HILReadEncoderTimebase_Active
	  section.data(36).logicalSrcIdx = 113;
	  section.data(36).dtTransOffset = 35;
	
	  ;% q_heli3d_semestral_project_P.HILWriteAnalog_Active
	  section.data(37).logicalSrcIdx = 114;
	  section.data(37).dtTransOffset = 36;
	
	  ;% q_heli3d_semestral_project_P.HILWriteDigital_Active
	  section.data(38).logicalSrcIdx = 115;
	  section.data(38).dtTransOffset = 37;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_heli3d_semestral_project_B)
    ;%
      section.nData     = 25;
      section.data(25)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_B.Add6
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_B.Sum1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_heli3d_semestral_project_B.Add7
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_heli3d_semestral_project_B.Sum2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_B.DACBLimitV
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_heli3d_semestral_project_B.AmplifierGain
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% q_heli3d_semestral_project_B.TmpSignalConversionAtToWorkspac
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% q_heli3d_semestral_project_B.EncoderResolutionElevationradco
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 10;
	
	  ;% q_heli3d_semestral_project_B.EncoderResolutionPitchradcount
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 11;
	
	  ;% q_heli3d_semestral_project_B.EncoderResolutionTravelradcount
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 12;
	
	  ;% q_heli3d_semestral_project_B.Sum
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 13;
	
	  ;% q_heli3d_semestral_project_B.Integrator3
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 14;
	
	  ;% q_heli3d_semestral_project_B.Sum1_e
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 15;
	
	  ;% q_heli3d_semestral_project_B.Integrator5
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 16;
	
	  ;% q_heli3d_semestral_project_B.Integrator1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% q_heli3d_semestral_project_B.Add
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 18;
	
	  ;% q_heli3d_semestral_project_B.Add1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 19;
	
	  ;% q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_o
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 20;
	
	  ;% q_heli3d_semestral_project_B.TmpSignalConversionAtToWorksp_m
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% q_heli3d_semestral_project_B.Integrator
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 25;
	
	  ;% q_heli3d_semestral_project_B.Add_g
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 26;
	
	  ;% q_heli3d_semestral_project_B.Integrator2
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 27;
	
	  ;% q_heli3d_semestral_project_B.Add1_f
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 28;
	
	  ;% q_heli3d_semestral_project_B.Integrator4
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 29;
	
	  ;% q_heli3d_semestral_project_B.Add2
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 30;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_B.sf_MATLABFunction1.v
	  section.data(1).logicalSrcIdx = 25;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_B.sf_MATLABFunction.v
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_heli3d_semestral_project_DW)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_DW.HILInitialize_AIMinimums
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_AIMaximums
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 8;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_AOMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 16;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_AOMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 24;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_AOVoltages
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 32;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_FilterFrequency
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 40;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_POSortedFreqs
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 48;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_POValues
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 56;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Task
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_DW.HILWriteAnalog_PWORK
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_DW.Scope_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_heli3d_semestral_project_DW.ToWorkspace_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_heli3d_semestral_project_DW.HILWriteDigital_PWORK
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_DW.elevation_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_heli3d_semestral_project_DW.pitch_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_heli3d_semestral_project_DW.travel_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_heli3d_semestral_project_DW.v1v2_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 17;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_heli3d_semestral_project_DW.ToWorkspace_PWORK_n.LoggedData
	  section.data(9).logicalSrcIdx = 18;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_heli3d_semestral_project_DW.ToWorkspace4_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 19;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_heli3d_semestral_project_DW.Scope_PWORK_o.LoggedData
	  section.data(11).logicalSrcIdx = 20;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_heli3d_semestral_project_DW.Scope1_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 21;
	  section.data(12).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 3;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 11;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_POModeValues
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 19;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_POAlignValues
	  section.data(5).logicalSrcIdx = 26;
	  section.data(5).dtTransOffset = 27;
	
	  ;% q_heli3d_semestral_project_DW.HILInitialize_POPolarityVals
	  section.data(6).logicalSrcIdx = 27;
	  section.data(6).dtTransOffset = 35;
	
	  ;% q_heli3d_semestral_project_DW.HILReadEncoderTimebase_Buffer
	  section.data(7).logicalSrcIdx = 28;
	  section.data(7).dtTransOffset = 43;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_DW.HILInitialize_POSortedChans
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_heli3d_semestral_project_DW.HILWriteDigital_Buffer
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1522554653;
  targMap.checksum1 = 445539586;
  targMap.checksum2 = 1487385108;
  targMap.checksum3 = 2751930921;

