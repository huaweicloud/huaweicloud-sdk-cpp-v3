

#include "huaweicloud/codehub/v4/model/RepoWebHookSubscriptionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepoWebHookSubscriptionDto::RepoWebHookSubscriptionDto()
{
    url_ = "";
    urlIsSet_ = false;
    mentionUsers_ = "";
    mentionUsersIsSet_ = false;
    mentionPhone_ = "";
    mentionPhoneIsSet_ = false;
    hasToken_ = false;
    hasTokenIsSet_ = false;
}

RepoWebHookSubscriptionDto::~RepoWebHookSubscriptionDto() = default;

void RepoWebHookSubscriptionDto::validate()
{
}

web::json::value RepoWebHookSubscriptionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(mentionUsersIsSet_) {
        val[utility::conversions::to_string_t("mention_users")] = ModelBase::toJson(mentionUsers_);
    }
    if(mentionPhoneIsSet_) {
        val[utility::conversions::to_string_t("mention_phone")] = ModelBase::toJson(mentionPhone_);
    }
    if(hasTokenIsSet_) {
        val[utility::conversions::to_string_t("has_token")] = ModelBase::toJson(hasToken_);
    }

    return val;
}
bool RepoWebHookSubscriptionDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("has_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_token"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasToken(refVal);
        }
    }
    return ok;
}


std::string RepoWebHookSubscriptionDto::getUrl() const
{
    return url_;
}

void RepoWebHookSubscriptionDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RepoWebHookSubscriptionDto::urlIsSet() const
{
    return urlIsSet_;
}

void RepoWebHookSubscriptionDto::unseturl()
{
    urlIsSet_ = false;
}

std::string RepoWebHookSubscriptionDto::getMentionUsers() const
{
    return mentionUsers_;
}

void RepoWebHookSubscriptionDto::setMentionUsers(const std::string& value)
{
    mentionUsers_ = value;
    mentionUsersIsSet_ = true;
}

bool RepoWebHookSubscriptionDto::mentionUsersIsSet() const
{
    return mentionUsersIsSet_;
}

void RepoWebHookSubscriptionDto::unsetmentionUsers()
{
    mentionUsersIsSet_ = false;
}

std::string RepoWebHookSubscriptionDto::getMentionPhone() const
{
    return mentionPhone_;
}

void RepoWebHookSubscriptionDto::setMentionPhone(const std::string& value)
{
    mentionPhone_ = value;
    mentionPhoneIsSet_ = true;
}

bool RepoWebHookSubscriptionDto::mentionPhoneIsSet() const
{
    return mentionPhoneIsSet_;
}

void RepoWebHookSubscriptionDto::unsetmentionPhone()
{
    mentionPhoneIsSet_ = false;
}

bool RepoWebHookSubscriptionDto::isHasToken() const
{
    return hasToken_;
}

void RepoWebHookSubscriptionDto::setHasToken(bool value)
{
    hasToken_ = value;
    hasTokenIsSet_ = true;
}

bool RepoWebHookSubscriptionDto::hasTokenIsSet() const
{
    return hasTokenIsSet_;
}

void RepoWebHookSubscriptionDto::unsethasToken()
{
    hasTokenIsSet_ = false;
}

}
}
}
}
}


