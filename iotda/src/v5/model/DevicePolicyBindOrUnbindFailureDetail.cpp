

#include "huaweicloud/iotda/v5/model/DevicePolicyBindOrUnbindFailureDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DevicePolicyBindOrUnbindFailureDetail::DevicePolicyBindOrUnbindFailureDetail()
{
    targetId_ = "";
    targetIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DevicePolicyBindOrUnbindFailureDetail::~DevicePolicyBindOrUnbindFailureDetail() = default;

void DevicePolicyBindOrUnbindFailureDetail::validate()
{
}

web::json::value DevicePolicyBindOrUnbindFailureDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool DevicePolicyBindOrUnbindFailureDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
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


std::string DevicePolicyBindOrUnbindFailureDetail::getTargetId() const
{
    return targetId_;
}

void DevicePolicyBindOrUnbindFailureDetail::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool DevicePolicyBindOrUnbindFailureDetail::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void DevicePolicyBindOrUnbindFailureDetail::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string DevicePolicyBindOrUnbindFailureDetail::getErrorCode() const
{
    return errorCode_;
}

void DevicePolicyBindOrUnbindFailureDetail::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DevicePolicyBindOrUnbindFailureDetail::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DevicePolicyBindOrUnbindFailureDetail::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DevicePolicyBindOrUnbindFailureDetail::getErrorMsg() const
{
    return errorMsg_;
}

void DevicePolicyBindOrUnbindFailureDetail::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DevicePolicyBindOrUnbindFailureDetail::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DevicePolicyBindOrUnbindFailureDetail::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


