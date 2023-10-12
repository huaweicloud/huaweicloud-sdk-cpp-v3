

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteBackupErrorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteBackupErrorResponse::DeleteBackupErrorResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DeleteBackupErrorResponse::~DeleteBackupErrorResponse() = default;

void DeleteBackupErrorResponse::validate()
{
}

web::json::value DeleteBackupErrorResponse::toJson() const
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
bool DeleteBackupErrorResponse::fromJson(const web::json::value& val)
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


std::string DeleteBackupErrorResponse::getErrorCode() const
{
    return errorCode_;
}

void DeleteBackupErrorResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DeleteBackupErrorResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DeleteBackupErrorResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DeleteBackupErrorResponse::getErrorMsg() const
{
    return errorMsg_;
}

void DeleteBackupErrorResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DeleteBackupErrorResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DeleteBackupErrorResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


