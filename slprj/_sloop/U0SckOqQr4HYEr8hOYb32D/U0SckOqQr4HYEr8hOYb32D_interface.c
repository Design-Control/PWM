/* Interface file for out-of-process execution of library:
 * U0SckOqQr4HYEr8hOYb32D
 */

#include "xil_interface.h"
#include "xil_data_stream.h"

#include "U0SckOqQr4HYEr8hOYb32D_interface.h"

#include <stdlib.h>

/* Function Init/Term */
void customcode_U0SckOqQr4HYEr8hOYb32D_initializer(void)
{
   init();
}

void customcode_U0SckOqQr4HYEr8hOYb32D_terminator(void)
{
}

/* Function isDebug */
boolean_T customcode_U0SckOqQr4HYEr8hOYb32D_isdebug(void)
{
   return true;
}


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void init_U0SckOqQr4HYEr8hOYb32D(void)
{
    init();
}

void generatingPWM_U0SckOqQr4HYEr8hOYb32D(real_T Ts, real_T freq_sine, real_T freq_ratio, real_T deadtime, real_T *triwave, real_T *sinewave, real_T *pwm)
{
    generatingPWM(Ts, freq_sine, freq_ratio, deadtime, triwave, sinewave, pwm);
}


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void get_Ts_val_U0SckOqQr4HYEr8hOYb32D(real_T *varValByPtr)
{
    *varValByPtr = Ts;
}

void set_Ts_val_U0SckOqQr4HYEr8hOYb32D(const real_T *varValByPtr)
{
    Ts = *varValByPtr;
}

void get_freq_sine_val_U0SckOqQr4HYEr8hOYb32D(real_T *varValByPtr)
{
    *varValByPtr = freq_sine;
}

void set_freq_sine_val_U0SckOqQr4HYEr8hOYb32D(const real_T *varValByPtr)
{
    freq_sine = *varValByPtr;
}

void get_freq_ratio_val_U0SckOqQr4HYEr8hOYb32D(real_T *varValByPtr)
{
    *varValByPtr = freq_ratio;
}

void set_freq_ratio_val_U0SckOqQr4HYEr8hOYb32D(const real_T *varValByPtr)
{
    freq_ratio = *varValByPtr;
}

void get_deadtime_val_U0SckOqQr4HYEr8hOYb32D(real_T *varValByPtr)
{
    *varValByPtr = deadtime;
}

void set_deadtime_val_U0SckOqQr4HYEr8hOYb32D(const real_T *varValByPtr)
{
    deadtime = *varValByPtr;
}



XIL_INTERFACE_ERROR_CODE xilInitTargetData(void)
{
    return XIL_INTERFACE_SUCCESS;
}



XIL_INTERFACE_ERROR_CODE xilGetHostToTargetData(uint32_T xilFcnId, XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData **xilIOData)
{
    UNUSED_PARAMETER(xilFcnId);
    UNUSED_PARAMETER(xilCommandType);
    UNUSED_PARAMETER(xilCommandIdx);
    UNUSED_PARAMETER(xilIOData);

    return XIL_INTERFACE_UNKNOWN_TID;
}

XIL_INTERFACE_ERROR_CODE xilOutput(uint32_T xilFcnId, uint32_T xilTID)
{
    UNUSED_PARAMETER(xilTID);

    static uint32_T sizeData = (uint32_T) sizeof(uint32_T);
    static uint32_T sizeScopeID = (uint32_T) sizeof(uint8_T);

    switch (xilFcnId) {
    case 0:
    {


        customcode_U0SckOqQr4HYEr8hOYb32D_initializer();



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 1:
    {


        customcode_U0SckOqQr4HYEr8hOYb32D_terminator();



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 2:
    {
        uint32_T dataWidth_isAllowToDebug = 0;
        xilReadData((MemUnit_T *) &dataWidth_isAllowToDebug, sizeData);
        uint8_T scopeID_isAllowToDebug = 0;
        xilReadData((MemUnit_T *) &scopeID_isAllowToDebug, sizeScopeID);
        boolean_T isAllowToDebug = 0;



        isAllowToDebug = customcode_U0SckOqQr4HYEr8hOYb32D_isdebug();



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (xilWriteData((MemUnit_T *) &isAllowToDebug, (uint32_T) sizeof(boolean_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 3:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));
        }



        get_Ts_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 4:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));



        set_Ts_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 5:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));
        }



        get_freq_sine_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 6:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));



        set_freq_sine_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 7:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));
        }



        get_freq_ratio_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 8:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));



        set_freq_ratio_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 9:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));
        }



        get_deadtime_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 10:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real_T *varValByPtr = (real_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real_T)));



        set_deadtime_val_U0SckOqQr4HYEr8hOYb32D(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 11:
    {


        init_U0SckOqQr4HYEr8hOYb32D();



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 12:
    {
        uint32_T dataWidth_Ts = 0;
        xilReadData((MemUnit_T *) &dataWidth_Ts, sizeData);
        uint8_T scopeID_Ts = 0;
        xilReadData((MemUnit_T *) &scopeID_Ts, sizeScopeID);
        real_T Ts = 0;
        xilReadData((MemUnit_T *) &Ts, (uint32_T) sizeof(real_T));

        uint32_T dataWidth_freq_sine = 0;
        xilReadData((MemUnit_T *) &dataWidth_freq_sine, sizeData);
        uint8_T scopeID_freq_sine = 0;
        xilReadData((MemUnit_T *) &scopeID_freq_sine, sizeScopeID);
        real_T freq_sine = 0;
        xilReadData((MemUnit_T *) &freq_sine, (uint32_T) sizeof(real_T));

        uint32_T dataWidth_freq_ratio = 0;
        xilReadData((MemUnit_T *) &dataWidth_freq_ratio, sizeData);
        uint8_T scopeID_freq_ratio = 0;
        xilReadData((MemUnit_T *) &scopeID_freq_ratio, sizeScopeID);
        real_T freq_ratio = 0;
        xilReadData((MemUnit_T *) &freq_ratio, (uint32_T) sizeof(real_T));

        uint32_T dataWidth_deadtime = 0;
        xilReadData((MemUnit_T *) &dataWidth_deadtime, sizeData);
        uint8_T scopeID_deadtime = 0;
        xilReadData((MemUnit_T *) &scopeID_deadtime, sizeScopeID);
        real_T deadtime = 0;
        xilReadData((MemUnit_T *) &deadtime, (uint32_T) sizeof(real_T));

        uint32_T dataWidth_triwave = 0;
        xilReadData((MemUnit_T *) &dataWidth_triwave, sizeData);
        uint8_T scopeID_triwave = 0;
        xilReadData((MemUnit_T *) &scopeID_triwave, sizeScopeID);
        real_T *triwave = (real_T *) calloc((size_t) dataWidth_triwave, sizeof(real_T));
        if (scopeID_triwave < 2) {
            xilReadData((MemUnit_T *) triwave, dataWidth_triwave * ((uint32_T) sizeof(real_T)));
        }

        uint32_T dataWidth_sinewave = 0;
        xilReadData((MemUnit_T *) &dataWidth_sinewave, sizeData);
        uint8_T scopeID_sinewave = 0;
        xilReadData((MemUnit_T *) &scopeID_sinewave, sizeScopeID);
        real_T *sinewave = (real_T *) calloc((size_t) dataWidth_sinewave, sizeof(real_T));
        if (scopeID_sinewave < 2) {
            xilReadData((MemUnit_T *) sinewave, dataWidth_sinewave * ((uint32_T) sizeof(real_T)));
        }

        uint32_T dataWidth_pwm = 0;
        xilReadData((MemUnit_T *) &dataWidth_pwm, sizeData);
        uint8_T scopeID_pwm = 0;
        xilReadData((MemUnit_T *) &scopeID_pwm, sizeScopeID);
        real_T *pwm = (real_T *) calloc((size_t) dataWidth_pwm, sizeof(real_T));
        if (scopeID_pwm < 2) {
            xilReadData((MemUnit_T *) pwm, dataWidth_pwm * ((uint32_T) sizeof(real_T)));
        }



        generatingPWM_U0SckOqQr4HYEr8hOYb32D(Ts, freq_sine, freq_ratio, deadtime, triwave, sinewave, pwm);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_triwave > 0) {
            if (xilWriteData((MemUnit_T *) triwave, dataWidth_triwave * ((uint32_T) sizeof(real_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_sinewave > 0) {
            if (xilWriteData((MemUnit_T *) sinewave, dataWidth_sinewave * ((uint32_T) sizeof(real_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_pwm > 0) {
            if (xilWriteData((MemUnit_T *) pwm, dataWidth_pwm * ((uint32_T) sizeof(real_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(triwave);
        free(sinewave);
        free(pwm);

        break;
    }

    default:
        return XIL_INTERFACE_UNKNOWN_FCNID;
    }

    return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostData(uint32_T xilFcnId, XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData **xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
    UNUSED_PARAMETER(xilFcnId);
    UNUSED_PARAMETER(xilCommandType);
    UNUSED_PARAMETER(xilCommandIdx);
    UNUSED_PARAMETER(xilIOData);
    UNUSED_PARAMETER(responseId);
    UNUSED_PARAMETER(serverFcnId);

    return XIL_INTERFACE_UNKNOWN_TID;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostPreData(uint32_T xilFcnId, XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData **xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
    UNUSED_PARAMETER(xilFcnId);
    UNUSED_PARAMETER(xilCommandType);
    UNUSED_PARAMETER(xilCommandIdx);
    UNUSED_PARAMETER(xilIOData);
    UNUSED_PARAMETER(responseId);
    UNUSED_PARAMETER(serverFcnId);

    return XIL_INTERFACE_UNKNOWN_TID;
}

