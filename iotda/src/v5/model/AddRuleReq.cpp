

#include "huaweicloud/iotda/v5/model/AddRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddRuleReq::AddRuleReq()
{
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
}

AddRuleReq::~AddRuleReq() = default;

void AddRuleReq::validate()
{
}

web::json::value AddRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool AddRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string AddRuleReq::getRuleName() const
{
    return ruleName_;
}

void AddRuleReq::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool AddRuleReq::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void AddRuleReq::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string AddRuleReq::getDescription() const
{
    return description_;
}

void AddRuleReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddRuleReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddRuleReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

RoutingRuleSubject AddRuleReq::getSubject() const
{
    return subject_;
}

void AddRuleReq::setSubject(const RoutingRuleSubject& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool AddRuleReq::subjectIsSet() const
{
    return subjectIsSet_;
}

void AddRuleReq::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string AddRuleReq::getAppType() const
{
    return appType_;
}

void AddRuleReq::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool AddRuleReq::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void AddRuleReq::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string AddRuleReq::getAppId() const
{
    return appId_;
}

void AddRuleReq::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddRuleReq::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddRuleReq::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AddRuleReq::getSelect() const
{
    return select_;
}

void AddRuleReq::setSelect(const std::string& value)
{
    select_ = value;
    selectIsSet_ = true;
}

bool AddRuleReq::selectIsSet() const
{
    return selectIsSet_;
}

void AddRuleReq::unsetselect()
{
    selectIsSet_ = false;
}

std::string AddRuleReq::getWhere() const
{
    return where_;
}

void AddRuleReq::setWhere(const std::string& value)
{
    where_ = value;
    whereIsSet_ = true;
}

bool AddRuleReq::whereIsSet() const
{
    return whereIsSet_;
}

void AddRuleReq::unsetwhere()
{
    whereIsSet_ = false;
}

}
}
}
}
}


