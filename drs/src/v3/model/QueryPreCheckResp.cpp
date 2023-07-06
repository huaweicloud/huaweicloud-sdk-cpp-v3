

#include "huaweicloud/drs/v3/model/QueryPreCheckResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryPreCheckResp::QueryPreCheckResp()
{
    precheckId_ = "";
    precheckIdIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    totalPassedRate_ = "";
    totalPassedRateIsSet_ = false;
    rdsInstanceId_ = "";
    rdsInstanceIdIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    precheckResultIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

QueryPreCheckResp::~QueryPreCheckResp() = default;

void QueryPreCheckResp::validate()
{
}

web::json::value QueryPreCheckResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(precheckIdIsSet_) {
        val[utility::conversions::to_string_t("precheck_id")] = ModelBase::toJson(precheckId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(totalPassedRateIsSet_) {
        val[utility::conversions::to_string_t("total_passed_rate")] = ModelBase::toJson(totalPassedRate_);
    }
    if(rdsInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("rds_instance_id")] = ModelBase::toJson(rdsInstanceId_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(precheckResultIsSet_) {
        val[utility::conversions::to_string_t("precheck_result")] = ModelBase::toJson(precheckResult_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}

bool QueryPreCheckResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("precheck_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_passed_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_passed_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPassedRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("precheck_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_result"));
        if(!fieldValue.is_null())
        {
            std::vector<PrecheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}

std::string QueryPreCheckResp::getPrecheckId() const
{
    return precheckId_;
}

void QueryPreCheckResp::setPrecheckId(const std::string& value)
{
    precheckId_ = value;
    precheckIdIsSet_ = true;
}

bool QueryPreCheckResp::precheckIdIsSet() const
{
    return precheckIdIsSet_;
}

void QueryPreCheckResp::unsetprecheckId()
{
    precheckIdIsSet_ = false;
}

bool QueryPreCheckResp::isResult() const
{
    return result_;
}

void QueryPreCheckResp::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool QueryPreCheckResp::resultIsSet() const
{
    return resultIsSet_;
}

void QueryPreCheckResp::unsetresult()
{
    resultIsSet_ = false;
}

std::string QueryPreCheckResp::getProcess() const
{
    return process_;
}

void QueryPreCheckResp::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool QueryPreCheckResp::processIsSet() const
{
    return processIsSet_;
}

void QueryPreCheckResp::unsetprocess()
{
    processIsSet_ = false;
}

std::string QueryPreCheckResp::getTotalPassedRate() const
{
    return totalPassedRate_;
}

void QueryPreCheckResp::setTotalPassedRate(const std::string& value)
{
    totalPassedRate_ = value;
    totalPassedRateIsSet_ = true;
}

bool QueryPreCheckResp::totalPassedRateIsSet() const
{
    return totalPassedRateIsSet_;
}

void QueryPreCheckResp::unsettotalPassedRate()
{
    totalPassedRateIsSet_ = false;
}

std::string QueryPreCheckResp::getRdsInstanceId() const
{
    return rdsInstanceId_;
}

void QueryPreCheckResp::setRdsInstanceId(const std::string& value)
{
    rdsInstanceId_ = value;
    rdsInstanceIdIsSet_ = true;
}

bool QueryPreCheckResp::rdsInstanceIdIsSet() const
{
    return rdsInstanceIdIsSet_;
}

void QueryPreCheckResp::unsetrdsInstanceId()
{
    rdsInstanceIdIsSet_ = false;
}

std::string QueryPreCheckResp::getJobDirection() const
{
    return jobDirection_;
}

void QueryPreCheckResp::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool QueryPreCheckResp::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void QueryPreCheckResp::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::vector<PrecheckResult>& QueryPreCheckResp::getPrecheckResult()
{
    return precheckResult_;
}

void QueryPreCheckResp::setPrecheckResult(const std::vector<PrecheckResult>& value)
{
    precheckResult_ = value;
    precheckResultIsSet_ = true;
}

bool QueryPreCheckResp::precheckResultIsSet() const
{
    return precheckResultIsSet_;
}

void QueryPreCheckResp::unsetprecheckResult()
{
    precheckResultIsSet_ = false;
}

std::string QueryPreCheckResp::getErrorMsg() const
{
    return errorMsg_;
}

void QueryPreCheckResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool QueryPreCheckResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void QueryPreCheckResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string QueryPreCheckResp::getErrorCode() const
{
    return errorCode_;
}

void QueryPreCheckResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryPreCheckResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryPreCheckResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


