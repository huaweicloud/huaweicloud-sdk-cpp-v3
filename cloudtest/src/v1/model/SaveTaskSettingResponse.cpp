

#include "huaweicloud/cloudtest/v1/model/SaveTaskSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SaveTaskSettingResponse::SaveTaskSettingResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

SaveTaskSettingResponse::~SaveTaskSettingResponse() = default;

void SaveTaskSettingResponse::validate()
{
}

web::json::value SaveTaskSettingResponse::toJson() const
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
bool SaveTaskSettingResponse::fromJson(const web::json::value& val)
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


std::string SaveTaskSettingResponse::getErrorCode() const
{
    return errorCode_;
}

void SaveTaskSettingResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool SaveTaskSettingResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void SaveTaskSettingResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string SaveTaskSettingResponse::getErrorMsg() const
{
    return errorMsg_;
}

void SaveTaskSettingResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool SaveTaskSettingResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void SaveTaskSettingResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


