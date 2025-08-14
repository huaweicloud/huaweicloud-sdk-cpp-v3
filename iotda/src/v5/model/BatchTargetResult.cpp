

#include "huaweicloud/iotda/v5/model/BatchTargetResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BatchTargetResult::BatchTargetResult()
{
    target_ = "";
    targetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

BatchTargetResult::~BatchTargetResult() = default;

void BatchTargetResult::validate()
{
}

web::json::value BatchTargetResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
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
bool BatchTargetResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string BatchTargetResult::getTarget() const
{
    return target_;
}

void BatchTargetResult::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool BatchTargetResult::targetIsSet() const
{
    return targetIsSet_;
}

void BatchTargetResult::unsettarget()
{
    targetIsSet_ = false;
}

std::string BatchTargetResult::getStatus() const
{
    return status_;
}

void BatchTargetResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchTargetResult::statusIsSet() const
{
    return statusIsSet_;
}

void BatchTargetResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchTargetResult::getErrorCode() const
{
    return errorCode_;
}

void BatchTargetResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool BatchTargetResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void BatchTargetResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string BatchTargetResult::getErrorMsg() const
{
    return errorMsg_;
}

void BatchTargetResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool BatchTargetResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void BatchTargetResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


