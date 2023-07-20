

#include "huaweicloud/dds/v3/model/RestoreInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceRequestBody::RestoreInstanceRequestBody()
{
    sourceIsSet_ = false;
    targetIsSet_ = false;
}

RestoreInstanceRequestBody::~RestoreInstanceRequestBody() = default;

void RestoreInstanceRequestBody::validate()
{
}

web::json::value RestoreInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }

    return val;
}

bool RestoreInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            Source refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            Target refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    return ok;
}

Source RestoreInstanceRequestBody::getSource() const
{
    return source_;
}

void RestoreInstanceRequestBody::setSource(const Source& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool RestoreInstanceRequestBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void RestoreInstanceRequestBody::unsetsource()
{
    sourceIsSet_ = false;
}

Target RestoreInstanceRequestBody::getTarget() const
{
    return target_;
}

void RestoreInstanceRequestBody::setTarget(const Target& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool RestoreInstanceRequestBody::targetIsSet() const
{
    return targetIsSet_;
}

void RestoreInstanceRequestBody::unsettarget()
{
    targetIsSet_ = false;
}

}
}
}
}
}


