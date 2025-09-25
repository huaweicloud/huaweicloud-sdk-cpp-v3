

#include "huaweicloud/codeartspipeline/v2/model/UpdateStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateStrategyResponse::UpdateStrategyResponse()
{
    status_ = false;
    statusIsSet_ = false;
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
}

UpdateStrategyResponse::~UpdateStrategyResponse() = default;

void UpdateStrategyResponse::validate()
{
}

web::json::value UpdateStrategyResponse::toJson() const
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
bool UpdateStrategyResponse::fromJson(const web::json::value& val)
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


bool UpdateStrategyResponse::isStatus() const
{
    return status_;
}

void UpdateStrategyResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateStrategyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateStrategyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateStrategyResponse::getRuleSetId() const
{
    return ruleSetId_;
}

void UpdateStrategyResponse::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool UpdateStrategyResponse::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void UpdateStrategyResponse::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

}
}
}
}
}


