

#include "huaweicloud/lts/v2/model/SqlNotificationSaveRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




SqlNotificationSaveRule::SqlNotificationSaveRule()
{
    language_ = "";
    languageIsSet_ = false;
    timezone_ = "";
    timezoneIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    topicsIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
}

SqlNotificationSaveRule::~SqlNotificationSaveRule() = default;

void SqlNotificationSaveRule::validate()
{
}

web::json::value SqlNotificationSaveRule::toJson() const
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
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }

    return val;
}

bool SqlNotificationSaveRule::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    return ok;
}

std::string SqlNotificationSaveRule::getLanguage() const
{
    return language_;
}

void SqlNotificationSaveRule::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool SqlNotificationSaveRule::languageIsSet() const
{
    return languageIsSet_;
}

void SqlNotificationSaveRule::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string SqlNotificationSaveRule::getTimezone() const
{
    return timezone_;
}

void SqlNotificationSaveRule::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool SqlNotificationSaveRule::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void SqlNotificationSaveRule::unsettimezone()
{
    timezoneIsSet_ = false;
}

std::string SqlNotificationSaveRule::getUserName() const
{
    return userName_;
}

void SqlNotificationSaveRule::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SqlNotificationSaveRule::userNameIsSet() const
{
    return userNameIsSet_;
}

void SqlNotificationSaveRule::unsetuserName()
{
    userNameIsSet_ = false;
}

std::vector<Topics>& SqlNotificationSaveRule::getTopics()
{
    return topics_;
}

void SqlNotificationSaveRule::setTopics(const std::vector<Topics>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool SqlNotificationSaveRule::topicsIsSet() const
{
    return topicsIsSet_;
}

void SqlNotificationSaveRule::unsettopics()
{
    topicsIsSet_ = false;
}

std::string SqlNotificationSaveRule::getTemplateName() const
{
    return templateName_;
}

void SqlNotificationSaveRule::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool SqlNotificationSaveRule::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void SqlNotificationSaveRule::unsettemplateName()
{
    templateNameIsSet_ = false;
}

}
}
}
}
}


