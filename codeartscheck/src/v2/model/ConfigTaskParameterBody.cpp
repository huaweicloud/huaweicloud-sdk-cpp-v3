

#include "huaweicloud/codeartscheck/v2/model/ConfigTaskParameterBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ConfigTaskParameterBody::ConfigTaskParameterBody()
{
    checkId_ = 0;
    checkIdIsSet_ = false;
    rulesetId_ = "";
    rulesetIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    taskCheckSettingsIsSet_ = false;
}

ConfigTaskParameterBody::~ConfigTaskParameterBody() = default;

void ConfigTaskParameterBody::validate()
{
}

web::json::value ConfigTaskParameterBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkIdIsSet_) {
        val[utility::conversions::to_string_t("check_id")] = ModelBase::toJson(checkId_);
    }
    if(rulesetIdIsSet_) {
        val[utility::conversions::to_string_t("ruleset_id")] = ModelBase::toJson(rulesetId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(taskCheckSettingsIsSet_) {
        val[utility::conversions::to_string_t("task_check_settings")] = ModelBase::toJson(taskCheckSettings_);
    }

    return val;
}
bool ConfigTaskParameterBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRulesetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_check_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_check_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskCheckSettingsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskCheckSettings(refVal);
        }
    }
    return ok;
}


int32_t ConfigTaskParameterBody::getCheckId() const
{
    return checkId_;
}

void ConfigTaskParameterBody::setCheckId(int32_t value)
{
    checkId_ = value;
    checkIdIsSet_ = true;
}

bool ConfigTaskParameterBody::checkIdIsSet() const
{
    return checkIdIsSet_;
}

void ConfigTaskParameterBody::unsetcheckId()
{
    checkIdIsSet_ = false;
}

std::string ConfigTaskParameterBody::getRulesetId() const
{
    return rulesetId_;
}

void ConfigTaskParameterBody::setRulesetId(const std::string& value)
{
    rulesetId_ = value;
    rulesetIdIsSet_ = true;
}

bool ConfigTaskParameterBody::rulesetIdIsSet() const
{
    return rulesetIdIsSet_;
}

void ConfigTaskParameterBody::unsetrulesetId()
{
    rulesetIdIsSet_ = false;
}

std::string ConfigTaskParameterBody::getLanguage() const
{
    return language_;
}

void ConfigTaskParameterBody::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ConfigTaskParameterBody::languageIsSet() const
{
    return languageIsSet_;
}

void ConfigTaskParameterBody::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ConfigTaskParameterBody::getStatus() const
{
    return status_;
}

void ConfigTaskParameterBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ConfigTaskParameterBody::statusIsSet() const
{
    return statusIsSet_;
}

void ConfigTaskParameterBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<TaskCheckSettingsItem>& ConfigTaskParameterBody::getTaskCheckSettings()
{
    return taskCheckSettings_;
}

void ConfigTaskParameterBody::setTaskCheckSettings(const std::vector<TaskCheckSettingsItem>& value)
{
    taskCheckSettings_ = value;
    taskCheckSettingsIsSet_ = true;
}

bool ConfigTaskParameterBody::taskCheckSettingsIsSet() const
{
    return taskCheckSettingsIsSet_;
}

void ConfigTaskParameterBody::unsettaskCheckSettings()
{
    taskCheckSettingsIsSet_ = false;
}

}
}
}
}
}


