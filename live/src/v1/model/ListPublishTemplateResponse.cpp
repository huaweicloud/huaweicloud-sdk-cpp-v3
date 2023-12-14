

#include "huaweicloud/live/v1/model/ListPublishTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListPublishTemplateResponse::ListPublishTemplateResponse()
{
    url_ = "";
    urlIsSet_ = false;
    authSignKey_ = "";
    authSignKeyIsSet_ = false;
    callBackArea_ = "";
    callBackAreaIsSet_ = false;
}

ListPublishTemplateResponse::~ListPublishTemplateResponse() = default;

void ListPublishTemplateResponse::validate()
{
}

web::json::value ListPublishTemplateResponse::toJson() const
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
bool ListPublishTemplateResponse::fromJson(const web::json::value& val)
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


std::string ListPublishTemplateResponse::getUrl() const
{
    return url_;
}

void ListPublishTemplateResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ListPublishTemplateResponse::urlIsSet() const
{
    return urlIsSet_;
}

void ListPublishTemplateResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string ListPublishTemplateResponse::getAuthSignKey() const
{
    return authSignKey_;
}

void ListPublishTemplateResponse::setAuthSignKey(const std::string& value)
{
    authSignKey_ = value;
    authSignKeyIsSet_ = true;
}

bool ListPublishTemplateResponse::authSignKeyIsSet() const
{
    return authSignKeyIsSet_;
}

void ListPublishTemplateResponse::unsetauthSignKey()
{
    authSignKeyIsSet_ = false;
}

std::string ListPublishTemplateResponse::getCallBackArea() const
{
    return callBackArea_;
}

void ListPublishTemplateResponse::setCallBackArea(const std::string& value)
{
    callBackArea_ = value;
    callBackAreaIsSet_ = true;
}

bool ListPublishTemplateResponse::callBackAreaIsSet() const
{
    return callBackAreaIsSet_;
}

void ListPublishTemplateResponse::unsetcallBackArea()
{
    callBackAreaIsSet_ = false;
}

}
}
}
}
}


