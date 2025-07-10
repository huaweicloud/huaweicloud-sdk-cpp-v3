

#include "huaweicloud/rgc/v1/model/TemplateParamVariableValidation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




TemplateParamVariableValidation::TemplateParamVariableValidation()
{
    condition_ = "";
    conditionIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

TemplateParamVariableValidation::~TemplateParamVariableValidation() = default;

void TemplateParamVariableValidation::validate()
{
}

web::json::value TemplateParamVariableValidation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool TemplateParamVariableValidation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string TemplateParamVariableValidation::getCondition() const
{
    return condition_;
}

void TemplateParamVariableValidation::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool TemplateParamVariableValidation::conditionIsSet() const
{
    return conditionIsSet_;
}

void TemplateParamVariableValidation::unsetcondition()
{
    conditionIsSet_ = false;
}

std::string TemplateParamVariableValidation::getErrorMessage() const
{
    return errorMessage_;
}

void TemplateParamVariableValidation::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool TemplateParamVariableValidation::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void TemplateParamVariableValidation::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


