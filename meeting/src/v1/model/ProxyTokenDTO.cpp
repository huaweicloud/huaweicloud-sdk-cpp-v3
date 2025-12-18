

#include "huaweicloud/meeting/v1/model/ProxyTokenDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ProxyTokenDTO::ProxyTokenDTO()
{
    accessToken_ = "";
    accessTokenIsSet_ = false;
    longAccessToken_ = "";
    longAccessTokenIsSet_ = false;
    validPeriod_ = 0L;
    validPeriodIsSet_ = false;
    middleEndUrl_ = "";
    middleEndUrlIsSet_ = false;
    middleEndInnerUrl_ = "";
    middleEndInnerUrlIsSet_ = false;
    enableRerouting_ = false;
    enableReroutingIsSet_ = false;
}

ProxyTokenDTO::~ProxyTokenDTO() = default;

void ProxyTokenDTO::validate()
{
}

web::json::value ProxyTokenDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessTokenIsSet_) {
        val[utility::conversions::to_string_t("accessToken")] = ModelBase::toJson(accessToken_);
    }
    if(longAccessTokenIsSet_) {
        val[utility::conversions::to_string_t("longAccessToken")] = ModelBase::toJson(longAccessToken_);
    }
    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("validPeriod")] = ModelBase::toJson(validPeriod_);
    }
    if(middleEndUrlIsSet_) {
        val[utility::conversions::to_string_t("middleEndUrl")] = ModelBase::toJson(middleEndUrl_);
    }
    if(middleEndInnerUrlIsSet_) {
        val[utility::conversions::to_string_t("middleEndInnerUrl")] = ModelBase::toJson(middleEndInnerUrl_);
    }
    if(enableReroutingIsSet_) {
        val[utility::conversions::to_string_t("enableRerouting")] = ModelBase::toJson(enableRerouting_);
    }

    return val;
}
bool ProxyTokenDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accessToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("longAccessToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("longAccessToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongAccessToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validPeriod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validPeriod"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middleEndUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middleEndUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleEndUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middleEndInnerUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middleEndInnerUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleEndInnerUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableRerouting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableRerouting"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableRerouting(refVal);
        }
    }
    return ok;
}


std::string ProxyTokenDTO::getAccessToken() const
{
    return accessToken_;
}

void ProxyTokenDTO::setAccessToken(const std::string& value)
{
    accessToken_ = value;
    accessTokenIsSet_ = true;
}

bool ProxyTokenDTO::accessTokenIsSet() const
{
    return accessTokenIsSet_;
}

void ProxyTokenDTO::unsetaccessToken()
{
    accessTokenIsSet_ = false;
}

std::string ProxyTokenDTO::getLongAccessToken() const
{
    return longAccessToken_;
}

void ProxyTokenDTO::setLongAccessToken(const std::string& value)
{
    longAccessToken_ = value;
    longAccessTokenIsSet_ = true;
}

bool ProxyTokenDTO::longAccessTokenIsSet() const
{
    return longAccessTokenIsSet_;
}

void ProxyTokenDTO::unsetlongAccessToken()
{
    longAccessTokenIsSet_ = false;
}

int64_t ProxyTokenDTO::getValidPeriod() const
{
    return validPeriod_;
}

void ProxyTokenDTO::setValidPeriod(int64_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool ProxyTokenDTO::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void ProxyTokenDTO::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string ProxyTokenDTO::getMiddleEndUrl() const
{
    return middleEndUrl_;
}

void ProxyTokenDTO::setMiddleEndUrl(const std::string& value)
{
    middleEndUrl_ = value;
    middleEndUrlIsSet_ = true;
}

bool ProxyTokenDTO::middleEndUrlIsSet() const
{
    return middleEndUrlIsSet_;
}

void ProxyTokenDTO::unsetmiddleEndUrl()
{
    middleEndUrlIsSet_ = false;
}

std::string ProxyTokenDTO::getMiddleEndInnerUrl() const
{
    return middleEndInnerUrl_;
}

void ProxyTokenDTO::setMiddleEndInnerUrl(const std::string& value)
{
    middleEndInnerUrl_ = value;
    middleEndInnerUrlIsSet_ = true;
}

bool ProxyTokenDTO::middleEndInnerUrlIsSet() const
{
    return middleEndInnerUrlIsSet_;
}

void ProxyTokenDTO::unsetmiddleEndInnerUrl()
{
    middleEndInnerUrlIsSet_ = false;
}

bool ProxyTokenDTO::isEnableRerouting() const
{
    return enableRerouting_;
}

void ProxyTokenDTO::setEnableRerouting(bool value)
{
    enableRerouting_ = value;
    enableReroutingIsSet_ = true;
}

bool ProxyTokenDTO::enableReroutingIsSet() const
{
    return enableReroutingIsSet_;
}

void ProxyTokenDTO::unsetenableRerouting()
{
    enableReroutingIsSet_ = false;
}

}
}
}
}
}


