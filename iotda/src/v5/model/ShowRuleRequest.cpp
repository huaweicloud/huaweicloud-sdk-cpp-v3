

#include "huaweicloud/iotda/v5/model/ShowRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowRuleRequest::ShowRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

ShowRuleRequest::~ShowRuleRequest() = default;

void ShowRuleRequest::validate()
{
}

web::json::value ShowRuleRequest::toJson() const
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
bool ShowRuleRequest::fromJson(const web::json::value& val)
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


std::string ShowRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRuleRequest::getRuleId() const
{
    return ruleId_;
}

void ShowRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


