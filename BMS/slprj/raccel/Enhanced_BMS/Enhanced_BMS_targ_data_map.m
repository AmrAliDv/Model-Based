    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
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
        ;% Auto data (rtP)
        ;%
            section.nData     = 103;
            section.data(103)  = dumData; %prealloc

                    ;% rtP.CC
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Cell_Max_Voltage
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.I_disch
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.DiscretePIDController_I
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.DiscretePIDController_InitialConditionForIntegrator
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.DiscretePIDController_Kt
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.DiscretePIDController_LowerSaturationLimit
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.DiscretePIDController_P
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.DiscretePIDController_UpperSaturationLimit
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.MeasurementNoise_seed
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.MeasurementNoise_seed_bzjvksvjcu
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.MeasurementNoise_seed_paj2igjfps
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.UnitDelay2_InitialCondition
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.UnitDelay_InitialCondition_dsqmqwsouv
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.UnitDelay1_InitialCondition_b4qmpi3m02
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.UnitDelay2_InitialCondition_lzqzzzqyck
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Integrator_gainval
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Memory1_InitialCondition
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Memory1_InitialCondition_mtmvynyd4g
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Memory1_InitialCondition_fbpxruqfum
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Memory_InitialCondition
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Gain1_Gain
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 26;

                    ;% rtP.UnitDelay1_InitialCondition_leo0ri5tvd
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 27;

                    ;% rtP.Memory2_InitialCondition
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 28;

                    ;% rtP.UnitDelay3_InitialCondition
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 29;

                    ;% rtP.UnitDelay_InitialCondition_lg5f2ow0lx
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 30;

                    ;% rtP.UnitDelay2_InitialCondition_giqowpzzvx
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 31;

                    ;% rtP.WhiteNoise_Mean
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 32;

                    ;% rtP.WhiteNoise_StdDev
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 33;

                    ;% rtP.Output_Gain
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 34;

                    ;% rtP.Memory_InitialCondition_pgjcoz42wr
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 35;

                    ;% rtP.Gain1_Gain_gt5xi45qct
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 39;

                    ;% rtP.UnitDelay1_InitialCondition_ij2qzjxqjn
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 40;

                    ;% rtP.Memory2_InitialCondition_cdoo2qwebt
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 41;

                    ;% rtP.UnitDelay3_InitialCondition_hj4lds0xht
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 42;

                    ;% rtP.UnitDelay_InitialCondition_fjgvwcbzyu
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 43;

                    ;% rtP.UnitDelay2_InitialCondition_jfipg1neps
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 44;

                    ;% rtP.WhiteNoise_Mean_ermg12yrvu
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 45;

                    ;% rtP.WhiteNoise_StdDev_p5fslwkmty
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 46;

                    ;% rtP.Output_Gain_preff52dwy
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 47;

                    ;% rtP.Memory_InitialCondition_b3vjnsfglc
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 48;

                    ;% rtP.Gain1_Gain_poh3ue1azl
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 52;

                    ;% rtP.UnitDelay1_InitialCondition_hsxkj1u2bf
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 53;

                    ;% rtP.Memory2_InitialCondition_llf3ajnusn
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 54;

                    ;% rtP.UnitDelay3_InitialCondition_kjq4iuaqru
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 55;

                    ;% rtP.UnitDelay_InitialCondition_klojgml5si
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 56;

                    ;% rtP.UnitDelay2_InitialCondition_dvcfpmrgc0
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 57;

                    ;% rtP.WhiteNoise_Mean_btucgz1jww
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 58;

                    ;% rtP.WhiteNoise_StdDev_mtoahzi3uk
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 59;

                    ;% rtP.Output_Gain_o2cuudz1gi
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 60;

                    ;% rtP.uDLookupTable_tableData
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 61;

                    ;% rtP.uDLookupTable_bp01Data
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 94;

                    ;% rtP.uDLookupTable_bp02Data
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 105;

                    ;% rtP.uDLookupTable1_tableData
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 108;

                    ;% rtP.uDLookupTable1_bp01Data
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 141;

                    ;% rtP.uDLookupTable1_bp02Data
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 152;

                    ;% rtP.uDLookupTable2_tableData
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 155;

                    ;% rtP.uDLookupTable2_bp01Data
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 188;

                    ;% rtP.uDLookupTable2_bp02Data
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 199;

                    ;% rtP.uDLookupTable3_tableData
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 202;

                    ;% rtP.uDLookupTable3_bp01Data
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 235;

                    ;% rtP.uDLookupTable3_bp02Data
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 246;

                    ;% rtP.uDLookupTable_tableData_hlscvvnmks
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 249;

                    ;% rtP.uDLookupTable_bp01Data_d4l0c2eu3n
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 282;

                    ;% rtP.uDLookupTable_bp02Data_igfn1ibqrq
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 293;

                    ;% rtP.uDLookupTable1_tableData_dqqhph5tbo
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 296;

                    ;% rtP.uDLookupTable1_bp01Data_bfg1eu1pvh
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 329;

                    ;% rtP.uDLookupTable1_bp02Data_ivgbqofzba
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 340;

                    ;% rtP.uDLookupTable2_tableData_goz3bffxdu
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 343;

                    ;% rtP.uDLookupTable2_bp01Data_mgwpsuhbfn
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 376;

                    ;% rtP.uDLookupTable2_bp02Data_f1mokd5wam
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 387;

                    ;% rtP.uDLookupTable3_tableData_n3uw0evcp1
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 390;

                    ;% rtP.uDLookupTable3_bp01Data_kthx3xwrzw
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 423;

                    ;% rtP.uDLookupTable3_bp02Data_jcwedtfnyc
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 434;

                    ;% rtP.uDLookupTable_tableData_muyju3ve0k
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 437;

                    ;% rtP.uDLookupTable_bp01Data_pk0rkkovdp
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 470;

                    ;% rtP.uDLookupTable_bp02Data_pyb5ql5bu5
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 481;

                    ;% rtP.uDLookupTable1_tableData_ketzs12npr
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 484;

                    ;% rtP.uDLookupTable1_bp01Data_hrrvxrmyu2
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 517;

                    ;% rtP.uDLookupTable1_bp02Data_bwkd20jcnc
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 528;

                    ;% rtP.uDLookupTable2_tableData_mqugaautgc
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 531;

                    ;% rtP.uDLookupTable2_bp01Data_ftwoipy4qs
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 564;

                    ;% rtP.uDLookupTable2_bp02Data_ozjcf22dfp
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 575;

                    ;% rtP.uDLookupTable3_tableData_c1gnbm2fbb
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 578;

                    ;% rtP.uDLookupTable3_bp01Data_lx5pbcakwh
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 611;

                    ;% rtP.uDLookupTable3_bp02Data_f1mxjjevep
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 622;

                    ;% rtP.Noise1_Value
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 625;

                    ;% rtP.Noise1_Value_dxnz00mjf5
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 627;

                    ;% rtP.Noise1_Value_dcsmwymza4
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 629;

                    ;% rtP.Constant_Value
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 631;

                    ;% rtP.Gain_Gain
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 632;

                    ;% rtP.Constant_Value_ay5zwh5vun
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 633;

                    ;% rtP.Gain_Gain_bfommv4lak
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 634;

                    ;% rtP.Constant_Value_jz2p0lxylj
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 635;

                    ;% rtP.Gain_Gain_ofumgodytf
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 636;

                    ;% rtP.RTP_00F46B65_cell_temperature_Value
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 637;

                    ;% rtP.RTP_00F46B65_stateOfCharge_Value
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 638;

                    ;% rtP.RTP_77F35BF3_cell_temperature_Value
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 639;

                    ;% rtP.RTP_77F35BF3_stateOfCharge_Value
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 640;

                    ;% rtP.RTP_78EAB9F6_cell_temperature_Value
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 641;

                    ;% rtP.RTP_78EAB9F6_stateOfCharge_Value
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 642;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtP.uDLookupTable_maxIndex
                    section.data(1).logicalSrcIdx = 103;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.uDLookupTable1_maxIndex
                    section.data(2).logicalSrcIdx = 104;
                    section.data(2).dtTransOffset = 2;

                    ;% rtP.uDLookupTable2_maxIndex
                    section.data(3).logicalSrcIdx = 105;
                    section.data(3).dtTransOffset = 4;

                    ;% rtP.uDLookupTable3_maxIndex
                    section.data(4).logicalSrcIdx = 106;
                    section.data(4).dtTransOffset = 6;

                    ;% rtP.uDLookupTable_maxIndex_nlac5mwhde
                    section.data(5).logicalSrcIdx = 107;
                    section.data(5).dtTransOffset = 8;

                    ;% rtP.uDLookupTable1_maxIndex_loobiu0ryk
                    section.data(6).logicalSrcIdx = 108;
                    section.data(6).dtTransOffset = 10;

                    ;% rtP.uDLookupTable2_maxIndex_nbhkjutjjk
                    section.data(7).logicalSrcIdx = 109;
                    section.data(7).dtTransOffset = 12;

                    ;% rtP.uDLookupTable3_maxIndex_jzphk4ofch
                    section.data(8).logicalSrcIdx = 110;
                    section.data(8).dtTransOffset = 14;

                    ;% rtP.uDLookupTable_maxIndex_ipa35g4pl0
                    section.data(9).logicalSrcIdx = 111;
                    section.data(9).dtTransOffset = 16;

                    ;% rtP.uDLookupTable1_maxIndex_jkfrxrkyya
                    section.data(10).logicalSrcIdx = 112;
                    section.data(10).dtTransOffset = 18;

                    ;% rtP.uDLookupTable2_maxIndex_a51myydzdo
                    section.data(11).logicalSrcIdx = 113;
                    section.data(11).dtTransOffset = 20;

                    ;% rtP.uDLookupTable3_maxIndex_ovcsjvmwm5
                    section.data(12).logicalSrcIdx = 114;
                    section.data(12).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
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
        nTotSects     = 2;
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
        ;% Auto data (rtB)
        ;%
            section.nData     = 58;
            section.data(58)  = dumData; %prealloc

                    ;% rtB.drskglgsan
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.npmfe0f0qo
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.e2wraft2ng
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ianuzwuuzi
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.nejmax202r
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtB.kqdsxgdce3
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 11;

                    ;% rtB.fvwqlwkcjj
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 15;

                    ;% rtB.pmvqkgardu
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 19;

                    ;% rtB.astrqosyep
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 23;

                    ;% rtB.jmjhdalsff
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 27;

                    ;% rtB.kpzbmh0lai
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 28;

                    ;% rtB.gayzlcwngn
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 29;

                    ;% rtB.ogpcqmf3h5
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 30;

                    ;% rtB.cc5d4yqgrh
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 31;

                    ;% rtB.hvd3jbccmz
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 32;

                    ;% rtB.c5ugal2ihq
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 33;

                    ;% rtB.fkbuizmwag
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 37;

                    ;% rtB.cmp2isfx12
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 38;

                    ;% rtB.njirpk2h0g
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 134;

                    ;% rtB.ii5sqkoni1
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 147;

                    ;% rtB.aurf0yuixe
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 148;

                    ;% rtB.bd21p4dssk
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 149;

                    ;% rtB.cbid5mayod
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 150;

                    ;% rtB.ejirnozlpr
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 151;

                    ;% rtB.he1tpnoytf
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 152;

                    ;% rtB.o4w5dvpcom
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 153;

                    ;% rtB.jgxxaq3f3y
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 154;

                    ;% rtB.fsut2120nl
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 157;

                    ;% rtB.iewfeqykba
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 158;

                    ;% rtB.i3oa0kjo3n
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 159;

                    ;% rtB.ojyf5vvsjz
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 160;

                    ;% rtB.ehadpfh5m0
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 161;

                    ;% rtB.aex4ukke0v
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 162;

                    ;% rtB.lf544j4evk
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 163;

                    ;% rtB.clm2z3u0kf
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 164;

                    ;% rtB.hyds5cqb3c
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 165;

                    ;% rtB.p5id2fvixd
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 166;

                    ;% rtB.dx143zacdx
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 167;

                    ;% rtB.mzw3hm10ix
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 168;

                    ;% rtB.g2p05i01qe
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 169;

                    ;% rtB.jmu41cjmsi
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 170;

                    ;% rtB.iyyq1v520t
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 171;

                    ;% rtB.o1lapiknns
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 172;

                    ;% rtB.ppz4jciujz
                    section.data(44).logicalSrcIdx = 52;
                    section.data(44).dtTransOffset = 173;

                    ;% rtB.kglz5kc2at
                    section.data(45).logicalSrcIdx = 53;
                    section.data(45).dtTransOffset = 177;

                    ;% rtB.jsegs02ydk
                    section.data(46).logicalSrcIdx = 54;
                    section.data(46).dtTransOffset = 178;

                    ;% rtB.nk0pyr02g1
                    section.data(47).logicalSrcIdx = 55;
                    section.data(47).dtTransOffset = 179;

                    ;% rtB.iogf30vzmj
                    section.data(48).logicalSrcIdx = 56;
                    section.data(48).dtTransOffset = 183;

                    ;% rtB.en40yfhmae
                    section.data(49).logicalSrcIdx = 57;
                    section.data(49).dtTransOffset = 184;

                    ;% rtB.jeirpnbx5x
                    section.data(50).logicalSrcIdx = 58;
                    section.data(50).dtTransOffset = 185;

                    ;% rtB.fcejgnms2p
                    section.data(51).logicalSrcIdx = 59;
                    section.data(51).dtTransOffset = 189;

                    ;% rtB.k50sc0nhbf
                    section.data(52).logicalSrcIdx = 60;
                    section.data(52).dtTransOffset = 190;

                    ;% rtB.ooycaplx1k
                    section.data(53).logicalSrcIdx = 61;
                    section.data(53).dtTransOffset = 191;

                    ;% rtB.cu4w31sksr
                    section.data(54).logicalSrcIdx = 62;
                    section.data(54).dtTransOffset = 192;

                    ;% rtB.f2njjfiimh
                    section.data(55).logicalSrcIdx = 63;
                    section.data(55).dtTransOffset = 193;

                    ;% rtB.beqgjbeb4n
                    section.data(56).logicalSrcIdx = 64;
                    section.data(56).dtTransOffset = 194;

                    ;% rtB.fpjwalqauw
                    section.data(57).logicalSrcIdx = 65;
                    section.data(57).dtTransOffset = 195;

                    ;% rtB.bzbuyck32c
                    section.data(58).logicalSrcIdx = 66;
                    section.data(58).dtTransOffset = 196;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.coxqunjq31
                    section.data(1).logicalSrcIdx = 67;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
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
        sectIdxOffset = 2;

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
        ;% Auto data (rtDW)
        ;%
            section.nData     = 46;
            section.data(46)  = dumData; %prealloc

                    ;% rtDW.o4hron4umr
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jxt12q4h4a
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.hzivxtj4v0
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dzce5s4u5n
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.pq5xyicbd0
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% rtDW.fzlu0vneeb
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 7;

                    ;% rtDW.afo130a2ai
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtDW.pn3wcnuo5t
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% rtDW.k0mu5wnpfu
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 13;

                    ;% rtDW.bvugbmrj4h
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 15;

                    ;% rtDW.eqmj2sg4qm
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 16;

                    ;% rtDW.psyjrz43fg
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 17;

                    ;% rtDW.dis0i10foe
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 18;

                    ;% rtDW.l0z0oxic4r
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 19;

                    ;% rtDW.cip2zdf2me
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 21;

                    ;% rtDW.c0jez5cx3s
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 75;

                    ;% rtDW.hmipvslkr1
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 76;

                    ;% rtDW.emkghimbji
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 77;

                    ;% rtDW.ixyulwyx33
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 78;

                    ;% rtDW.dzqlam0y5k
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 79;

                    ;% rtDW.av2ad1yfyh
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 80;

                    ;% rtDW.ctezuw3uwy
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 81;

                    ;% rtDW.paljmtthlt
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 82;

                    ;% rtDW.if1kq5x22c
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 83;

                    ;% rtDW.gex5mkzr5u
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 84;

                    ;% rtDW.cgrc25ymx5
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 85;

                    ;% rtDW.czx0bj5ltr
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 86;

                    ;% rtDW.o1kzdph1xm
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 87;

                    ;% rtDW.pa10wnnpub
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 88;

                    ;% rtDW.bzuasx0iwa
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 89;

                    ;% rtDW.n3m1icn3qb
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 90;

                    ;% rtDW.g3fidn3w2t
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 91;

                    ;% rtDW.drktkoupe5
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 92;

                    ;% rtDW.mmdrnhie50
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 93;

                    ;% rtDW.pp5p4tbowj
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 97;

                    ;% rtDW.cecadqcuem
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 98;

                    ;% rtDW.p4nbtb34ur
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 99;

                    ;% rtDW.pvji3kkf3u
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 100;

                    ;% rtDW.anelm3x4iv
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 101;

                    ;% rtDW.ea21lklf25
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 105;

                    ;% rtDW.h3kr20z2el
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 106;

                    ;% rtDW.ntrl1fa42b
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 107;

                    ;% rtDW.g5uh3k3gck
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 111;

                    ;% rtDW.cufwhfilog
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 112;

                    ;% rtDW.csjulonnym
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 113;

                    ;% rtDW.bs44prev55
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 114;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 25;
            section.data(25)  = dumData; %prealloc

                    ;% rtDW.d4vkr2glbb
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cg3qopfbl1
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kxtcxp30gh
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.lbsdrhids0
                    section.data(4).logicalSrcIdx = 49;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.iicmryz0k4
                    section.data(5).logicalSrcIdx = 50;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.eoyo01ev53
                    section.data(6).logicalSrcIdx = 51;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.d5jesyet42
                    section.data(7).logicalSrcIdx = 52;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.ikyqkmvn3c
                    section.data(8).logicalSrcIdx = 53;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.lqqrot5334
                    section.data(9).logicalSrcIdx = 54;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.dp01o3ekql
                    section.data(10).logicalSrcIdx = 55;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ksuuyhpxu4
                    section.data(11).logicalSrcIdx = 56;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ik30zux4ok.LoggedData
                    section.data(12).logicalSrcIdx = 57;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.j2rsxbx1x0.LoggedData
                    section.data(13).logicalSrcIdx = 58;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.hkhyybzwxu.LoggedData
                    section.data(14).logicalSrcIdx = 59;
                    section.data(14).dtTransOffset = 14;

                    ;% rtDW.miajsexpnc.LoggedData
                    section.data(15).logicalSrcIdx = 60;
                    section.data(15).dtTransOffset = 15;

                    ;% rtDW.gf3bskbvsm.LoggedData
                    section.data(16).logicalSrcIdx = 61;
                    section.data(16).dtTransOffset = 16;

                    ;% rtDW.bln20dqig5.LoggedData
                    section.data(17).logicalSrcIdx = 62;
                    section.data(17).dtTransOffset = 17;

                    ;% rtDW.f015bmui2j
                    section.data(18).logicalSrcIdx = 63;
                    section.data(18).dtTransOffset = 18;

                    ;% rtDW.hw5hoy3g0v
                    section.data(19).logicalSrcIdx = 64;
                    section.data(19).dtTransOffset = 19;

                    ;% rtDW.gdnrurmlfy
                    section.data(20).logicalSrcIdx = 65;
                    section.data(20).dtTransOffset = 20;

                    ;% rtDW.dqhbqmk54w
                    section.data(21).logicalSrcIdx = 66;
                    section.data(21).dtTransOffset = 21;

                    ;% rtDW.icmv4lkg01
                    section.data(22).logicalSrcIdx = 67;
                    section.data(22).dtTransOffset = 22;

                    ;% rtDW.n3iiljrftq.LoggedData
                    section.data(23).logicalSrcIdx = 68;
                    section.data(23).dtTransOffset = 23;

                    ;% rtDW.apljpth2bj.LoggedData
                    section.data(24).logicalSrcIdx = 69;
                    section.data(24).dtTransOffset = 25;

                    ;% rtDW.jbkm5yfqhs.LoggedData
                    section.data(25).logicalSrcIdx = 70;
                    section.data(25).dtTransOffset = 27;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.c54tg2rdm5
                    section.data(1).logicalSrcIdx = 71;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pyo1jzv333
                    section.data(2).logicalSrcIdx = 72;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ka0wher03d
                    section.data(3).logicalSrcIdx = 73;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.myycljfyci
                    section.data(4).logicalSrcIdx = 74;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.al53uz2xdy
                    section.data(5).logicalSrcIdx = 75;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.if1j1sqa5y
                    section.data(6).logicalSrcIdx = 76;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.exf42eu50q
                    section.data(7).logicalSrcIdx = 77;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.mwjgfe4d1f
                    section.data(8).logicalSrcIdx = 78;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtDW.hlwgqfrk4r
                    section.data(1).logicalSrcIdx = 79;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oybrantlp0
                    section.data(2).logicalSrcIdx = 80;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.cynedq33ig
                    section.data(3).logicalSrcIdx = 81;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.h2swncc3e3
                    section.data(4).logicalSrcIdx = 82;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jk35ychlbp
                    section.data(5).logicalSrcIdx = 83;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.krfhocoehg
                    section.data(6).logicalSrcIdx = 84;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.mbshdldyye
                    section.data(7).logicalSrcIdx = 85;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.b01i0unp5j
                    section.data(1).logicalSrcIdx = 86;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.po3zfdjx02
                    section.data(2).logicalSrcIdx = 87;
                    section.data(2).dtTransOffset = 42;

                    ;% rtDW.hro2jwrxcl
                    section.data(3).logicalSrcIdx = 88;
                    section.data(3).dtTransOffset = 43;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.ntgo2euvfr
                    section.data(1).logicalSrcIdx = 89;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hbme0a2scy
                    section.data(2).logicalSrcIdx = 90;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.l125ggroev
                    section.data(3).logicalSrcIdx = 91;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.asokzvawwl
                    section.data(4).logicalSrcIdx = 92;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ojtakyu10f
                    section.data(5).logicalSrcIdx = 93;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ccnl1lobyb
                    section.data(6).logicalSrcIdx = 94;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.cqxvkxfbpc
                    section.data(7).logicalSrcIdx = 95;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.bzxxyscndm
                    section.data(8).logicalSrcIdx = 96;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtDW.h02ooleufk
                    section.data(1).logicalSrcIdx = 97;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.krx5f4tcui
                    section.data(2).logicalSrcIdx = 98;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.cw4lzbggmq
                    section.data(3).logicalSrcIdx = 99;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.psph4ct4qs
                    section.data(4).logicalSrcIdx = 100;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.cqvwemi3wr
                    section.data(5).logicalSrcIdx = 101;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.jov1gos3aq
                    section.data(6).logicalSrcIdx = 102;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.eilndcq32p
                    section.data(7).logicalSrcIdx = 103;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.elmn21ejed
                    section.data(8).logicalSrcIdx = 104;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.b3vtehlze5
                    section.data(9).logicalSrcIdx = 105;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.byhjcffsht
                    section.data(10).logicalSrcIdx = 106;
                    section.data(10).dtTransOffset = 9;

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


    targMap.checksum0 = 3454706739;
    targMap.checksum1 = 4059958679;
    targMap.checksum2 = 454448695;
    targMap.checksum3 = 2222288127;

