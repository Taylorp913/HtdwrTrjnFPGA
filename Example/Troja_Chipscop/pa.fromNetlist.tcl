
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Troja_Chipscop -dir "C:/Users/Taylor/Documents/GitHub/HtdwrTrjnFPGA/Example/Troja_Chipscop/planAhead_run_5" -part xc3s1200efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Taylor/Documents/GitHub/HtdwrTrjnFPGA/Example/Troja_Chipscop/TrojanTopImplement_cs.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Taylor/Documents/GitHub/HtdwrTrjnFPGA/Example/Troja_Chipscop} }
set_property target_constrs_file "TrojanTopImplement.ucf" [current_fileset -constrset]
add_files [list {TrojanTopImplement.ucf}] -fileset [get_property constrset [current_run]]
link_design
