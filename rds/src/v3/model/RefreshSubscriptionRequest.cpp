

#include "huaweicloud/rds/v3/model/RefreshSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RefreshSubscriptionRequest::RefreshSubscriptionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
}

RefreshSubscriptionRequest::~RefreshSubscriptionRequest() = default;

void RefreshSubscriptionRequest::validate()
{
}

web::json::value RefreshSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }

    return val;
}
bool RefreshSubscriptionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
    return ok;
}


std::string RefreshSubscriptionRequest::getXLanguage() const
{
    return xLanguage_;
}

void RefreshSubscriptionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RefreshSubscriptionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RefreshSubscriptionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RefreshSubscriptionRequest::getInstanceId() const
{
    return instanceId_;
}

void RefreshSubscriptionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RefreshSubscriptionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RefreshSubscriptionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RefreshSubscriptionRequest::getSubscriptionId() const
{
    return subscriptionId_;
}

void RefreshSubscriptionRequest::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool RefreshSubscriptionRequest::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void RefreshSubscriptionRequest::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

}
}
}
}
}


