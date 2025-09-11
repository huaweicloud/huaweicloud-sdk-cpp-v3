

#include "huaweicloud/dbss/v1/model/ListAuditRuleRisksNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditRuleRisksNewRequest::ListAuditRuleRisksNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    riskLevels_ = "";
    riskLevelsIsSet_ = false;
    supportDbClassifyRule_ = false;
    supportDbClassifyRuleIsSet_ = false;
}

ListAuditRuleRisksNewRequest::~ListAuditRuleRisksNewRequest() = default;

void ListAuditRuleRisksNewRequest::validate()
{
}

web::json::value ListAuditRuleRisksNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(riskLevelsIsSet_) {
        val[utility::conversions::to_string_t("risk_levels")] = ModelBase::toJson(riskLevels_);
    }
    if(supportDbClassifyRuleIsSet_) {
        val[utility::conversions::to_string_t("support_db_classify_rule")] = ModelBase::toJson(supportDbClassifyRule_);
    }

    return val;
}
bool ListAuditRuleRisksNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_levels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_levels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_db_classify_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_db_classify_rule"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportDbClassifyRule(refVal);
        }
    }
    return ok;
}


std::string ListAuditRuleRisksNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditRuleRisksNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditRuleRisksNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditRuleRisksNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditRuleRisksNewRequest::getName() const
{
    return name_;
}

void ListAuditRuleRisksNewRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAuditRuleRisksNewRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAuditRuleRisksNewRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAuditRuleRisksNewRequest::getRiskLevels() const
{
    return riskLevels_;
}

void ListAuditRuleRisksNewRequest::setRiskLevels(const std::string& value)
{
    riskLevels_ = value;
    riskLevelsIsSet_ = true;
}

bool ListAuditRuleRisksNewRequest::riskLevelsIsSet() const
{
    return riskLevelsIsSet_;
}

void ListAuditRuleRisksNewRequest::unsetriskLevels()
{
    riskLevelsIsSet_ = false;
}

bool ListAuditRuleRisksNewRequest::isSupportDbClassifyRule() const
{
    return supportDbClassifyRule_;
}

void ListAuditRuleRisksNewRequest::setSupportDbClassifyRule(bool value)
{
    supportDbClassifyRule_ = value;
    supportDbClassifyRuleIsSet_ = true;
}

bool ListAuditRuleRisksNewRequest::supportDbClassifyRuleIsSet() const
{
    return supportDbClassifyRuleIsSet_;
}

void ListAuditRuleRisksNewRequest::unsetsupportDbClassifyRule()
{
    supportDbClassifyRuleIsSet_ = false;
}

}
}
}
}
}


