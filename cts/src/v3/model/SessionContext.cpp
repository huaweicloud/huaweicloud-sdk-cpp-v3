

#include "huaweicloud/cts/v3/model/SessionContext.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




SessionContext::SessionContext()
{
    attributesIsSet_ = false;
}

SessionContext::~SessionContext() = default;

void SessionContext::validate()
{
}

web::json::value SessionContext::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}
bool SessionContext::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            Attributes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}


Attributes SessionContext::getAttributes() const
{
    return attributes_;
}

void SessionContext::setAttributes(const Attributes& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool SessionContext::attributesIsSet() const
{
    return attributesIsSet_;
}

void SessionContext::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


