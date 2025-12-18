

#include "huaweicloud/meeting/v1/model/WebHookConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




WebHookConfigRequest::WebHookConfigRequest()
{
    corpId_ = "";
    corpIdIsSet_ = false;
    spId_ = "";
    spIdIsSet_ = false;
    subscriberId_ = "";
    subscriberIdIsSet_ = false;
    subscriberKey_ = "";
    subscriberKeyIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

WebHookConfigRequest::~WebHookConfigRequest() = default;

void WebHookConfigRequest::validate()
{
}

web::json::value WebHookConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corpId")] = ModelBase::toJson(corpId_);
    }
    if(spIdIsSet_) {
        val[utility::conversions::to_string_t("spId")] = ModelBase::toJson(spId_);
    }
    if(subscriberIdIsSet_) {
        val[utility::conversions::to_string_t("subscriberId")] = ModelBase::toJson(subscriberId_);
    }
    if(subscriberKeyIsSet_) {
        val[utility::conversions::to_string_t("subscriberKey")] = ModelBase::toJson(subscriberKey_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool WebHookConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("corpId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriberId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriberId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriberKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriberKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string WebHookConfigRequest::getCorpId() const
{
    return corpId_;
}

void WebHookConfigRequest::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool WebHookConfigRequest::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void WebHookConfigRequest::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string WebHookConfigRequest::getSpId() const
{
    return spId_;
}

void WebHookConfigRequest::setSpId(const std::string& value)
{
    spId_ = value;
    spIdIsSet_ = true;
}

bool WebHookConfigRequest::spIdIsSet() const
{
    return spIdIsSet_;
}

void WebHookConfigRequest::unsetspId()
{
    spIdIsSet_ = false;
}

std::string WebHookConfigRequest::getSubscriberId() const
{
    return subscriberId_;
}

void WebHookConfigRequest::setSubscriberId(const std::string& value)
{
    subscriberId_ = value;
    subscriberIdIsSet_ = true;
}

bool WebHookConfigRequest::subscriberIdIsSet() const
{
    return subscriberIdIsSet_;
}

void WebHookConfigRequest::unsetsubscriberId()
{
    subscriberIdIsSet_ = false;
}

std::string WebHookConfigRequest::getSubscriberKey() const
{
    return subscriberKey_;
}

void WebHookConfigRequest::setSubscriberKey(const std::string& value)
{
    subscriberKey_ = value;
    subscriberKeyIsSet_ = true;
}

bool WebHookConfigRequest::subscriberKeyIsSet() const
{
    return subscriberKeyIsSet_;
}

void WebHookConfigRequest::unsetsubscriberKey()
{
    subscriberKeyIsSet_ = false;
}

std::string WebHookConfigRequest::getUrl() const
{
    return url_;
}

void WebHookConfigRequest::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WebHookConfigRequest::urlIsSet() const
{
    return urlIsSet_;
}

void WebHookConfigRequest::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


