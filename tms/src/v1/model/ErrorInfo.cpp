

#include "huaweicloud/tms/v1/model/ErrorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ErrorInfo::ErrorInfo()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    settingName_ = "";
    settingNameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

ErrorInfo::~ErrorInfo() = default;

void ErrorInfo::validate()
{
}

web::json::value ErrorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(settingNameIsSet_) {
        val[utility::conversions::to_string_t("setting_name")] = ModelBase::toJson(settingName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool ErrorInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("setting_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string ErrorInfo::getErrorCode() const
{
    return errorCode_;
}

void ErrorInfo::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorInfo::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorInfo::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorInfo::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorInfo::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorInfo::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorInfo::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string ErrorInfo::getSettingName() const
{
    return settingName_;
}

void ErrorInfo::setSettingName(const std::string& value)
{
    settingName_ = value;
    settingNameIsSet_ = true;
}

bool ErrorInfo::settingNameIsSet() const
{
    return settingNameIsSet_;
}

void ErrorInfo::unsetsettingName()
{
    settingNameIsSet_ = false;
}

std::string ErrorInfo::getRegionId() const
{
    return regionId_;
}

void ErrorInfo::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ErrorInfo::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ErrorInfo::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


