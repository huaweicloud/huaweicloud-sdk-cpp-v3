

#include "huaweicloud/codehub/v4/model/UpdateRepoWebHookSubscriptionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepoWebHookSubscriptionDto::UpdateRepoWebHookSubscriptionDto()
{
    url_ = "";
    urlIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    mentionUsers_ = "";
    mentionUsersIsSet_ = false;
    mentionPhone_ = "";
    mentionPhoneIsSet_ = false;
}

UpdateRepoWebHookSubscriptionDto::~UpdateRepoWebHookSubscriptionDto() = default;

void UpdateRepoWebHookSubscriptionDto::validate()
{
}

web::json::value UpdateRepoWebHookSubscriptionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(mentionUsersIsSet_) {
        val[utility::conversions::to_string_t("mention_users")] = ModelBase::toJson(mentionUsers_);
    }
    if(mentionPhoneIsSet_) {
        val[utility::conversions::to_string_t("mention_phone")] = ModelBase::toJson(mentionPhone_);
    }

    return val;
}
bool UpdateRepoWebHookSubscriptionDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mention_users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mention_users"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMentionUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mention_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mention_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMentionPhone(refVal);
        }
    }
    return ok;
}


std::string UpdateRepoWebHookSubscriptionDto::getUrl() const
{
    return url_;
}

void UpdateRepoWebHookSubscriptionDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UpdateRepoWebHookSubscriptionDto::urlIsSet() const
{
    return urlIsSet_;
}

void UpdateRepoWebHookSubscriptionDto::unseturl()
{
    urlIsSet_ = false;
}

std::string UpdateRepoWebHookSubscriptionDto::getToken() const
{
    return token_;
}

void UpdateRepoWebHookSubscriptionDto::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool UpdateRepoWebHookSubscriptionDto::tokenIsSet() const
{
    return tokenIsSet_;
}

void UpdateRepoWebHookSubscriptionDto::unsettoken()
{
    tokenIsSet_ = false;
}

std::string UpdateRepoWebHookSubscriptionDto::getMentionUsers() const
{
    return mentionUsers_;
}

void UpdateRepoWebHookSubscriptionDto::setMentionUsers(const std::string& value)
{
    mentionUsers_ = value;
    mentionUsersIsSet_ = true;
}

bool UpdateRepoWebHookSubscriptionDto::mentionUsersIsSet() const
{
    return mentionUsersIsSet_;
}

void UpdateRepoWebHookSubscriptionDto::unsetmentionUsers()
{
    mentionUsersIsSet_ = false;
}

std::string UpdateRepoWebHookSubscriptionDto::getMentionPhone() const
{
    return mentionPhone_;
}

void UpdateRepoWebHookSubscriptionDto::setMentionPhone(const std::string& value)
{
    mentionPhone_ = value;
    mentionPhoneIsSet_ = true;
}

bool UpdateRepoWebHookSubscriptionDto::mentionPhoneIsSet() const
{
    return mentionPhoneIsSet_;
}

void UpdateRepoWebHookSubscriptionDto::unsetmentionPhone()
{
    mentionPhoneIsSet_ = false;
}

}
}
}
}
}


