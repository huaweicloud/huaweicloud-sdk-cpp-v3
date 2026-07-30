

#include "huaweicloud/tms/v1/model/UpdateAssociatedResourceRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




UpdateAssociatedResourceRulesResponse::UpdateAssociatedResourceRulesResponse()
{
    rulesIsSet_ = false;
    errorsIsSet_ = false;
}

UpdateAssociatedResourceRulesResponse::~UpdateAssociatedResourceRulesResponse() = default;

void UpdateAssociatedResourceRulesResponse::validate()
{
}

web::json::value UpdateAssociatedResourceRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }

    return val;
}
bool UpdateAssociatedResourceRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociatedResourceRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    return ok;
}


std::vector<AssociatedResourceRule>& UpdateAssociatedResourceRulesResponse::getRules()
{
    return rules_;
}

void UpdateAssociatedResourceRulesResponse::setRules(const std::vector<AssociatedResourceRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool UpdateAssociatedResourceRulesResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void UpdateAssociatedResourceRulesResponse::unsetrules()
{
    rulesIsSet_ = false;
}

std::vector<ErrorInfo>& UpdateAssociatedResourceRulesResponse::getErrors()
{
    return errors_;
}

void UpdateAssociatedResourceRulesResponse::setErrors(const std::vector<ErrorInfo>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool UpdateAssociatedResourceRulesResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void UpdateAssociatedResourceRulesResponse::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}


