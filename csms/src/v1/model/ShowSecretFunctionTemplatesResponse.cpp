

#include "huaweicloud/csms/v1/model/ShowSecretFunctionTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretFunctionTemplatesResponse::ShowSecretFunctionTemplatesResponse()
{
    functionTemplates_ = "";
    functionTemplatesIsSet_ = false;
}

ShowSecretFunctionTemplatesResponse::~ShowSecretFunctionTemplatesResponse() = default;

void ShowSecretFunctionTemplatesResponse::validate()
{
}

web::json::value ShowSecretFunctionTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionTemplatesIsSet_) {
        val[utility::conversions::to_string_t("function_templates")] = ModelBase::toJson(functionTemplates_);
    }

    return val;
}
bool ShowSecretFunctionTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_templates"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionTemplates(refVal);
        }
    }
    return ok;
}


std::string ShowSecretFunctionTemplatesResponse::getFunctionTemplates() const
{
    return functionTemplates_;
}

void ShowSecretFunctionTemplatesResponse::setFunctionTemplates(const std::string& value)
{
    functionTemplates_ = value;
    functionTemplatesIsSet_ = true;
}

bool ShowSecretFunctionTemplatesResponse::functionTemplatesIsSet() const
{
    return functionTemplatesIsSet_;
}

void ShowSecretFunctionTemplatesResponse::unsetfunctionTemplates()
{
    functionTemplatesIsSet_ = false;
}

}
}
}
}
}


