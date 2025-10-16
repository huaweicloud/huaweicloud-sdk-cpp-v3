

#include "huaweicloud/rds/v3/model/CreateSubscription4PublicationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSubscription4PublicationInfo::CreateSubscription4PublicationInfo()
{
    subscriptionInstanceId_ = "";
    subscriptionInstanceIdIsSet_ = false;
    userInfoIsSet_ = false;
}

CreateSubscription4PublicationInfo::~CreateSubscription4PublicationInfo() = default;

void CreateSubscription4PublicationInfo::validate()
{
}

web::json::value CreateSubscription4PublicationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_instance_id")] = ModelBase::toJson(subscriptionInstanceId_);
    }
    if(userInfoIsSet_) {
        val[utility::conversions::to_string_t("user_info")] = ModelBase::toJson(userInfo_);
    }

    return val;
}
bool CreateSubscription4PublicationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_info"));
        if(!fieldValue.is_null())
        {
            ReplicationUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserInfo(refVal);
        }
    }
    return ok;
}


std::string CreateSubscription4PublicationInfo::getSubscriptionInstanceId() const
{
    return subscriptionInstanceId_;
}

void CreateSubscription4PublicationInfo::setSubscriptionInstanceId(const std::string& value)
{
    subscriptionInstanceId_ = value;
    subscriptionInstanceIdIsSet_ = true;
}

bool CreateSubscription4PublicationInfo::subscriptionInstanceIdIsSet() const
{
    return subscriptionInstanceIdIsSet_;
}

void CreateSubscription4PublicationInfo::unsetsubscriptionInstanceId()
{
    subscriptionInstanceIdIsSet_ = false;
}

ReplicationUserInfo CreateSubscription4PublicationInfo::getUserInfo() const
{
    return userInfo_;
}

void CreateSubscription4PublicationInfo::setUserInfo(const ReplicationUserInfo& value)
{
    userInfo_ = value;
    userInfoIsSet_ = true;
}

bool CreateSubscription4PublicationInfo::userInfoIsSet() const
{
    return userInfoIsSet_;
}

void CreateSubscription4PublicationInfo::unsetuserInfo()
{
    userInfoIsSet_ = false;
}

}
}
}
}
}


