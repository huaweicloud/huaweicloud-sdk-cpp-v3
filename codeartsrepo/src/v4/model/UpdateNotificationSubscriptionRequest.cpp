

#include "huaweicloud/codeartsrepo/v4/model/UpdateNotificationSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateNotificationSubscriptionRequest::UpdateNotificationSubscriptionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNotificationSubscriptionRequest::~UpdateNotificationSubscriptionRequest() = default;

void UpdateNotificationSubscriptionRequest::validate()
{
}

web::json::value UpdateNotificationSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNotificationSubscriptionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRepoNotificationSubscriptionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateNotificationSubscriptionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateNotificationSubscriptionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateNotificationSubscriptionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateNotificationSubscriptionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateNotificationSubscriptionRequest::getType() const
{
    return type_;
}

void UpdateNotificationSubscriptionRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateNotificationSubscriptionRequest::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateNotificationSubscriptionRequest::unsettype()
{
    typeIsSet_ = false;
}

UpdateRepoNotificationSubscriptionDto UpdateNotificationSubscriptionRequest::getBody() const
{
    return body_;
}

void UpdateNotificationSubscriptionRequest::setBody(const UpdateRepoNotificationSubscriptionDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNotificationSubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNotificationSubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


