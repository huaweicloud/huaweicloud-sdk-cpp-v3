

#include "huaweicloud/iotda/v5/model/DeleteRoutingRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRoutingRuleRequest::DeleteRoutingRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

DeleteRoutingRuleRequest::~DeleteRoutingRuleRequest() = default;

void DeleteRoutingRuleRequest::validate()
{
}

web::json::value DeleteRoutingRuleRequest::toJson() const
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
bool DeleteRoutingRuleRequest::fromJson(const web::json::value& val)
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


std::string DeleteRoutingRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRoutingRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRoutingRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRoutingRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteRoutingRuleRequest::getRuleId() const
{
    return ruleId_;
}

void DeleteRoutingRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool DeleteRoutingRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void DeleteRoutingRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


