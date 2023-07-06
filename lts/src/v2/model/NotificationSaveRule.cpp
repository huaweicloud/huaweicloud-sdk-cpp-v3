

#include "huaweicloud/lts/v2/model/NotificationSaveRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




NotificationSaveRule::NotificationSaveRule()
{
    language_ = "";
    languageIsSet_ = false;
    timezone_ = "";
    timezoneIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    topicsIsSet_ = false;
}

NotificationSaveRule::~NotificationSaveRule() = default;

void NotificationSaveRule::validate()
{
}

web::json::value NotificationSaveRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(timezoneIsSet_) {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(timezone_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(topicsIsSet_) {
        val[utility::conversions::to_string_t("topics")] = ModelBase::toJson(topics_);
    }

    return val;
}

bool NotificationSaveRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timezone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timezone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimezone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topics"));
        if(!fieldValue.is_null())
        {
            std::vector<Topics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
        }
    }
    return ok;
}

std::string NotificationSaveRule::getLanguage() const
{
    return language_;
}

void NotificationSaveRule::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool NotificationSaveRule::languageIsSet() const
{
    return languageIsSet_;
}

void NotificationSaveRule::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string NotificationSaveRule::getTimezone() const
{
    return timezone_;
}

void NotificationSaveRule::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool NotificationSaveRule::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void NotificationSaveRule::unsettimezone()
{
    timezoneIsSet_ = false;
}

std::string NotificationSaveRule::getUserName() const
{
    return userName_;
}

void NotificationSaveRule::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool NotificationSaveRule::userNameIsSet() const
{
    return userNameIsSet_;
}

void NotificationSaveRule::unsetuserName()
{
    userNameIsSet_ = false;
}

std::vector<Topics>& NotificationSaveRule::getTopics()
{
    return topics_;
}

void NotificationSaveRule::setTopics(const std::vector<Topics>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool NotificationSaveRule::topicsIsSet() const
{
    return topicsIsSet_;
}

void NotificationSaveRule::unsettopics()
{
    topicsIsSet_ = false;
}

}
}
}
}
}


