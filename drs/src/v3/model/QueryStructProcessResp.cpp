

#include "huaweicloud/drs/v3/model/QueryStructProcessResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryStructProcessResp::QueryStructProcessResp()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    structProcessIsSet_ = false;
}

QueryStructProcessResp::~QueryStructProcessResp() = default;

void QueryStructProcessResp::validate()
{
}

web::json::value QueryStructProcessResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(structProcessIsSet_) {
        val[utility::conversions::to_string_t("struct_process")] = ModelBase::toJson(structProcess_);
    }

    return val;
}

bool QueryStructProcessResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("struct_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("struct_process"));
        if(!fieldValue.is_null())
        {
            StructProcessResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStructProcess(refVal);
        }
    }
    return ok;
}

std::string QueryStructProcessResp::getJobId() const
{
    return jobId_;
}

void QueryStructProcessResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryStructProcessResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryStructProcessResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string QueryStructProcessResp::getErrorCode() const
{
    return errorCode_;
}

void QueryStructProcessResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryStructProcessResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryStructProcessResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryStructProcessResp::getErrorMessage() const
{
    return errorMessage_;
}

void QueryStructProcessResp::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool QueryStructProcessResp::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void QueryStructProcessResp::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

StructProcessResp QueryStructProcessResp::getStructProcess() const
{
    return structProcess_;
}

void QueryStructProcessResp::setStructProcess(const StructProcessResp& value)
{
    structProcess_ = value;
    structProcessIsSet_ = true;
}

bool QueryStructProcessResp::structProcessIsSet() const
{
    return structProcessIsSet_;
}

void QueryStructProcessResp::unsetstructProcess()
{
    structProcessIsSet_ = false;
}

}
}
}
}
}


