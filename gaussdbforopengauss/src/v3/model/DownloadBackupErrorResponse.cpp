

#include "huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupErrorResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DownloadBackupErrorResponse::DownloadBackupErrorResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DownloadBackupErrorResponse::~DownloadBackupErrorResponse() = default;

void DownloadBackupErrorResponse::validate()
{
}

web::json::value DownloadBackupErrorResponse::toJson() const
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

bool DownloadBackupErrorResponse::fromJson(const web::json::value& val)
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

std::string DownloadBackupErrorResponse::getErrorCode() const
{
    return errorCode_;
}

void DownloadBackupErrorResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DownloadBackupErrorResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DownloadBackupErrorResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DownloadBackupErrorResponse::getErrorMsg() const
{
    return errorMsg_;
}

void DownloadBackupErrorResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DownloadBackupErrorResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DownloadBackupErrorResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


