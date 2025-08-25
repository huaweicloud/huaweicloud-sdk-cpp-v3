

#include "huaweicloud/cce/v3/model/OpenAPISpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




OpenAPISpec::OpenAPISpec()
{
    specIsSet_ = false;
}

OpenAPISpec::~OpenAPISpec() = default;

void OpenAPISpec::validate()
{
}

web::json::value OpenAPISpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool OpenAPISpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            OpenAPISpec_spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


OpenAPISpec_spec OpenAPISpec::getSpec() const
{
    return spec_;
}

void OpenAPISpec::setSpec(const OpenAPISpec_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool OpenAPISpec::specIsSet() const
{
    return specIsSet_;
}

void OpenAPISpec::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


