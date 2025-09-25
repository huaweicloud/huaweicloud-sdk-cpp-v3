

#include "huaweicloud/codeartspipeline/v2/model/CreateStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateStrategyResponse::CreateStrategyResponse()
{
    status_ = false;
    statusIsSet_ = false;
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
}

CreateStrategyResponse::~CreateStrategyResponse() = default;

void CreateStrategyResponse::validate()
{
}

web::json::value CreateStrategyResponse::toJson() const
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
bool CreateStrategyResponse::fromJson(const web::json::value& val)
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


bool CreateStrategyResponse::isStatus() const
{
    return status_;
}

void CreateStrategyResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateStrategyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateStrategyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateStrategyResponse::getRuleSetId() const
{
    return ruleSetId_;
}

void CreateStrategyResponse::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool CreateStrategyResponse::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void CreateStrategyResponse::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

}
}
}
}
}


