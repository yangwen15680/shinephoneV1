//
//  Header.h
//  ShinePhone
//
//  Created by LinKai on 15/5/18.
//  Copyright (c) 2015年 binghe168. All rights reserved.
//

#ifndef ShinePhone_Header_h
#define ShinePhone_Header_h

#define IMAGE(_NAME) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForAuxiliaryExecutable:_NAME]]
#define COLOR(_R,_G,_B,_A) [UIColor colorWithRed:_R / 255.0f green:_G / 255.0f blue:_B / 255.0f alpha:_A]
#define NOW_SIZE [UIScreen mainScreen].bounds.size.width/320
#define SCREEN_Width [UIScreen mainScreen].bounds.size.width
#define SCREEN_Height [UIScreen mainScreen].bounds.size.height
#define kiPhone6 ([UIScreen mainScreen].bounds.size.width==375)
#define frameMake(a,b,c,d) CGRectMake(a*NOW_SIZE,b*NOW_SIZE,c*NOW_SIZE,d*NOW_SIZE)

#define HEAD_URL                [UserInfo defaultUserInfo].server


#import "BaseRequest.h"
#import <MBProgressHUD/MBProgressHUD.h>
#import <SDWebImage/SDWebImageManager.h>
#import <SDWebImage/UIImageView+WebCache.h>
#import <NSData+Base64/NSData+Base64.h>
#import "UserInfo.h"



//Notification
#define NOTIFICATION_ADD_STATION_SUCCESSFUL            @"ADDSTATIONSUCCESSFUL"
#define KNOTIFICATION_LOGINCHANGE                      @"loginStateChange"



//关于
#define ABOUT_LOGO_TITLE        @"Shine Phone"
#define ABOUT_INFO              @"Copyright©2015 Shine Phone All rights reserved"
#define ABOUT_VERSIONINFO       NSLocalizedString(@"Version", @"Version")
#define ABOUT_VERSIONINFO_EX    NSLocalizedString(@"Version", @"Version")
//公司信息
#define COMPANY_NAME_INFO       NSLocalizedString(@"GROWATT NEW ENERGY TECHNOLOGY CO.,LTD", @"GROWATT NEW ENERGY TECHNOLOGY CO.,LTD")
#define COMPANY_ADRESS_INFO     NSLocalizedString(@"Building B, Jiayu Industrial Zone, #28 Guanghui Road, Longteng Community, Shiyan, Baoan District, Shenzhen, P.R. China", @"Building B, Jiayu Industrial Zone, #28 Guanghui Road, Longteng Community, Shiyan, Baoan District, Shenzhen, P.R. China")
#define COMPANY_PHONE_NUMBER    @"86-755-29515888"
#define COMPANY_EMAIL_ADDRESS   @"info@ginverter.com"
#define COMPANY_URL             @"www.growatt.com"
#define COMPANY_URL_EX          @"info@ginverter.com"
//产品信息
#define COMPANY_PRODUCT_NAME    @"shine phone"
#define COMPANY_CURRENT_VERSION @"3.0"
#define COMPANY_PUBLISH_COMPANY NSLocalizedString(@"GROWATT NEW ENERGY TECHNOLOGY CO.,LTD", @"GROWATT NEW ENERGY TECHNOLOGY CO.,LTD")
#define COMPANY_COPYRIGHT       @"Copyright @ 2013-2014"


#define root_English       NSLocalizedString(@"English", @"English")

//登录页面
#define root_Auto_Login       NSLocalizedString(@"Auto Login", @"Auto Login")
#define root_Remember       NSLocalizedString(@"Remember", @"Remember")
#define root_Sign_In       NSLocalizedString(@"Sign In", @"Sign In")
#define root_New_User       NSLocalizedString(@"New User", @"New User")
#define root_About       NSLocalizedString(@"About", @"About")
#define root_Example_Plants       NSLocalizedString(@"Example Plants", @"Example Plants")
#define root_username_password_error       NSLocalizedString(@"username password error", @"username password error")
#define root_Company_Information       NSLocalizedString(@"Company Information", @"Company Information")

//关于页面
#define root_Name       NSLocalizedString(@"Name", @"Name")
#define root_Address       NSLocalizedString(@"Address", @"Address")
#define root_Tel_Phone       NSLocalizedString(@"Tel Phone", @"Tel Phone")
#define root_E_Mail       NSLocalizedString(@"E-Mail", @"E-Mail")
#define root_Site       NSLocalizedString(@"Site", @"Site")
#define root_Product_Information       NSLocalizedString(@"Product Information", @"Product Information")
#define root_Product_Name       NSLocalizedString(@"Product Name", @"Product Name")
#define root_Current_Version       NSLocalizedString(@"Current Version", @"Current Version")
#define root_Manufacturer       NSLocalizedString(@"Manufacturer", @"Manufacturer")
#define root_Copyright_Notice       NSLocalizedString(@"Copyright Notice", @"Copyright Notice")
#define root_Version       NSLocalizedString(@"Version", @"Version")
#define root_Update_Log       NSLocalizedString(@"Update Log", @"Update Log")
#define root_Server_address_changes       NSLocalizedString(@"Server address changes", @"Server address changes")
#define root_Please_enter_the_server_address       NSLocalizedString(@"Please enter the server address", @"Please enter the server address")

//注册页面
#define root_Register       NSLocalizedString(@"Register", @"Register")
#define root_username       NSLocalizedString(@"username", @"username")
#define root_password       NSLocalizedString(@"password", @"password")
#define root_e_mail       NSLocalizedString(@"e-mail", @"e-mail")
#define root_telphone       NSLocalizedString(@"telphone", @"telphone")
#define root_company_name       NSLocalizedString(@"company name", @"company name")
#define root_datalog_sn       NSLocalizedString(@"datalog sn", @"datalog sn")
#define root_datalog_valicode       NSLocalizedString(@"datalog valicode", @"datalog valicode")
#define root_timezone       NSLocalizedString(@"timezone", @"timezone")
#define root_language       NSLocalizedString(@"language", @"language")
#define root_Enter_code       NSLocalizedString(@"Enter code", @"Enter code")
#define root_Enter_your_username       NSLocalizedString(@"Enter your username", @"Enter your username")
#define root_Enter_your_pwd       NSLocalizedString(@"Enter your pwd", @"Enter your pwd")
#define root_Enter_email       NSLocalizedString(@"Enter email", @"Enter email")
#define root_Enter_phone_number       NSLocalizedString(@"Enter phone number", @"Enter phone number")
#define root_Enter_company_name       NSLocalizedString(@"Enter company name", @"Enter company name")
#define root_Enter_DatalogSN       NSLocalizedString(@"Enter DatalogSN", @"Enter DatalogSN")
#define root_Datalog_valicode       NSLocalizedString(@"Datalog valicode", @"Datalog valicode")
#define root_Select_a_timezone       NSLocalizedString(@"Select a timezone", @"Select a timezone")
#define root_Enter_the_language       NSLocalizedString(@"Enter the language", @"Enter the language")
#define root_Please_insert_username       NSLocalizedString(@"Please insert username", @"Please insert username")
#define root_Password_must_more_than_six_word       NSLocalizedString(@"Password must more than six word", @"Password must more than six word")
#define root_E_mail_format_error       NSLocalizedString(@"E-mail format error", @"E-mail format error")
#define root_The_phone_number_can_not_be_empty       NSLocalizedString(@"The phone number can not be empty", @"The phone number can not be empty")
#define root_Company_name_can_not_be_empty       NSLocalizedString(@"Company name can not be empty", @"Company name can not be empty")
#define root_Insert_true_datalog_sn       NSLocalizedString(@"Insert true datalog sn", @"Insert true datalog sn")
#define root_Insert_datalog_code       NSLocalizedString(@"Insert datalog code", @"Insert datalog code")
#define root_Select_a_timezone       NSLocalizedString(@"Select a timezone", @"Select a timezone")
#define root_Language_can_not_be_empty       NSLocalizedString(@"Language can not be empty", @"Language can not be empty")
#define root_Valicode_error       NSLocalizedString(@"Valicode error", @"Valicode error")
#define root_E_mail_format_error       NSLocalizedString(@"E-mail format error", @"E-mail format error")
#define root_Phone_number_format_is_incorrect       NSLocalizedString(@"Phone number format is incorrect", @"Phone number format is incorrect")
#define root_This_username_already_exist       NSLocalizedString(@"This username already exist", @"This username already exist")
#define root_Datalog_verification_code_is_incorrect       NSLocalizedString(@"Datalog verification code is incorrect", @"Datalog verification code is incorrect")
#define root_Registration_failed       NSLocalizedString(@"Registration failed", @"Registration failed")
#define root_Registration_success       NSLocalizedString(@"Registration success", @"Registration success")

//电站概览页面
#define root_Plant_Overview       NSLocalizedString(@"Plant Overview", @"Plant Overview")
#define root_Exit       NSLocalizedString(@"Exit", @"Exit")
#define root_Today_Energy       NSLocalizedString(@"Today Energy", @"Today Energy")
#define root_Total_Energy       NSLocalizedString(@"Total Energy", @"Total Energy")
#define root_Total_Eower       NSLocalizedString(@"Total Eower", @"Total Eower")
#define root_Grid_Power       NSLocalizedString(@"Grid Power", @"Grid Power")
#define root_Battery_Percentage       NSLocalizedString(@"Battery Percentage", @"Battery Percentage")

//电站列表
#define root_Plant_List       NSLocalizedString(@"Plant List", @"Plant List")
#define root_Today_Energy       NSLocalizedString(@"Today Energy", @"Today Energy")
#define root_Total_Energy       NSLocalizedString(@"Total Energy", @"Total Energy")
#define root_Current_Power       NSLocalizedString(@"Current Power", @"Current Power")
#define root_Gains       NSLocalizedString(@"Gains", @"Gains")
#define root_Percentage       NSLocalizedString(@"Percentage", @"Percentage")
#define root_Storage_Status       NSLocalizedString(@"Storage Status", @"Storage Status")
#define root_Charge_Power       NSLocalizedString(@"Charge Power", @"Charge Power")
#define root_Discharge_Power       NSLocalizedString(@"Discharge Power", @"Discharge Power")
#define root_Add_Plant       NSLocalizedString(@"Add Plant", @"Add Plant")
#define root_Remove_Station       NSLocalizedString(@"Remove Station", @"Remove Station")
#define root_Upload_Picture       NSLocalizedString(@"Upload Picture", @"Upload Picture")
#define root_Setting_Station_Map       NSLocalizedString(@"Setting Station Map", @"Setting Station Map")
#define root_Installation_Information       NSLocalizedString(@"Installation Information", @"Installation Information")
#define root_plant_name       NSLocalizedString(@"plant name", @"plant name")
#define root_instal_date       NSLocalizedString(@"instal date", @"instal date")
#define root_company       NSLocalizedString(@"company", @"company")
#define root_power       NSLocalizedString(@"power", @"power")
#define root_Next       NSLocalizedString(@"Next", @"Next")

//添加电站
#define root_Location_Information       NSLocalizedString(@"Location Information", @"Location Information")
#define root_country       NSLocalizedString(@"country", @"country")
#define root_city       NSLocalizedString(@"city", @"city")
#define root_time_zone       NSLocalizedString(@"time zone", @"time zone")
#define root_longitude       NSLocalizedString(@"longitude", @"longitude")
#define root_latitude       NSLocalizedString(@"latitude", @"latitude")
#define root_Capital_Income       NSLocalizedString(@"Capital Income", @"Capital Income")
#define root_capital_income       NSLocalizedString(@"capital income", @"capital income")
#define root_standard_coal_saved       NSLocalizedString(@"standard coal saved", @"standard coal saved")
#define root_CO2_reduced       NSLocalizedString(@"CO₂ reduced", @"CO₂ reduced")
#define root_SO2_reduced       NSLocalizedString(@"SO₂ reduced", @"SO₂ reduced")
#define root_plant_image       NSLocalizedString(@"plant image", @"plant image")
#define root_location_picture       NSLocalizedString(@"location picture", @"location picture")
#define root_Finish       NSLocalizedString(@"Finish", @"Finish")
#define root_Added_successfully       NSLocalizedString(@"Added successfully", @"Added successfully")
#define root_Add_failed       NSLocalizedString(@"Add failed", @"Add failed")
#define root_Successfully_deleted       NSLocalizedString(@"Successfully deleted", @"Successfully deleted")
#define root_Delete_failed       NSLocalizedString(@"Delete failed", @"Delete failed")
#define root_Successfully_modified       NSLocalizedString(@"Successfully modified", @"Successfully modified")
#define root_Modification_fails       NSLocalizedString(@"Modification fails", @"Modification fails")

//电站详情
#define root_Plant_Detail       NSLocalizedString(@"Plant Detail", @"Plant Detail")
#define root_DAY       NSLocalizedString(@"DAY", @"DAY")
#define root_MONTH       NSLocalizedString(@"MONTH", @"MONTH")
#define root_YEAR       NSLocalizedString(@"YEAR", @"YEAR")
#define root_TOTAL       NSLocalizedString(@"TOTAL", @"TOTAL")
#define root_Daily_Returns       NSLocalizedString(@"Daily Returns", @"Daily Returns")
#define root_Daily_Electricity       NSLocalizedString(@"Daily Electricity", @"Daily Electricity")
#define root_Earnings       NSLocalizedString(@"Earnings", @"Earnings")
#define root_Month_energy       NSLocalizedString(@"Month energy", @"Month energy")
#define root_Earnings       NSLocalizedString(@"Earnings", @"Earnings")
#define root_Year_energy       NSLocalizedString(@"Year energy", @"Year energy")
#define root_Earnings       NSLocalizedString(@"Earnings", @"Earnings")
#define root_Total_energy       NSLocalizedString(@"Total energy", @"Total energy")
#define root_Powre       NSLocalizedString(@"Powre", @"Power")
#define root_Plant_Overview       NSLocalizedString(@"Plant Overview", @"Plant Overview")
#define root_Device_List       NSLocalizedString(@"Device List", @"Device List")
#define root_Event_List       NSLocalizedString(@"Event List", @"Event List")
#define root_Map       NSLocalizedString(@"Map", @"Map")

//电站概述（参考添加电站）
#define root_Plant_image       NSLocalizedString(@"Plant image", @"Plant image")
#define root_Datalog       NSLocalizedString(@"Datalog", @"Datalog")

//数据采集器/编辑采集器
#define root_Add       NSLocalizedString(@"Add", @"Add")
#define root_aliases       NSLocalizedString(@"aliases", @"aliases")
#define root_datalog_sn       NSLocalizedString(@"datalog sn", @"datalog sn")
#define root_group       NSLocalizedString(@"group", @"group")
#define root_device_type       NSLocalizedString(@"device type", @"device type")
#define root_data_update_interval       NSLocalizedString(@"data update interval", @"data update interval")
#define root_Add       NSLocalizedString(@"Add", @"Add")
#define root_Modified       NSLocalizedString(@"Modified", @"Modified")
#define root_Delete       NSLocalizedString(@"Delete", @"Delete")
#define root_Set      NSLocalizedString(@"配置", @"配置")

#define root_Aliases_can_not_be_empty       NSLocalizedString(@"Aliases can not be empty", @"Aliases can not be empty")
#define root_Successfully_modified       NSLocalizedString(@"Successfully modified", @"Successfully modified")
#define root_Modification_fails       NSLocalizedString(@"Modification fails", @"Modification fails")
#define root_Successfully_deleted       NSLocalizedString(@"Successfully deleted", @"Successfully deleted")
#define root_Delete_failed       NSLocalizedString(@"Delete failed", @"Delete failed")

//添加数据采集器
#define root_Add       NSLocalizedString(@"Add", @"Add")
#define root_Enter_DatalogSN       NSLocalizedString(@"Enter DatalogSN", @"Enter DatalogSN")
#define root_Datalog_Valicode       NSLocalizedString(@"Datalog Valicode", @"Datalog Valicode")
#define root_Insert_true_datalog_sn       NSLocalizedString(@"Insert true datalog sn", @"Insert true datalog sn")
#define root_Datalog_verification_code_is_incorrect       NSLocalizedString(@"Datalog verification code is incorrect", @"Datalog verification code is incorrect")
#define root_Datalog_verification_code_is_incorrect       NSLocalizedString(@"Datalog verification code is incorrect", @"Datalog verification code is incorrect")
#define root_Added_Successfully       NSLocalizedString(@"Added Successfully", @"Added Successfully")
#define root_Add_Failed       NSLocalizedString(@"Add Failed", @"Add Failed")

//设备管理(电站设备)
#define root_Inverter       NSLocalizedString(@"Inverter", @"Inverter")
#define root_Storage       NSLocalizedString(@"Storage", @"Storage")
#define root_Other       NSLocalizedString(@"Other", @"Other")
#define root_Aliases       NSLocalizedString(@"Aliases", @"Aliases")
#define root_Address       NSLocalizedString(@"Address", @"Address")
#define root_Total_Energy       NSLocalizedString(@"Total Energy", @"Total Energy")
#define root_Update_Time       NSLocalizedString(@"Update Time", @"Update Time")
#define root_Datalog       NSLocalizedString(@"Datalog", @"Datalog")
#define root_Percentage       NSLocalizedString(@"Percentage", @"Percentage")
#define root_Active_Power       NSLocalizedString(@"Active Power", @"Active Power")
#define root_Radiant       NSLocalizedString(@"Radiant", @"Radiant")
#define root_loading       NSLocalizedString(@"loading...", @"loading...")

//详情（逆变器）
#define root_PV_POWER       NSLocalizedString(@"PV POWER", @"PV POWER")
#define root_PV1_VOLTAGE       NSLocalizedString(@"PV1 VOLTAGE", @"PV1 VOLTAGE")
#define root_PV1_ELEC_CURRENT       NSLocalizedString(@"PV1 ELEC-CURRENT", @"PV1 ELEC-CURRENT")
#define root_PV2_VOLTAGE       NSLocalizedString(@"PV2 VOLTAGE", @"PV2 VOLTAGE")
#define root_PV2_ELEC_CURRENT       NSLocalizedString(@"PV2 ELEC-CURRENT", @"PV2 ELEC-CURRENT")
#define root_R_PHASE_POWER       NSLocalizedString(@"R-PHASE POWER", @"R-PHASE POWER")
#define root_S_PHASE_POWER       NSLocalizedString(@"S-PHASE POWER", @"S-PHASE POWER")
#define root_T_PHASE_POWER       NSLocalizedString(@"T-PHASE POWER", @"T-PHASE POWER")
#define root_POWER       NSLocalizedString(@"POWER", @"POWER")
#define root_Energy       NSLocalizedString(@"Energy", @"Energy")

//详情（储能机）
#define root_CHARGING_POWER       NSLocalizedString(@"CHARGING POWER", @"CHARGING POWER")
#define root_DISCHARGING_POWER       NSLocalizedString(@"DISCHARGING POWER", @"DISCHARGING POWER")
#define root_INPUT_VOLTAGE       NSLocalizedString(@"INPUT VOLTAGE", @"INPUT VOLTAGE")
#define root_INPUT_CURRENT       NSLocalizedString(@"INPUT CURRENT", @"INPUT CURRENT")
#define root_USER_SIDE_POWER       NSLocalizedString(@"USER-SIDE POWER", @"USER-SIDE POWER")
#define root_GRID_SIDE_POWER       NSLocalizedString(@"GRID-SIDE POWER", @"GRID-SIDE POWER")

#define root_MONTH_BATTERY_CHARGE     NSLocalizedString(@"MONTH BATTERY CHARGE" , @"MONTH BATTERY CHARGE")
#define root_MONTHLY_CHARGED     NSLocalizedString(@"MONTHLY CHARGED", @"MONTHLY CHARGED")
#define root_MONTHLY_DISCHARGED     NSLocalizedString(@"MONTHLY DISCHARGED", @"MONTHLY DISCHARGED")
#define root_YEAR_BATTERY_CHARGE     NSLocalizedString(@"YEAR BATTERY CHARGE", @"YEAR BATTERY CHARGE")
#define root_YEAR_CHARGED     NSLocalizedString(@"YEAR CHARGED", @"YEAR CHARGED")
#define root_YEAR_DISCHARGED     NSLocalizedString(@"YEAR DISCHARGED", @"YEAR DISCHARGED")
#define root_TOTAL_BATTERY_CHARGE     NSLocalizedString(@"TOTAL BATTERY CHARGE", @"TOTAL BATTERY CHARGE")
#define root_TOTAL_CHARGED     NSLocalizedString(@"TOTAL CHARGED", @"TOTAL CHARGED")
#define root_TOTAL_DISCHARGED     NSLocalizedString(@"TOTAL DISCHARGED", @"TOTAL DISCHARGED")

//详情（智能电表）
#define root_ACTIVE_POWER       NSLocalizedString(@"ACTIVE POWER", @"ACTIVE POWER")
#define root_REACTIVE_POWER       NSLocalizedString(@"REACTIVE POWER", @"REACTIVE POWER")
#define root_APPARENT_POWER       NSLocalizedString(@"APPARENT POWER", @"APPARENT POWER")
#define root_ACTIVE_ENERGY       NSLocalizedString(@"ACTIVE ENERGY", @"ACTIVE ENERGY")
#define root_REACTIVE_ENERGY       NSLocalizedString(@"REACTIVE ENERGY", @"REACTIVE ENERGY")
#define root_POWER_FACTOR       NSLocalizedString(@"POWER FACTOR", @"POWER FACTOR")

//详情（环境监测仪）
#define root_WIND_SPEED       NSLocalizedString(@"WIND SPEED", @"WIND SPEED")
#define root_WIND_ANGLE       NSLocalizedString(@"WIND ANGLE", @"WIND ANGLE")
#define root_ENVIRONMENT_TEMPERATURE       NSLocalizedString(@"ENVIRONMENT TEMPERATURE", @"ENVIRONMENT TEMPERATURE")
#define root_RADIANT       NSLocalizedString(@"RADIANT", @"RADIANT")
#define root_PANEL_TEMPERATURE       NSLocalizedString(@"PANEL TEMPERATURE", @"PANEL TEMPERATURE")

//详情（汇流箱）
#define root_FIRST_CURRENT       NSLocalizedString(@"FIRST CURRENT", @"FIRST CURRENT")
#define root_SENCOND_CURRENT       NSLocalizedString(@"SENCOND CURRENT", @"SENCOND CURRENT")
#define root_THIRD_CURRENT       NSLocalizedString(@"THIRD CURRENT", @"THIRD CURRENT")
#define root_FOUR_CURRENT       NSLocalizedString(@"FOUR CURRENT", @"FOUR CURRENT")
#define root_FIVE_CURRENT       NSLocalizedString(@"FIVE CURRENT", @"FIVE CURRENT")
#define root_SIX_CURRENT       NSLocalizedString(@"SIX CURRENT", @"SIX CURRENT")
#define root_Event_List       NSLocalizedString(@"Event List", @"Event List")

//电站日志
#define root_Name       NSLocalizedString(@"Name", @"Name")
#define root_Time       NSLocalizedString(@"Time", @"Time")
#define root_Device_Type       NSLocalizedString(@"Device Type", @"Device Type")
#define root_Warning_Code       NSLocalizedString(@"Warning Code", @"Warning Code")
#define root_Warning_Description       NSLocalizedString(@"Warning Description", @"Warning Description")

//地图
#define root_Station_Location       NSLocalizedString(@"Station Location", @"Station Location")
#define root_Growatt_Location       NSLocalizedString(@"Growatt Location", @"Growatt Location")
#define root_My_Location       NSLocalizedString(@"My Location", @"My Location")
#define root_Satellite_Images       NSLocalizedString(@"Satellite Images", @"Satellite Images")
#define root_Search       NSLocalizedString(@"Search", @"Search")
#define root_Google_Map       NSLocalizedString(@"Google Map", @"Google Map")
#define root_Baidu_Map       NSLocalizedString(@"Baidu Map", @"Baidu Map")
#define root_Set_Station_Location       NSLocalizedString(@"Set Station Location", @"Set Station Location")
#define root_Set_Station_Map       NSLocalizedString(@"Set Station Map", @"Set Station Map")

//通用
#define root_Cancel       NSLocalizedString(@"Cancel", @"Cancel")
#define root_Yes       NSLocalizedString(@"Yes", @"Yes")
#define root_QR      NSLocalizedString(@"扫描二维码", @"扫描二维码")
#define root_Next       NSLocalizedString(@"Next", @"Next")
#define root_Finish       NSLocalizedString(@"Finish", @"Finish")
#define root_lost       NSLocalizedString(@"lost", @"lost")
#define root_wait       NSLocalizedString(@"wait", @"wait")
#define root_connection       NSLocalizedString(@"connection", @"connection")
#define root_malfunction       NSLocalizedString(@"malfunction", @"malfunction")

#define BTN_LOGOUT              NSLocalizedString(@"Exit", @"Exit")

#define root_Voltage      NSLocalizedString(@"Voltage", @"Voltage")
#define root_Electron_flow      NSLocalizedString(@"Electron flow", @"Electron flow")

#define root_Networking      NSLocalizedString(@"Networking Timeout", @"Networking Timeout")


//root
//#define root_English       NSLocalizedString(@"English", @"English")
//#define root_Auto_login       NSLocalizedString(@"Auto Login", @"Auto Login")
//#define root_Remember_password       NSLocalizedString(@"Remember", @"Remember")
//#define root_Sign_In       NSLocalizedString(@"Sign In", @"Sign In")
//#define root_New_User       NSLocalizedString(@"New User", @"New User")
//#define root_About       NSLocalizedString(@"About", @"About")
//#define root_Example_Plants       NSLocalizedString(@"Example Plants", @"Example Plants")
//#define root_username_password_error       NSLocalizedString(@"username password error", @"username password error")
//#define root_Company_information       NSLocalizedString(@"Company Information", @"Company Information")
//#define root_Name       NSLocalizedString(@"Name", @"Name")
//#define root_Address       NSLocalizedString(@"Address", @"Address")
//#define root_Tel_phone       NSLocalizedString(@"Tel phone", @"Tel phone")
//#define root_E_Mail       NSLocalizedString(@"e-mail", @"e-mail")
//#define root_Site       NSLocalizedString(@"Site", @"Site")
//#define root_Product_information       NSLocalizedString(@"Product Information", @"Product Information")
//#define root_Product_name       NSLocalizedString(@"Product Name", @"Product Name")
//#define root_Current_version       NSLocalizedString(@"Current Version", @"Current Version")
//#define root_Manufacturer       NSLocalizedString(@"Manufacturer", @"Manufacturer")
//#define root_Copyright_Notice       NSLocalizedString(@"Copyright Notice", @"Copyright Notice")
//#define root_Version       NSLocalizedString(@"Version", @"Version")
//#define root_Update_Log       NSLocalizedString(@"Update Log", @"Update Log")
//#define root_Server_address_changes       NSLocalizedString(@"Server address changes", @"Server address changes")
//#define root_Please_enter_the_server_address       NSLocalizedString(@"Please enter the server address", @"Please enter the server address")
//#define root_Register       NSLocalizedString(@"Register", @"Register")
//#define root_username       NSLocalizedString(@"username", @"username")
//#define root_password       NSLocalizedString(@"password", @"password")
//#define root_telphone       NSLocalizedString(@"telphone", @"telphone")
//#define root_company_name       NSLocalizedString(@"company name", @"company name")
//#define root_datalog_sn       NSLocalizedString(@"datalog sn", @"datalog sn")
//#define root_datalog_valicode       NSLocalizedString(@"Datalog valicode", @"Datalog valicode")
//#define root_timezone       NSLocalizedString(@"timezone", @"timezone")
//#define root_language       NSLocalizedString(@"language", @"language")
//#define root_Please_enter_verification_code       NSLocalizedString(@"Enter code", @"Enter code")
//#define root_please_insert_username       NSLocalizedString(@"Enter your username", @"Enter your username")
//#define root__Please_enter_your_password       NSLocalizedString(@"Enter your pwd", @"Enter your pwd")
//#define root_Please_enter_the_email       NSLocalizedString(@"Enter email", @"Enter email")
//#define root_Please_enter_the_phone_number       NSLocalizedString(@"Enter phone number", @"Enter phone number")
//#define root_Please_enter_your_company_name       NSLocalizedString(@"Enter company name", @"Enter company name")
//#define root_Enter_DatalogSN       NSLocalizedString(@"Enter DatalogSN", @"Enter DatalogSN")
//#define root_datalog_valicode       NSLocalizedString(@"Datalog valicode", @"Datalog valicode")
//#define root_select_a_timezone       NSLocalizedString(@"Select a timezone", @"Select a timezone")
//#define root_Please_enter_the_language       NSLocalizedString(@"Enter the language", @"Enter the language")
//#define root_please_insert_username       NSLocalizedString(@"Enter your username", @"Enter your username")
//#define root_password_must_more_than_six_word       NSLocalizedString(@"Password must more than six word", @"Password must more than six word")
//#define root_The_phone_number_can_not_be_empty       NSLocalizedString(@"The phone number can not be empty", @"The phone number can not be empty")
//#define root_Company_name_can_not_be_empty       NSLocalizedString(@"Company name can not be empty", @"Company name can not be empty")
//#define root_insert_true_datalog_sn       NSLocalizedString(@"Insert true datalog sn", @"Insert true datalog sn")
//#define root_insert_datalog_code       NSLocalizedString(@"Insert datalog code", @"Insert datalog code")
//#define root_select_a_timezone       NSLocalizedString(@"Select a timezone", @"Select a timezone")
//#define root_Language_can_not_be_empty       NSLocalizedString(@"Language can not be empty", @"Language can not be empty")
//#define root_valicode_error       NSLocalizedString(@"Valicode error", @"Valicode error")
//#define root_Phone_number_format_is_incorrect       NSLocalizedString(@"Phone number format is incorrect", @"Phone number format is incorrect")
//#define root_this_username_already_exist       NSLocalizedString(@"this username already exist", @"this username already exist")
//#define root_insert_datalog_code       NSLocalizedString(@"Insert datalog code", @"Insert datalog code")
//#define root_Registration_failed       NSLocalizedString(@"Registration failed", @"Registration failed")
//#define root_Registration_success       NSLocalizedString(@"Registration success", @"Registration success")
//#define root_Plant_Overview       NSLocalizedString(@"Plant Overview", @"Plant Overview")
//#define root_Exit       NSLocalizedString(@"Exit", @"Exit")
//#define root_Today_energy       NSLocalizedString(@"Today Energy", @"Today Energy")
//#define root_Total_energy       NSLocalizedString(@"Total Energy", @"Total Energy")
//#define root_Total_Power       NSLocalizedString(@"Total Eower", @"Total Eower")
//#define root_Battery_Percentage       NSLocalizedString(@"Percentage", @"Percentage")
//#define root_Plant_List       NSLocalizedString(@"Plant List", @"Plant List")
//#define root_Total_energy       NSLocalizedString(@"Total Energy", @"Total Energy")
//#define root_current_Power       NSLocalizedString(@"Current Power", @"Current Power")
//#define root_Gains       NSLocalizedString(@"Gains", @"Gains")
//#define root_Battery_Percentage       NSLocalizedString(@"Percentage", @"Percentage")
//#define root_Storage_status       NSLocalizedString(@"Storage Status", @"Storage Status")
//#define root_CHARGING_POWER       NSLocalizedString(@"Charge Power", @"Charge Power")
//#define root_DISCHARGING_POWER       NSLocalizedString(@"Discharge Power", @"Discharge Power")
//#define root_add_plant       NSLocalizedString(@"Add Plant", @"Add Plant")
//#define root_Remove_station       NSLocalizedString(@"Remove Station", @"Remove Station")
//#define root_Upload_Power_plant_picture       NSLocalizedString(@"Upload Picture", @"Upload Picture")
//#define root_Setting_Station_Map       NSLocalizedString(@"Setting Station Map", @"Setting Station Map")
//#define root_installation_information       NSLocalizedString(@"Installation Information", @"Installation Information")
//#define root_plant_name       NSLocalizedString(@"plant name", @"plant name")
//#define root_instal_date       NSLocalizedString(@"instal date", @"instal date")
//#define root_company       NSLocalizedString(@"company", @"company")
//#define root_POWER       NSLocalizedString(@"Power", @"Power")
//#define root_Next       NSLocalizedString(@"Next", @"Next")
//#define root_location_information       NSLocalizedString(@"Location Information", @"Location Information")
//#define root_country       NSLocalizedString(@"country", @"country")
//#define root_city       NSLocalizedString(@"city", @"city")
//#define root_time_zone       NSLocalizedString(@"time zone", @"time zone")
//#define root_longitude       NSLocalizedString(@"longitude", @"longitude")
//#define root_latitude       NSLocalizedString(@"latitude", @"latitude")
//#define root_capital_income       NSLocalizedString(@"Capital Income", @"Capital Income")
//#define root_capital_income       NSLocalizedString(@"Capital Income", @"Capital Income")
//#define root_Standard_coal_saved       NSLocalizedString(@"standard coal saved", @"standard coal saved")
//#define root_CO2_reduced       NSLocalizedString(@"CO₂ reduced", @"CO₂ reduced")
//#define root_SO2_reduced       NSLocalizedString(@"SO₂ reduced", @"SO₂ reduced")
//#define root_plant_image       NSLocalizedString(@"plant image", @"plant image")
//#define root_Location_Picture       NSLocalizedString(@"location picture", @"location picture")
//#define root_Finish       NSLocalizedString(@"Finish", @"Finish")
//#define root_Added_successfully       NSLocalizedString(@"Added Successfully", @"Added Successfully")
//#define root_Add_Failed       NSLocalizedString(@"Add Failed", @"Add Failed")
//#define root_Successfully_deleted       NSLocalizedString(@"Successfully deleted", @"Successfully deleted")
//#define root_Delete_failed       NSLocalizedString(@"Delete failed", @"Delete failed")
//#define root_Successfully_modified       NSLocalizedString(@"Successfully modified", @"Successfully modified")
//#define root_Modification_fails       NSLocalizedString(@"Modification fails", @"Modification fails")
//#define root_plant_detail       NSLocalizedString(@"Plant Detail", @"Plant Detail")
//#define root_DAY       NSLocalizedString(@"DAY", @"DAY")
//#define root_MONTH       NSLocalizedString(@"MONTH", @"MONTH")
//#define root_YEAR       NSLocalizedString(@"YEAR", @"YEAR")
//#define root_TOTAL       NSLocalizedString(@"TOTAL", @"TOTAL")
//#define root_Daily_returns       NSLocalizedString(@"Daily Returns", @"Daily Returns")
//#define root_DAILY_ELECTRICITY       NSLocalizedString(@"Daily Electricity", @"Daily Electricity")
//#define root_POWER       NSLocalizedString(@"Power", @"Power")
//#define root_Plant_Overview       NSLocalizedString(@"Plant Overview", @"Plant Overview")
//#define root_device_list       NSLocalizedString(@"Device List", @"Device List")
//#define root_event_list       NSLocalizedString(@"Event List", @"Event List")
//#define root__Map       NSLocalizedString(@"Map", @"Map")
//#define root_plant_image       NSLocalizedString(@"plant image", @"plant image")
//#define root_datalog       NSLocalizedString(@"Datalog", @"Datalog")
//#define root_add       NSLocalizedString(@"Add", @"Add")
//#define root_Aliases       NSLocalizedString(@"aliases", @"aliases")
//#define root_datalog_sn       NSLocalizedString(@"datalog sn", @"datalog sn")
//#define root_group       NSLocalizedString(@"group", @"group")
//#define root_device_type       NSLocalizedString(@"Device Type", @"Device Type")
//#define root_data_update_interval       NSLocalizedString(@"data update interval", @"data update interval")
//#define root_Adding_Data_Acquisition       NSLocalizedString(@"Add", @"Add")
//#define root_Edit_Data_Collector       NSLocalizedString(@"Modified", @"Modified")
//#define root_Delete_the_data_logger       NSLocalizedString(@"Delete", @"Delete")
//#define root_Aliases_can_not_be_empty       NSLocalizedString(@"Aliases can not be empty", @"Aliases can not be empty")
//#define root_Successfully_modified       NSLocalizedString(@"Successfully modified", @"Successfully modified")
//#define root_Delete_failed       NSLocalizedString(@"Delete failed", @"Delete failed")
//#define root_insert_true_datalog_sn       NSLocalizedString(@"Insert true datalog sn", @"Insert true datalog sn")
//#define root_insert_datalog_code       NSLocalizedString(@"Insert datalog code", @"Insert datalog code")
//#define root_insert_datalog_code       NSLocalizedString(@"Insert datalog code", @"Insert datalog code")
//#define root_Added_successfully       NSLocalizedString(@"Added Successfully", @"Added Successfully")
//#define root_Add_Failed       NSLocalizedString(@"Add Failed", @"Add Failed")
//#define root_Inverter       NSLocalizedString(@"Inverter", @"Inverter")
//#define root_Storage       NSLocalizedString(@"Storage", @"Storage")
//#define root_Other_devices       NSLocalizedString(@"Other", @"Other")
//#define root_Aliases       NSLocalizedString(@"aliases", @"aliases")
//#define root_Address       NSLocalizedString(@"Address", @"Address")
//#define root_Total_energy       NSLocalizedString(@"Total Energy", @"Total Energy")
//#define root_update_time       NSLocalizedString(@"Update Time", @"Update Time")
//#define root_datalog       NSLocalizedString(@"Datalog", @"Datalog")
//#define root_Battery_Percentage       NSLocalizedString(@"Percentage", @"Percentage")
//#define root_active_Power       NSLocalizedString(@"Active Power", @"Active Power")
//#define root_RADIANT       NSLocalizedString(@"Radiant", @"Radiant")
//#define root_loading       NSLocalizedString(@"loading...", @"loading...")
//#define root_PV_POWER       NSLocalizedString(@"PV POWER", @"PV POWER")
//#define root_PV1_VOLTAGE       NSLocalizedString(@"PV1 VOLTAGE", @"PV1 VOLTAGE")
//#define root_PV1_ELEC_CURRENT       NSLocalizedString(@"PV1 ELEC-CURRENT", @"PV1 ELEC-CURRENT")
//#define root_PV2_VOLTAGE       NSLocalizedString(@"PV2 VOLTAGE", @"PV2 VOLTAGE")
//#define root_PV2_ELEC_CURRENT       NSLocalizedString(@"PV2 ELEC-CURRENT", @"PV2 ELEC-CURRENT")
//#define root_R_PHASE_POWER       NSLocalizedString(@"R-PHASE POWER", @"R-PHASE POWER")
//#define root_S_PHASE_POWER       NSLocalizedString(@"S-PHASE POWER", @"S-PHASE POWER")
//#define root_T_PHASE_POWER       NSLocalizedString(@"T-PHASE POWER", @"T-PHASE POWER")
//#define root_POWER       NSLocalizedString(@"Power", @"Power")
//#define root_Energy       NSLocalizedString(@"Energy", @"Energy")
//#define root_CHARGING_POWER       NSLocalizedString(@"Charge Power", @"Charge Power")
//#define root_DISCHARGING_POWER       NSLocalizedString(@"Discharge Power", @"Discharge Power")
//#define root_INPUT_VOLTAGE       NSLocalizedString(@"INPUT VOLTAGE", @"INPUT VOLTAGE")
//#define root_INPUT_CURRENT       NSLocalizedString(@"INPUT CURRENT", @"INPUT CURRENT")
//#define root_USER_SIDE_POWER       NSLocalizedString(@"USER-SIDE POWER", @"USER-SIDE POWER")
//#define root_GRID_SIDE_POWER       NSLocalizedString(@"Grid Power", @"Grid Power")
//#define root_ACTIVE_POWER       NSLocalizedString(@"ACTIVE POWER", @"ACTIVE POWER")
//#define root_REACTIVE_POWER       NSLocalizedString(@"REACTIVE POWER", @"REACTIVE POWER")
//#define root_APPARENT_POWER       NSLocalizedString(@"APPARENT POWER", @"APPARENT POWER")
//#define root_ACTIVE_ENERGY       NSLocalizedString(@"ACTIVE ENERGY", @"ACTIVE ENERGY")
//#define root_REACTIVE_ENERGY       NSLocalizedString(@"REACTIVE ENERGY", @"REACTIVE ENERGY")
//#define root_POWER_FACTOR       NSLocalizedString(@"POWER FACTOR", @"POWER FACTOR")
//#define root_WIND_SPEED       NSLocalizedString(@"WIND SPEED", @"WIND SPEED")
//#define root_WIND_ANGLE       NSLocalizedString(@"WIND ANGLE", @"WIND ANGLE")
//#define root_ENVIRONMENT_TEMPERATURE       NSLocalizedString(@"ENVIRONMENT TEMPERATURE", @"ENVIRONMENT TEMPERATURE")
//#define root_RADIANT       NSLocalizedString(@"Radiant", @"Radiant")
//#define root_PANEL_TEMPERATURE       NSLocalizedString(@"PANEL TEMPERATURE", @"PANEL TEMPERATURE")
//#define root_FIRST_CURRENT       NSLocalizedString(@"FIRST CURRENT", @"FIRST CURRENT")
//#define root_SENCOND_CURRENT       NSLocalizedString(@"SENCOND CURRENT", @"SENCOND CURRENT")
//#define root_THIRD_CURRENT       NSLocalizedString(@"THIRD CURRENT", @"THIRD CURRENT")
//#define root_FOUR_CURRENT       NSLocalizedString(@"FOUR CURRENT", @"FOUR CURRENT")
//#define root_FIVE_CURRENT       NSLocalizedString(@"FIVE CURRENT", @"FIVE CURRENT")
//#define root_SIX_CURRENT       NSLocalizedString(@"SIX CURRENT", @"SIX CURRENT")
//#define root_event_list       NSLocalizedString(@"Event List", @"Event List")
//#define root_Name       NSLocalizedString(@"Name", @"Name")
//#define root_Time       NSLocalizedString(@"Time", @"Time")
//#define root_device_type       NSLocalizedString(@"Device Type", @"Device Type")
//#define root_Warning_code       NSLocalizedString(@"Warning Code", @"Warning Code")
//#define root_Warning_Description       NSLocalizedString(@"Warning Description", @"Warning Description")
//#define root_Station_Location       NSLocalizedString(@"Station Location", @"Station Location")
//#define root_Growatt_location       NSLocalizedString(@"Growatt Location", @"Growatt Location")
//#define root_My_location       NSLocalizedString(@"My Location", @"My Location")
//#define root_Satellite_images       NSLocalizedString(@"Satellite Images", @"Satellite Images")
//#define root_search       NSLocalizedString(@"Search", @"Search")
//#define root_Google_Map       NSLocalizedString(@"Google Map", @"Google Map")
//#define root_Baidu_map       NSLocalizedString(@"Baidu Map", @"Baidu Map")
//#define root_Set_Station_Location       NSLocalizedString(@"Set Station Location", @"Set Station Location")
//#define root_Set_Station_Map       NSLocalizedString(@"Set Station Map", @"Set Station Map")
//#define root_cancel       NSLocalizedString(@"Cancel", @"Cancel")
//#define root_yes       NSLocalizedString(@"Yes", @"Yes")
//#define root_Next       NSLocalizedString(@"Next", @"Next")
//#define root_Finish       NSLocalizedString(@"Finish", @"Finish")
//#define root_lost       NSLocalizedString(@"lost", @"lost")
//#define root_wait       NSLocalizedString(@"wait", @"wait")
//#define root_connection       NSLocalizedString(@"connection", @"connection")
//#define root_malfunction       NSLocalizedString(@"malfunction", @"malfunction")


#endif