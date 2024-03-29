# THIS FILE IS AUTOMATICALLY GENERATED
# Project: \\vmware-host\Shared Folders\scottcarlson On My Mac\Code\repos\LED_controller\Design01.cydsn\Design01.cyprj
# Date: Fri, 30 Oct 2015 18:20:16 GMT
#set_units -time ns
create_clock -name {ADC_DelSig_1_Ext_CP_Clk(routed)} -period 15.974440894568689 -waveform {0 7.98722044728434} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyXTAL} -period 100 -waveform {0 50} [list [get_pins {ClockBlock/xtal}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyPLL_OUT} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyIMO} -period 15.974440894568689 -waveform {0 7.98722044728434} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyMASTER_CLK} -period 15.974440894568689 -waveform {0 7.98722044728434} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {ADC_DelSig_1_Ext_CP_Clk} -period 15.974440894568689 -waveform {0 7.98722044728434} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {ADC_DelSig_1_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 327 653} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_clock -name {ADC_DelSig_1_theACLK(fixed-function)} -period 5207.6677316293926 -waveform {0 2603.8338658147} [get_pins {ClockBlock/aclk_glb_ff_0}]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for \\vmware-host\Shared Folders\scottcarlson On My Mac\Code\repos\LED_controller\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: \\vmware-host\Shared Folders\scottcarlson On My Mac\Code\repos\LED_controller\Design01.cydsn\Design01.cyprj
# Date: Fri, 30 Oct 2015 18:20:08 GMT
