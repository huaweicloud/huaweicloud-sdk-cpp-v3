

#include "huaweicloud/tms/v1/model/DeleteAssociatedResourceRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




DeleteAssociatedResourceRuleResponse::DeleteAssociatedResourceRuleResponse()
{
    errorsIsSet_ = false;
}

DeleteAssociatedResourceRuleResponse::~DeleteAssociatedResourceRuleResponse() = default;

void DeleteAssociatedResourceRuleResponse::validate()
{
}

web::json::value DeleteAssociatedResourceRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }

    return val;
}
bool DeleteAssociatedResourceRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<ErrorInfo>& DeleteAssociatedResourceRuleResponse::getErrors()
{
    return errors_;
}

void DeleteAssociatedResourceRuleResponse::setErrors(const std::vector<ErrorInfo>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool DeleteAssociatedResourceRuleResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void DeleteAssociatedResourceRuleResponse::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}


