

#include "huaweicloud/iotda/v5/model/DeleteRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRuleRequest::DeleteRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

DeleteRuleRequest::~DeleteRuleRequest() = default;

void DeleteRuleRequest::validate()
{
}

web::json::value DeleteRuleRequest::toJson() const
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
bool DeleteRuleRequest::fromJson(const web::json::value& val)
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


std::string DeleteRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteRuleRequest::getRuleId() const
{
    return ruleId_;
}

void DeleteRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool DeleteRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void DeleteRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


