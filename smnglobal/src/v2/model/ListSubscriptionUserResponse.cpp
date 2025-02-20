

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponse::ListSubscriptionUserResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    subscriptionUsersIsSet_ = false;
}

ListSubscriptionUserResponse::~ListSubscriptionUserResponse() = default;

void ListSubscriptionUserResponse::validate()
{
}

web::json::value ListSubscriptionUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(subscriptionUsersIsSet_) {
        val[utility::conversions::to_string_t("subscription_users")] = ModelBase::toJson(subscriptionUsers_);
    }

    return val;
}
bool ListSubscriptionUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_users"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSubscriptionUserResponseItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUsers(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionUserResponse::getRequestId() const
{
    return requestId_;
}

void ListSubscriptionUserResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListSubscriptionUserResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListSubscriptionUserResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListSubscriptionUserResponse::getCount() const
{
    return count_;
}

void ListSubscriptionUserResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSubscriptionUserResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSubscriptionUserResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ListSubscriptionUserResponseItemInfo>& ListSubscriptionUserResponse::getSubscriptionUsers()
{
    return subscriptionUsers_;
}

void ListSubscriptionUserResponse::setSubscriptionUsers(const std::vector<ListSubscriptionUserResponseItemInfo>& value)
{
    subscriptionUsers_ = value;
    subscriptionUsersIsSet_ = true;
}

bool ListSubscriptionUserResponse::subscriptionUsersIsSet() const
{
    return subscriptionUsersIsSet_;
}

void ListSubscriptionUserResponse::unsetsubscriptionUsers()
{
    subscriptionUsersIsSet_ = false;
}

}
}
}
}
}


