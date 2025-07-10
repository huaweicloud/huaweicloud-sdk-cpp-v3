

#include "huaweicloud/rgc/v1/model/ShowTemplateDeployParamsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowTemplateDeployParamsResponse::ShowTemplateDeployParamsResponse()
{
    variablesIsSet_ = false;
}

ShowTemplateDeployParamsResponse::~ShowTemplateDeployParamsResponse() = default;

void ShowTemplateDeployParamsResponse::validate()
{
}

web::json::value ShowTemplateDeployParamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }

    return val;
}
bool ShowTemplateDeployParamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateParamVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    return ok;
}


std::vector<TemplateParamVariable>& ShowTemplateDeployParamsResponse::getVariables()
{
    return variables_;
}

void ShowTemplateDeployParamsResponse::setVariables(const std::vector<TemplateParamVariable>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool ShowTemplateDeployParamsResponse::variablesIsSet() const
{
    return variablesIsSet_;
}

void ShowTemplateDeployParamsResponse::unsetvariables()
{
    variablesIsSet_ = false;
}

}
}
}
}
}


