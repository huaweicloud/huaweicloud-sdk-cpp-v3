

#include "huaweicloud/iotda/v5/model/ProvisioningTemplateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ProvisioningTemplateBody::ProvisioningTemplateBody()
{
    parametersIsSet_ = false;
    resourcesIsSet_ = false;
}

ProvisioningTemplateBody::~ProvisioningTemplateBody() = default;

void ProvisioningTemplateBody::validate()
{
}

web::json::value ProvisioningTemplateBody::toJson() const
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
bool ProvisioningTemplateBody::fromJson(const web::json::value& val)
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
            TemplateResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


Object ProvisioningTemplateBody::getParameters() const
{
    return parameters_;
}

void ProvisioningTemplateBody::setParameters(const Object& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ProvisioningTemplateBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void ProvisioningTemplateBody::unsetparameters()
{
    parametersIsSet_ = false;
}

TemplateResource ProvisioningTemplateBody::getResources() const
{
    return resources_;
}

void ProvisioningTemplateBody::setResources(const TemplateResource& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ProvisioningTemplateBody::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ProvisioningTemplateBody::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


