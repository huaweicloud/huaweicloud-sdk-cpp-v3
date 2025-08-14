

#include "huaweicloud/iotda/v5/model/UpdateRoutingRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRoutingRuleResponse::UpdateRoutingRuleResponse()
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

UpdateRoutingRuleResponse::~UpdateRoutingRuleResponse() = default;

void UpdateRoutingRuleResponse::validate()
{
}

web::json::value UpdateRoutingRuleResponse::toJson() const
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
bool UpdateRoutingRuleResponse::fromJson(const web::json::value& val)
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


std::string UpdateRoutingRuleResponse::getRuleId() const
{
    return ruleId_;
}

void UpdateRoutingRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRoutingRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRoutingRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string UpdateRoutingRuleResponse::getRuleName() const
{
    return ruleName_;
}

void UpdateRoutingRuleResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool UpdateRoutingRuleResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void UpdateRoutingRuleResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string UpdateRoutingRuleResponse::getDescription() const
{
    return description_;
}

void UpdateRoutingRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRoutingRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRoutingRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

RoutingRuleSubject UpdateRoutingRuleResponse::getSubject() const
{
    return subject_;
}

void UpdateRoutingRuleResponse::setSubject(const RoutingRuleSubject& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool UpdateRoutingRuleResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void UpdateRoutingRuleResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string UpdateRoutingRuleResponse::getAppType() const
{
    return appType_;
}

void UpdateRoutingRuleResponse::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool UpdateRoutingRuleResponse::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void UpdateRoutingRuleResponse::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string UpdateRoutingRuleResponse::getAppId() const
{
    return appId_;
}

void UpdateRoutingRuleResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateRoutingRuleResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateRoutingRuleResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UpdateRoutingRuleResponse::getSelect() const
{
    return select_;
}

void UpdateRoutingRuleResponse::setSelect(const std::string& value)
{
    select_ = value;
    selectIsSet_ = true;
}

bool UpdateRoutingRuleResponse::selectIsSet() const
{
    return selectIsSet_;
}

void UpdateRoutingRuleResponse::unsetselect()
{
    selectIsSet_ = false;
}

std::string UpdateRoutingRuleResponse::getWhere() const
{
    return where_;
}

void UpdateRoutingRuleResponse::setWhere(const std::string& value)
{
    where_ = value;
    whereIsSet_ = true;
}

bool UpdateRoutingRuleResponse::whereIsSet() const
{
    return whereIsSet_;
}

void UpdateRoutingRuleResponse::unsetwhere()
{
    whereIsSet_ = false;
}

bool UpdateRoutingRuleResponse::isActive() const
{
    return active_;
}

void UpdateRoutingRuleResponse::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool UpdateRoutingRuleResponse::activeIsSet() const
{
    return activeIsSet_;
}

void UpdateRoutingRuleResponse::unsetactive()
{
    activeIsSet_ = false;
}

}
}
}
}
}


