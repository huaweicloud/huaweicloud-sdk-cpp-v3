

#include "huaweicloud/iotda/v5/model/UpdateRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateRuleReq::UpdateRuleReq()
{
    ruleName_ = "";
    ruleNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    select_ = "";
    selectIsSet_ = false;
    where_ = "";
    whereIsSet_ = false;
    active_ = false;
    activeIsSet_ = false;
}

UpdateRuleReq::~UpdateRuleReq() = default;

void UpdateRuleReq::validate()
{
}

web::json::value UpdateRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
bool UpdateRuleReq::fromJson(const web::json::value& val)
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


std::string UpdateRuleReq::getRuleName() const
{
    return ruleName_;
}

void UpdateRuleReq::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool UpdateRuleReq::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void UpdateRuleReq::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string UpdateRuleReq::getDescription() const
{
    return description_;
}

void UpdateRuleReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRuleReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRuleReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateRuleReq::getSelect() const
{
    return select_;
}

void UpdateRuleReq::setSelect(const std::string& value)
{
    select_ = value;
    selectIsSet_ = true;
}

bool UpdateRuleReq::selectIsSet() const
{
    return selectIsSet_;
}

void UpdateRuleReq::unsetselect()
{
    selectIsSet_ = false;
}

std::string UpdateRuleReq::getWhere() const
{
    return where_;
}

void UpdateRuleReq::setWhere(const std::string& value)
{
    where_ = value;
    whereIsSet_ = true;
}

bool UpdateRuleReq::whereIsSet() const
{
    return whereIsSet_;
}

void UpdateRuleReq::unsetwhere()
{
    whereIsSet_ = false;
}

bool UpdateRuleReq::isActive() const
{
    return active_;
}

void UpdateRuleReq::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool UpdateRuleReq::activeIsSet() const
{
    return activeIsSet_;
}

void UpdateRuleReq::unsetactive()
{
    activeIsSet_ = false;
}

}
}
}
}
}


