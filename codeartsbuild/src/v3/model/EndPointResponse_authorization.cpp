

#include "huaweicloud/codeartsbuild/v3/model/EndPointResponse_authorization.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




EndPointResponse_authorization::EndPointResponse_authorization()
{
    parametersIsSet_ = false;
    schemeIsSet_ = false;
}

EndPointResponse_authorization::~EndPointResponse_authorization() = default;

void EndPointResponse_authorization::validate()
{
}

web::json::value EndPointResponse_authorization::toJson() const
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
bool EndPointResponse_authorization::fromJson(const web::json::value& val)
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheme(refVal);
        }
    }
    return ok;
}


Object EndPointResponse_authorization::getParameters() const
{
    return parameters_;
}

void EndPointResponse_authorization::setParameters(const Object& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool EndPointResponse_authorization::parametersIsSet() const
{
    return parametersIsSet_;
}

void EndPointResponse_authorization::unsetparameters()
{
    parametersIsSet_ = false;
}

Object EndPointResponse_authorization::getScheme() const
{
    return scheme_;
}

void EndPointResponse_authorization::setScheme(const Object& value)
{
    scheme_ = value;
    schemeIsSet_ = true;
}

bool EndPointResponse_authorization::schemeIsSet() const
{
    return schemeIsSet_;
}

void EndPointResponse_authorization::unsetscheme()
{
    schemeIsSet_ = false;
}

}
}
}
}
}


