

#include "huaweicloud/codeartspipeline/v2/model/SwitchStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




SwitchStrategyResponse::SwitchStrategyResponse()
{
    status_ = false;
    statusIsSet_ = false;
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
}

SwitchStrategyResponse::~SwitchStrategyResponse() = default;

void SwitchStrategyResponse::validate()
{
}

web::json::value SwitchStrategyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ruleSetIdIsSet_) {
        val[utility::conversions::to_string_t("rule_set_id")] = ModelBase::toJson(ruleSetId_);
    }

    return val;
}
bool SwitchStrategyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSetId(refVal);
        }
    }
    return ok;
}


bool SwitchStrategyResponse::isStatus() const
{
    return status_;
}

void SwitchStrategyResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchStrategyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchStrategyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SwitchStrategyResponse::getRuleSetId() const
{
    return ruleSetId_;
}

void SwitchStrategyResponse::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool SwitchStrategyResponse::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void SwitchStrategyResponse::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

}
}
}
}
}


