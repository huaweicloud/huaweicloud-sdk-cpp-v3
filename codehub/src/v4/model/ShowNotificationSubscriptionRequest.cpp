

#include "huaweicloud/codehub/v4/model/ShowNotificationSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowNotificationSubscriptionRequest::ShowNotificationSubscriptionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowNotificationSubscriptionRequest::~ShowNotificationSubscriptionRequest() = default;

void ShowNotificationSubscriptionRequest::validate()
{
}

web::json::value ShowNotificationSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowNotificationSubscriptionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t ShowNotificationSubscriptionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowNotificationSubscriptionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowNotificationSubscriptionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowNotificationSubscriptionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowNotificationSubscriptionRequest::getType() const
{
    return type_;
}

void ShowNotificationSubscriptionRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowNotificationSubscriptionRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowNotificationSubscriptionRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


