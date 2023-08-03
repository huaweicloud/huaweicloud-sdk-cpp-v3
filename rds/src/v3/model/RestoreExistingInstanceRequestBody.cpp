

#include "huaweicloud/rds/v3/model/RestoreExistingInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreExistingInstanceRequestBody::RestoreExistingInstanceRequestBody()
{
    sourceIsSet_ = false;
    targetIsSet_ = false;
}

RestoreExistingInstanceRequestBody::~RestoreExistingInstanceRequestBody() = default;

void RestoreExistingInstanceRequestBody::validate()
{
}

web::json::value RestoreExistingInstanceRequestBody::toJson() const
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

bool RestoreExistingInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            RestoreExistingInstanceRequestBody_source refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            TargetInstanceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    return ok;
}

RestoreExistingInstanceRequestBody_source RestoreExistingInstanceRequestBody::getSource() const
{
    return source_;
}

void RestoreExistingInstanceRequestBody::setSource(const RestoreExistingInstanceRequestBody_source& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void RestoreExistingInstanceRequestBody::unsetsource()
{
    sourceIsSet_ = false;
}

TargetInstanceRequest RestoreExistingInstanceRequestBody::getTarget() const
{
    return target_;
}

void RestoreExistingInstanceRequestBody::setTarget(const TargetInstanceRequest& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody::targetIsSet() const
{
    return targetIsSet_;
}

void RestoreExistingInstanceRequestBody::unsettarget()
{
    targetIsSet_ = false;
}

}
}
}
}
}


