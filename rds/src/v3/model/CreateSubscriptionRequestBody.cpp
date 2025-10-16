

#include "huaweicloud/rds/v3/model/CreateSubscriptionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSubscriptionRequestBody::CreateSubscriptionRequestBody()
{
    subscriptionsIsSet_ = false;
    currentPublicationId_ = "";
    currentPublicationIdIsSet_ = false;
}

CreateSubscriptionRequestBody::~CreateSubscriptionRequestBody() = default;

void CreateSubscriptionRequestBody::validate()
{
}

web::json::value CreateSubscriptionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsIsSet_) {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(subscriptions_);
    }
    if(currentPublicationIdIsSet_) {
        val[utility::conversions::to_string_t("current_publication_id")] = ModelBase::toJson(currentPublicationId_);
    }

    return val;
}
bool CreateSubscriptionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscriptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateSubscriptionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_publication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_publication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentPublicationId(refVal);
        }
    }
    return ok;
}


std::vector<CreateSubscriptionInfo>& CreateSubscriptionRequestBody::getSubscriptions()
{
    return subscriptions_;
}

void CreateSubscriptionRequestBody::setSubscriptions(const std::vector<CreateSubscriptionInfo>& value)
{
    subscriptions_ = value;
    subscriptionsIsSet_ = true;
}

bool CreateSubscriptionRequestBody::subscriptionsIsSet() const
{
    return subscriptionsIsSet_;
}

void CreateSubscriptionRequestBody::unsetsubscriptions()
{
    subscriptionsIsSet_ = false;
}

std::string CreateSubscriptionRequestBody::getCurrentPublicationId() const
{
    return currentPublicationId_;
}

void CreateSubscriptionRequestBody::setCurrentPublicationId(const std::string& value)
{
    currentPublicationId_ = value;
    currentPublicationIdIsSet_ = true;
}

bool CreateSubscriptionRequestBody::currentPublicationIdIsSet() const
{
    return currentPublicationIdIsSet_;
}

void CreateSubscriptionRequestBody::unsetcurrentPublicationId()
{
    currentPublicationIdIsSet_ = false;
}

}
}
}
}
}


