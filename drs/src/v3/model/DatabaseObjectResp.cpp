

#include "huaweicloud/drs/v3/model/DatabaseObjectResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DatabaseObjectResp::DatabaseObjectResp()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = false;
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DatabaseObjectResp::~DatabaseObjectResp() = default;

void DatabaseObjectResp::validate()
{
}

web::json::value DatabaseObjectResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool DatabaseObjectResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}

std::string DatabaseObjectResp::getJobId() const
{
    return jobId_;
}

void DatabaseObjectResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DatabaseObjectResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DatabaseObjectResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool DatabaseObjectResp::isStatus() const
{
    return status_;
}

void DatabaseObjectResp::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DatabaseObjectResp::statusIsSet() const
{
    return statusIsSet_;
}

void DatabaseObjectResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DatabaseObjectResp::getErrorCode() const
{
    return errorCode_;
}

void DatabaseObjectResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DatabaseObjectResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DatabaseObjectResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DatabaseObjectResp::getErrorMsg() const
{
    return errorMsg_;
}

void DatabaseObjectResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DatabaseObjectResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DatabaseObjectResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


