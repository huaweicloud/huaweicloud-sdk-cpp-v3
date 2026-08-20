

#include "huaweicloud/codeartspipeline/v2/model/EndpointAuthorizationBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




EndpointAuthorizationBody::EndpointAuthorizationBody()
{
    parametersIsSet_ = false;
    scheme_ = "";
    schemeIsSet_ = false;
}

EndpointAuthorizationBody::~EndpointAuthorizationBody() = default;

void EndpointAuthorizationBody::validate()
{
}

web::json::value EndpointAuthorizationBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(schemeIsSet_) {
        val[utility::conversions::to_string_t("scheme")] = ModelBase::toJson(scheme_);
    }

    return val;
}
bool EndpointAuthorizationBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scheme"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheme"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheme(refVal);
        }
    }
    return ok;
}


Object EndpointAuthorizationBody::getParameters() const
{
    return parameters_;
}

void EndpointAuthorizationBody::setParameters(const Object& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool EndpointAuthorizationBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void EndpointAuthorizationBody::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string EndpointAuthorizationBody::getScheme() const
{
    return scheme_;
}

void EndpointAuthorizationBody::setScheme(const std::string& value)
{
    scheme_ = value;
    schemeIsSet_ = true;
}

bool EndpointAuthorizationBody::schemeIsSet() const
{
    return schemeIsSet_;
}

void EndpointAuthorizationBody::unsetscheme()
{
    schemeIsSet_ = false;
}

}
}
}
}
}


