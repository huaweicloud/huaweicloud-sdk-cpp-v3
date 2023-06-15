

#include "huaweicloud/live/v1/model/RecordCallbackConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordCallbackConfigRequest::RecordCallbackConfigRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    notifyCallbackUrl_ = "";
    notifyCallbackUrlIsSet_ = false;
    notifyEventSubscriptionIsSet_ = false;
    signType_ = "";
    signTypeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

RecordCallbackConfigRequest::~RecordCallbackConfigRequest() = default;

void RecordCallbackConfigRequest::validate()
{
}

web::json::value RecordCallbackConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(notifyCallbackUrlIsSet_) {
        val[utility::conversions::to_string_t("notify_callback_url")] = ModelBase::toJson(notifyCallbackUrl_);
    }
    if(notifyEventSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("notify_event_subscription")] = ModelBase::toJson(notifyEventSubscription_);
    }
    if(signTypeIsSet_) {
        val[utility::conversions::to_string_t("sign_type")] = ModelBase::toJson(signType_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}

bool RecordCallbackConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notify_callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notify_event_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_event_subscription"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyEventSubscription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string RecordCallbackConfigRequest::getPublishDomain() const
{
    return publishDomain_;
}

void RecordCallbackConfigRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool RecordCallbackConfigRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void RecordCallbackConfigRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string RecordCallbackConfigRequest::getApp() const
{
    return app_;
}

void RecordCallbackConfigRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool RecordCallbackConfigRequest::appIsSet() const
{
    return appIsSet_;
}

void RecordCallbackConfigRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string RecordCallbackConfigRequest::getNotifyCallbackUrl() const
{
    return notifyCallbackUrl_;
}

void RecordCallbackConfigRequest::setNotifyCallbackUrl(const std::string& value)
{
    notifyCallbackUrl_ = value;
    notifyCallbackUrlIsSet_ = true;
}

bool RecordCallbackConfigRequest::notifyCallbackUrlIsSet() const
{
    return notifyCallbackUrlIsSet_;
}

void RecordCallbackConfigRequest::unsetnotifyCallbackUrl()
{
    notifyCallbackUrlIsSet_ = false;
}

std::vector<std::string>& RecordCallbackConfigRequest::getNotifyEventSubscription()
{
    return notifyEventSubscription_;
}

void RecordCallbackConfigRequest::setNotifyEventSubscription(const std::vector<std::string>& value)
{
    notifyEventSubscription_ = value;
    notifyEventSubscriptionIsSet_ = true;
}

bool RecordCallbackConfigRequest::notifyEventSubscriptionIsSet() const
{
    return notifyEventSubscriptionIsSet_;
}

void RecordCallbackConfigRequest::unsetnotifyEventSubscription()
{
    notifyEventSubscriptionIsSet_ = false;
}

std::string RecordCallbackConfigRequest::getSignType() const
{
    return signType_;
}

void RecordCallbackConfigRequest::setSignType(const std::string& value)
{
    signType_ = value;
    signTypeIsSet_ = true;
}

bool RecordCallbackConfigRequest::signTypeIsSet() const
{
    return signTypeIsSet_;
}

void RecordCallbackConfigRequest::unsetsignType()
{
    signTypeIsSet_ = false;
}

std::string RecordCallbackConfigRequest::getKey() const
{
    return key_;
}

void RecordCallbackConfigRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool RecordCallbackConfigRequest::keyIsSet() const
{
    return keyIsSet_;
}

void RecordCallbackConfigRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


