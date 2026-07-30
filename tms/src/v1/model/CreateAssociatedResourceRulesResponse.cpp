

#include "huaweicloud/tms/v1/model/CreateAssociatedResourceRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




CreateAssociatedResourceRulesResponse::CreateAssociatedResourceRulesResponse()
{
    rulesIsSet_ = false;
    errorsIsSet_ = false;
}

CreateAssociatedResourceRulesResponse::~CreateAssociatedResourceRulesResponse() = default;

void CreateAssociatedResourceRulesResponse::validate()
{
}

web::json::value CreateAssociatedResourceRulesResponse::toJson() const
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
bool CreateAssociatedResourceRulesResponse::fromJson(const web::json::value& val)
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


std::vector<AssociatedResourceRule>& CreateAssociatedResourceRulesResponse::getRules()
{
    return rules_;
}

void CreateAssociatedResourceRulesResponse::setRules(const std::vector<AssociatedResourceRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool CreateAssociatedResourceRulesResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void CreateAssociatedResourceRulesResponse::unsetrules()
{
    rulesIsSet_ = false;
}

std::vector<ErrorInfo>& CreateAssociatedResourceRulesResponse::getErrors()
{
    return errors_;
}

void CreateAssociatedResourceRulesResponse::setErrors(const std::vector<ErrorInfo>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool CreateAssociatedResourceRulesResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void CreateAssociatedResourceRulesResponse::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}


