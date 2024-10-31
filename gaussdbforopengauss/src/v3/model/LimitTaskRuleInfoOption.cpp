

#include "huaweicloud/gaussdbforopengauss/v3/model/LimitTaskRuleInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




LimitTaskRuleInfoOption::LimitTaskRuleInfoOption()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

LimitTaskRuleInfoOption::~LimitTaskRuleInfoOption() = default;

void LimitTaskRuleInfoOption::validate()
{
}

web::json::value LimitTaskRuleInfoOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool LimitTaskRuleInfoOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string LimitTaskRuleInfoOption::getNodeId() const
{
    return nodeId_;
}

void LimitTaskRuleInfoOption::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool LimitTaskRuleInfoOption::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void LimitTaskRuleInfoOption::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string LimitTaskRuleInfoOption::getRuleId() const
{
    return ruleId_;
}

void LimitTaskRuleInfoOption::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool LimitTaskRuleInfoOption::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void LimitTaskRuleInfoOption::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string LimitTaskRuleInfoOption::getStatus() const
{
    return status_;
}

void LimitTaskRuleInfoOption::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LimitTaskRuleInfoOption::statusIsSet() const
{
    return statusIsSet_;
}

void LimitTaskRuleInfoOption::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


