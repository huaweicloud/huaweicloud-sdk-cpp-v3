

#include "huaweicloud/iotda/v5/model/UpdateAuthenticationTemplateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateAuthenticationTemplateBody::UpdateAuthenticationTemplateBody()
{
    parametersIsSet_ = false;
    resourcesIsSet_ = false;
}

UpdateAuthenticationTemplateBody::~UpdateAuthenticationTemplateBody() = default;

void UpdateAuthenticationTemplateBody::validate()
{
}

web::json::value UpdateAuthenticationTemplateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool UpdateAuthenticationTemplateBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            UpdateAuthenticationTemplateResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


Object UpdateAuthenticationTemplateBody::getParameters() const
{
    return parameters_;
}

void UpdateAuthenticationTemplateBody::setParameters(const Object& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool UpdateAuthenticationTemplateBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void UpdateAuthenticationTemplateBody::unsetparameters()
{
    parametersIsSet_ = false;
}

UpdateAuthenticationTemplateResource UpdateAuthenticationTemplateBody::getResources() const
{
    return resources_;
}

void UpdateAuthenticationTemplateBody::setResources(const UpdateAuthenticationTemplateResource& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool UpdateAuthenticationTemplateBody::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void UpdateAuthenticationTemplateBody::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


