

#include "huaweicloud/gaussdbforopengauss/v3/model/BackupPolicyErrorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BackupPolicyErrorResponse::BackupPolicyErrorResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

BackupPolicyErrorResponse::~BackupPolicyErrorResponse() = default;

void BackupPolicyErrorResponse::validate()
{
}

web::json::value BackupPolicyErrorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool BackupPolicyErrorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string BackupPolicyErrorResponse::getErrorCode() const
{
    return errorCode_;
}

void BackupPolicyErrorResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool BackupPolicyErrorResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void BackupPolicyErrorResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string BackupPolicyErrorResponse::getErrorMsg() const
{
    return errorMsg_;
}

void BackupPolicyErrorResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool BackupPolicyErrorResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void BackupPolicyErrorResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


