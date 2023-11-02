

#include "huaweicloud/dbss/v1/model/ListAuditRuleRisksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditRuleRisksRequest::ListAuditRuleRisksRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    riskLevels_ = "";
    riskLevelsIsSet_ = false;
}

ListAuditRuleRisksRequest::~ListAuditRuleRisksRequest() = default;

void ListAuditRuleRisksRequest::validate()
{
}

web::json::value ListAuditRuleRisksRequest::toJson() const
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

    return val;
}
bool ListAuditRuleRisksRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListAuditRuleRisksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditRuleRisksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditRuleRisksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditRuleRisksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditRuleRisksRequest::getName() const
{
    return name_;
}

void ListAuditRuleRisksRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAuditRuleRisksRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAuditRuleRisksRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAuditRuleRisksRequest::getRiskLevels() const
{
    return riskLevels_;
}

void ListAuditRuleRisksRequest::setRiskLevels(const std::string& value)
{
    riskLevels_ = value;
    riskLevelsIsSet_ = true;
}

bool ListAuditRuleRisksRequest::riskLevelsIsSet() const
{
    return riskLevelsIsSet_;
}

void ListAuditRuleRisksRequest::unsetriskLevels()
{
    riskLevelsIsSet_ = false;
}

}
}
}
}
}


