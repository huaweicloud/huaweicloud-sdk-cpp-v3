

#include "huaweicloud/iotda/v5/model/CreateRoutingRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRoutingRuleResponse::CreateRoutingRuleResponse()
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

CreateRoutingRuleResponse::~CreateRoutingRuleResponse() = default;

void CreateRoutingRuleResponse::validate()
{
}

web::json::value CreateRoutingRuleResponse::toJson() const
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
bool CreateRoutingRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateRoutingRuleResponse::getRuleId() const
{
    return ruleId_;
}

void CreateRoutingRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool CreateRoutingRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void CreateRoutingRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string CreateRoutingRuleResponse::getRuleName() const
{
    return ruleName_;
}

void CreateRoutingRuleResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool CreateRoutingRuleResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void CreateRoutingRuleResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string CreateRoutingRuleResponse::getDescription() const
{
    return description_;
}

void CreateRoutingRuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateRoutingRuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateRoutingRuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

RoutingRuleSubject CreateRoutingRuleResponse::getSubject() const
{
    return subject_;
}

void CreateRoutingRuleResponse::setSubject(const RoutingRuleSubject& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool CreateRoutingRuleResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void CreateRoutingRuleResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string CreateRoutingRuleResponse::getAppType() const
{
    return appType_;
}

void CreateRoutingRuleResponse::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool CreateRoutingRuleResponse::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void CreateRoutingRuleResponse::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string CreateRoutingRuleResponse::getAppId() const
{
    return appId_;
}

void CreateRoutingRuleResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateRoutingRuleResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateRoutingRuleResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateRoutingRuleResponse::getSelect() const
{
    return select_;
}

void CreateRoutingRuleResponse::setSelect(const std::string& value)
{
    select_ = value;
    selectIsSet_ = true;
}

bool CreateRoutingRuleResponse::selectIsSet() const
{
    return selectIsSet_;
}

void CreateRoutingRuleResponse::unsetselect()
{
    selectIsSet_ = false;
}

std::string CreateRoutingRuleResponse::getWhere() const
{
    return where_;
}

void CreateRoutingRuleResponse::setWhere(const std::string& value)
{
    where_ = value;
    whereIsSet_ = true;
}

bool CreateRoutingRuleResponse::whereIsSet() const
{
    return whereIsSet_;
}

void CreateRoutingRuleResponse::unsetwhere()
{
    whereIsSet_ = false;
}

bool CreateRoutingRuleResponse::isActive() const
{
    return active_;
}

void CreateRoutingRuleResponse::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool CreateRoutingRuleResponse::activeIsSet() const
{
    return activeIsSet_;
}

void CreateRoutingRuleResponse::unsetactive()
{
    activeIsSet_ = false;
}

}
}
}
}
}


