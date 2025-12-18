

#include "huaweicloud/gaussdbforopengauss/v3/model/SaveAsParameterConfigTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SaveAsParameterConfigTemplateRequestBody::SaveAsParameterConfigTemplateRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

SaveAsParameterConfigTemplateRequestBody::~SaveAsParameterConfigTemplateRequestBody() = default;

void SaveAsParameterConfigTemplateRequestBody::validate()
{
}

web::json::value SaveAsParameterConfigTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool SaveAsParameterConfigTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string SaveAsParameterConfigTemplateRequestBody::getName() const
{
    return name_;
}

void SaveAsParameterConfigTemplateRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SaveAsParameterConfigTemplateRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void SaveAsParameterConfigTemplateRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string SaveAsParameterConfigTemplateRequestBody::getDescription() const
{
    return description_;
}

void SaveAsParameterConfigTemplateRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SaveAsParameterConfigTemplateRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SaveAsParameterConfigTemplateRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


