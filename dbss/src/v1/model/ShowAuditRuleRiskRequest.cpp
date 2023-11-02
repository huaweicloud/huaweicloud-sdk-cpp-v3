

#include "huaweicloud/dbss/v1/model/ShowAuditRuleRiskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditRuleRiskRequest::ShowAuditRuleRiskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    riskId_ = "";
    riskIdIsSet_ = false;
}

ShowAuditRuleRiskRequest::~ShowAuditRuleRiskRequest() = default;

void ShowAuditRuleRiskRequest::validate()
{
}

web::json::value ShowAuditRuleRiskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(riskIdIsSet_) {
        val[utility::conversions::to_string_t("risk_id")] = ModelBase::toJson(riskId_);
    }

    return val;
}
bool ShowAuditRuleRiskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("risk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskId(refVal);
        }
    }
    return ok;
}


std::string ShowAuditRuleRiskRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditRuleRiskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditRuleRiskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditRuleRiskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAuditRuleRiskRequest::getRiskId() const
{
    return riskId_;
}

void ShowAuditRuleRiskRequest::setRiskId(const std::string& value)
{
    riskId_ = value;
    riskIdIsSet_ = true;
}

bool ShowAuditRuleRiskRequest::riskIdIsSet() const
{
    return riskIdIsSet_;
}

void ShowAuditRuleRiskRequest::unsetriskId()
{
    riskIdIsSet_ = false;
}

}
}
}
}
}


