

#include "huaweicloud/iotda/v5/model/ShowRoutingRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRoutingRuleRequest::ShowRoutingRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

ShowRoutingRuleRequest::~ShowRoutingRuleRequest() = default;

void ShowRoutingRuleRequest::validate()
{
}

web::json::value ShowRoutingRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }

    return val;
}
bool ShowRoutingRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    return ok;
}


std::string ShowRoutingRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRoutingRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRoutingRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRoutingRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRoutingRuleRequest::getRuleId() const
{
    return ruleId_;
}

void ShowRoutingRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowRoutingRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowRoutingRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


