
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Troja_Chipscop -dir "C:/Users/admin/Documents/Verilog/Final/Troja_Chipscop/planAhead_run_4" -part xc3s1200efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/admin/Documents/Verilog/Final/Troja_Chipscop/TrojanTopImplement_cs.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/admin/Documents/Verilog/Final/Troja_Chipscop} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "TrojanTopImplement.ucf" [current_fileset -constrset]
add_files [list {TrojanTopImplement.ucf}] -fileset [get_property constrset [current_run]]
link_design
