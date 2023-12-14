

#include "huaweicloud/live/v1/model/CallbackUrl.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CallbackUrl::CallbackUrl()
{
    url_ = "";
    urlIsSet_ = false;
    authSignKey_ = "";
    authSignKeyIsSet_ = false;
    callBackArea_ = "";
    callBackAreaIsSet_ = false;
}

CallbackUrl::~CallbackUrl() = default;

void CallbackUrl::validate()
{
}

web::json::value CallbackUrl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(authSignKeyIsSet_) {
        val[utility::conversions::to_string_t("auth_sign_key")] = ModelBase::toJson(authSignKey_);
    }
    if(callBackAreaIsSet_) {
        val[utility::conversions::to_string_t("call_back_area")] = ModelBase::toJson(callBackArea_);
    }

    return val;
}
bool CallbackUrl::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_sign_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_sign_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthSignKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("call_back_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("call_back_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallBackArea(refVal);
        }
    }
    return ok;
}


std::string CallbackUrl::getUrl() const
{
    return url_;
}

void CallbackUrl::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CallbackUrl::urlIsSet() const
{
    return urlIsSet_;
}

void CallbackUrl::unseturl()
{
    urlIsSet_ = false;
}

std::string CallbackUrl::getAuthSignKey() const
{
    return authSignKey_;
}

void CallbackUrl::setAuthSignKey(const std::string& value)
{
    authSignKey_ = value;
    authSignKeyIsSet_ = true;
}

bool CallbackUrl::authSignKeyIsSet() const
{
    return authSignKeyIsSet_;
}

void CallbackUrl::unsetauthSignKey()
{
    authSignKeyIsSet_ = false;
}

std::string CallbackUrl::getCallBackArea() const
{
    return callBackArea_;
}

void CallbackUrl::setCallBackArea(const std::string& value)
{
    callBackArea_ = value;
    callBackAreaIsSet_ = true;
}

bool CallbackUrl::callBackAreaIsSet() const
{
    return callBackAreaIsSet_;
}

void CallbackUrl::unsetcallBackArea()
{
    callBackAreaIsSet_ = false;
}

}
}
}
}
}


