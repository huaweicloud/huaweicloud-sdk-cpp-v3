

#include "huaweicloud/iotda/v5/model/ShowRoutingRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRoutingRuleResponse::ShowRoutingRuleResponse()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    subjectIsSet_ = false;
    appType_ = "";
    appTypeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    select_ = "";
    selectIsSet_ = false;
    where_ = "";
    whereIsSet_ = false;
    active_ = false;
    activeIsSet_ = false;
}

ShowRoutingRuleResponse::~ShowRoutingRuleResponse() = default;

void ShowRoutingRuleResponse::validate()
{
}

web::json::value ShowRoutingRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(selectIsSet_) {
        val[utility::conversions::to_string_t("select")] = ModelBase::toJson(select_);
    }
    if(whereIsSet_) {
        val[utility::conversions::to_string_t("where")] = ModelBase::toJson(where_);
    }
    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
    }

    return val;
}
bool ShowRoutingRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            RoutingRuleSubject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("select"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("where"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("where"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhere(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
        }
    }
    return ok;
}


std::string ShowRoutingRuleResponse::getRuleId() const
{
    return ruleId_;
}

void ShowRoutingRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowRoutingRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowRoutingRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string ShowRoutingRuleResponse::getRuleName() const
{
    return ruleName_;
}

void ShowRoutingRuleResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ShowRoutingRuleResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ShowRoutingRuleResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string ShowRoutingRuleResponse::getDescription() const
{
    return description_;
}

void ShowRoutingRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowRoutingRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowRoutingRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

RoutingRuleSubject ShowRoutingRuleResponse::getSubject() const
{
    return subject_;
}

void ShowRoutingRuleResponse::setSubject(const RoutingRuleSubject& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ShowRoutingRuleResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void ShowRoutingRuleResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ShowRoutingRuleResponse::getAppType() const
{
    return appType_;
}

void ShowRoutingRuleResponse::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool ShowRoutingRuleResponse::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void ShowRoutingRuleResponse::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string ShowRoutingRuleResponse::getAppId() const
{
    return appId_;
}

void ShowRoutingRuleResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowRoutingRuleResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowRoutingRuleResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowRoutingRuleResponse::getSelect() const
{
    return select_;
}

void ShowRoutingRuleResponse::setSelect(const std::string& value)
{
    select_ = value;
    selectIsSet_ = true;
}

bool ShowRoutingRuleResponse::selectIsSet() const
{
    return selectIsSet_;
}

void ShowRoutingRuleResponse::unsetselect()
{
    selectIsSet_ = false;
}

std::string ShowRoutingRuleResponse::getWhere() const
{
    return where_;
}

void ShowRoutingRuleResponse::setWhere(const std::string& value)
{
    where_ = value;
    whereIsSet_ = true;
}

bool ShowRoutingRuleResponse::whereIsSet() const
{
    return whereIsSet_;
}

void ShowRoutingRuleResponse::unsetwhere()
{
    whereIsSet_ = false;
}

bool ShowRoutingRuleResponse::isActive() const
{
    return active_;
}

void ShowRoutingRuleResponse::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool ShowRoutingRuleResponse::activeIsSet() const
{
    return activeIsSet_;
}

void ShowRoutingRuleResponse::unsetactive()
{
    activeIsSet_ = false;
}

}
}
}
}
}


