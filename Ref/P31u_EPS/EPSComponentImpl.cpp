// ======================================================================
// \title  P31uComponentImpl.cpp
// \author vagrant
// \brief  cpp file for P31u component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================


#include <Ref/P31u_EPS/P31uComponentImpl.hpp>
#include "Fw/Types/BasicTypes.hpp"

namespace Ref {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  P31uComponentImpl ::
#if FW_OBJECT_NAMES == 1
    P31uComponentImpl(
        const char *const compName
    ) :
      P31uComponentBase(compName)
#else
    P31uComponentImpl(void)
#endif
  {

  }

  void P31uComponentImpl ::
    init(
        const NATIVE_INT_TYPE queueDepth,
        const NATIVE_INT_TYPE instance
    )
  {
    P31uComponentBase::init(queueDepth, instance);
  }

  P31uComponentImpl ::
    ~P31uComponentImpl(void)
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void P31uComponentImpl ::
    schedIn_handler(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void P31uComponentImpl ::
    Get_HK_1_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    Get_HK_2_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 type
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    Get_HK_2_VI_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 type
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    Get_HK_2_OUT_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 type
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    Get_HK_2_WDT_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 type
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    Get_HK_2_BASIC_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 type
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    SET_OUTPUT_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 output_byte
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    SET_SINGLE_OUTPUT_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 channel,
        U8 value,
        I16 Delay
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    SET_PV_VOLT_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U16 voltage1,
        U16 voltage2,
        U16 voltage3
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    SET_PV_AUTO_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 mode
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    SET_HEATER_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 cmd,
        U8 heater,
        U8 mode
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    RESET_COUNTERS_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 magic
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    CONFIG_CMD_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U8 cmd
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    CONFIG_GET_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    CONFIG_SET_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
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
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

  void P31uComponentImpl ::
    HARD_RESET_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

} // end namespace Ref
