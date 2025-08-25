

#include "huaweicloud/cce/v3/model/OpenAPISpec_spec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




OpenAPISpec_spec::OpenAPISpec_spec()
{
    eipIsSet_ = false;
    isDynamic_ = false;
    isDynamicIsSet_ = false;
}

OpenAPISpec_spec::~OpenAPISpec_spec() = default;

void OpenAPISpec_spec::validate()
{
}

web::json::value OpenAPISpec_spec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(isDynamicIsSet_) {
        val[utility::conversions::to_string_t("IsDynamic")] = ModelBase::toJson(isDynamic_);
    }

    return val;
}
bool OpenAPISpec_spec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            EipSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("IsDynamic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("IsDynamic"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDynamic(refVal);
        }
    }
    return ok;
}


EipSpec OpenAPISpec_spec::getEip() const
{
    return eip_;
}

void OpenAPISpec_spec::setEip(const EipSpec& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool OpenAPISpec_spec::eipIsSet() const
{
    return eipIsSet_;
}

void OpenAPISpec_spec::unseteip()
{
    eipIsSet_ = false;
}

bool OpenAPISpec_spec::isIsDynamic() const
{
    return isDynamic_;
}

void OpenAPISpec_spec::setIsDynamic(bool value)
{
    isDynamic_ = value;
    isDynamicIsSet_ = true;
}

bool OpenAPISpec_spec::isDynamicIsSet() const
{
    return isDynamicIsSet_;
}

void OpenAPISpec_spec::unsetisDynamic()
{
    isDynamicIsSet_ = false;
}

}
}
}
}
}


