// ======================================================================
// \title  P31uComponentImpl.hpp
// \author vagrant
// \brief  hpp file for P31u component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#ifndef P31u_HPP
#define P31u_HPP

#include "Ref/P31u_EPS/EPSComponentAc.hpp"

namespace Ref {

  class P31uComponentImpl :
    public P31uComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object P31u
      //!
      P31uComponentImpl(
#if FW_OBJECT_NAMES == 1
          const char *const compName /*!< The component name*/
#else
          void
#endif
      );

      //! Initialize object P31u
      //!
      void init(
          const NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

      //! Destroy object P31u
      //!
      ~P31uComponentImpl(void);

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      //! Handler implementation for schedIn
      //!
      void schedIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          NATIVE_UINT_TYPE context /*!< The call order*/
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Command handler implementations
      // ----------------------------------------------------------------------

      //! Implementation for Get_HK_1 command handler
      //! Housekeeping Base Parameters
      void Get_HK_1_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );

      //! Implementation for Get_HK_2 command handler
      //! ALL Housekeeping Base Parameters
      void Get_HK_2_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 type /*!< type=0 to request all housekeeping data*/
      );

      //! Implementation for Get_HK_2_VI command handler
      //! Housekeeping Base Parameters
      void Get_HK_2_VI_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 type /*!< type=1 to request voltage and current subset of HK_2*/
      );

      //! Implementation for Get_HK_2_OUT command handler
      //! Housekeeping Base Parameters
      void Get_HK_2_OUT_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 type /*!< type= 2 to request output switch subset of HK_2*/
      );

      //! Implementation for Get_HK_2_WDT command handler
      //! Housekeeping Base Parameters
      void Get_HK_2_WDT_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 type /*!< type= 3 to request wdt data subset of HK_2*/
      );

      //! Implementation for Get_HK_2_BASIC command handler
      //! Housekeeping Base Parameters
      void Get_HK_2_BASIC_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 type /*!< type= 4 to request basic data subset of HK_2*/
      );

      //! Implementation for SET_OUTPUT command handler
      //! Set output switch states by a bitmask where "1" means the channel is switched on and "0" means it is switched off. LSB is channel 1, next bit is channel 2 etc.
      void SET_OUTPUT_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 output_byte /*!< [NC NC 3.3V3 3.3V2 3.3V1 5V3 5V2 5V1]*/
      );

      //! Implementation for SET_SINGLE_OUTPUT command handler
      //! Set output channel to value with delay
      void SET_SINGLE_OUTPUT_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 channel, /*!< Channel(0-5), BP4 heater(6), BP4 switch (7)*/
          U8 value, /*!< 0=off, 1=on*/
          I16 Delay /*!< Delay in seconds */
      );

      //! Implementation for SET_PV_VOLT command handler
      //! Set the voltage on the photovoltaic inputs V1, V2, V3 in mV. Takes effect when MODE = 2, See SET_PV_AUTO. Transmit voltage1 first and voltage3 last.
      void SET_PV_VOLT_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U16 voltage1, 
          U16 voltage2, 
          U16 voltage3 
      );

      //! Implementation for SET_PV_AUTO command handler
      //! Sets the solar cell power tracking mode
      void SET_PV_AUTO_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 mode /*!< MODE = 0: Hardware default power point MODE = 1: Maximum powerpoint tracking MODE = 2: Fixed software powerpoint, value set with SET_PV_VOLT, default 4V*/
      );

      //! Implementation for SET_HEATER command handler
      //! Cmd = 0: Set heater on/off. Heater: 0 = BP4, 1= Onboard, 2 = Both. Mode: 0 = OFF, 1 = ON
      void SET_HEATER_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 cmd, 
          U8 heater, 
          U8 mode 
      );

      //! Implementation for RESET_COUNTERS command handler
      //! Send this command to reset boot counter and WDT counters.
      void RESET_COUNTERS_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 magic /*!< magic = 0x42*/
      );

      //! Implementation for CONFIG_CMD command handler
      //! Use this command to control the config system.
      void CONFIG_CMD_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 cmd /*!< cmd=1: Restore default config*/
      );

      //! Implementation for CONFIG_GET command handler
      //! Use this command to request the P31u config.
      void CONFIG_GET_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );

      //! Implementation for CONFIG_SET command handler
      //! Use this command to request the P31u config.
      void CONFIG_SET_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          U8 pptmode, 
          U8 battheater_mode, 
          I8 battheater_low, 
          I8 battheater_high, 
          U8 output_normal_value1, 
          U8 output_normal_value2, 
          U8 output_normal_value3, 
          U8 output_normal_value4, 
          U8 output_normal_value5, 
          U8 output_normal_value6, 
          U8 output_normal_value7, 
          U8 output_normal_value8, 
          U8 output_safe_value1, 
          U8 output_safe_value2, 
          U8 output_safe_value3, 
          U8 output_safe_value4, 
          U8 output_safe_value5, 
          U8 output_safe_value6, 
          U8 output_safe_value7, 
          U8 output_safe_value8, 
          U16 output_initial_on_delay1, 
          U16 output_initial_on_delay2, 
          U16 output_initial_on_delay3, 
          U16 output_initial_on_delay4, 
          U16 output_initial_on_delay5, 
          U16 output_initial_on_delay6, 
          U16 output_initial_on_delay7, 
          U16 output_initial_on_delay8, 
          U16 output_initial_off_delay1, 
          U16 output_initial_off_delay2, 
          U16 output_initial_off_delay3, 
          U16 output_initial_off_delay4, 
          U16 output_initial_off_delay5, 
          U16 output_initial_off_delay6, 
          U16 output_initial_off_delay7, 
          U16 output_initial_off_delay8, 
          U16 output_initial_off_delay8, 
          U16 vboost1, 
          U16 vboost2, 
          U16 vboost3 
      );

      //! Implementation for HARD_RESET command handler
      //! Send this command to perform a hard reset of the P31, including cycling permanent 5V and 3.3V and battery outputs.
      void HARD_RESET_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq /*!< The command sequence number*/
      );


    };

} // end namespace Ref

#endif
