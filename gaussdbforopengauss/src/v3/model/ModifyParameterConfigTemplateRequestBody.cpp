

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyParameterConfigTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyParameterConfigTemplateRequestBody::ModifyParameterConfigTemplateRequestBody()
{
    valuesIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ModifyParameterConfigTemplateRequestBody::~ModifyParameterConfigTemplateRequestBody() = default;

void ModifyParameterConfigTemplateRequestBody::validate()
{
}

web::json::value ModifyParameterConfigTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ModifyParameterConfigTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& ModifyParameterConfigTemplateRequestBody::getValues()
{
    return values_;
}

void ModifyParameterConfigTemplateRequestBody::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ModifyParameterConfigTemplateRequestBody::valuesIsSet() const
{
    return valuesIsSet_;
}

void ModifyParameterConfigTemplateRequestBody::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string ModifyParameterConfigTemplateRequestBody::getDescription() const
{
    return description_;
}

void ModifyParameterConfigTemplateRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModifyParameterConfigTemplateRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModifyParameterConfigTemplateRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


