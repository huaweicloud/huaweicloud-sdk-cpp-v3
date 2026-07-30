

#include "huaweicloud/modelarts/v1/model/Cause.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Cause::Cause()
{
    policyName_ = "";
    policyNameIsSet_ = false;
    conditionIsSet_ = false;
}

Cause::~Cause() = default;

void Cause::validate()
{
}

web::json::value Cause::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }

    return val;
}
bool Cause::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::vector<Conditions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    return ok;
}


std::string Cause::getPolicyName() const
{
    return policyName_;
}

void Cause::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool Cause::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void Cause::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::vector<Conditions>& Cause::getCondition()
{
    return condition_;
}

void Cause::setCondition(const std::vector<Conditions>& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool Cause::conditionIsSet() const
{
    return conditionIsSet_;
}

void Cause::unsetcondition()
{
    conditionIsSet_ = false;
}

}
}
}
}
}


