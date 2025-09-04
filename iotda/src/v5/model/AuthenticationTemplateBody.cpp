

#include "huaweicloud/iotda/v5/model/AuthenticationTemplateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AuthenticationTemplateBody::AuthenticationTemplateBody()
{
    parametersIsSet_ = false;
    resourcesIsSet_ = false;
}

AuthenticationTemplateBody::~AuthenticationTemplateBody() = default;

void AuthenticationTemplateBody::validate()
{
}

web::json::value AuthenticationTemplateBody::toJson() const
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
bool AuthenticationTemplateBody::fromJson(const web::json::value& val)
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
            AuthenticationTemplateResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


Object AuthenticationTemplateBody::getParameters() const
{
    return parameters_;
}

void AuthenticationTemplateBody::setParameters(const Object& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool AuthenticationTemplateBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void AuthenticationTemplateBody::unsetparameters()
{
    parametersIsSet_ = false;
}

AuthenticationTemplateResource AuthenticationTemplateBody::getResources() const
{
    return resources_;
}

void AuthenticationTemplateBody::setResources(const AuthenticationTemplateResource& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool AuthenticationTemplateBody::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void AuthenticationTemplateBody::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


