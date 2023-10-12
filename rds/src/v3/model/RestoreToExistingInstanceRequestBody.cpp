

#include "huaweicloud/rds/v3/model/RestoreToExistingInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreToExistingInstanceRequestBody::RestoreToExistingInstanceRequestBody()
{
    sourceIsSet_ = false;
    targetIsSet_ = false;
}

RestoreToExistingInstanceRequestBody::~RestoreToExistingInstanceRequestBody() = default;

void RestoreToExistingInstanceRequestBody::validate()
{
}

web::json::value RestoreToExistingInstanceRequestBody::toJson() const
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
bool RestoreToExistingInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            RestoreToExistingInstanceRequestBody_source refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            RestoreToExistingInstanceRequestBody_target refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    return ok;
}


RestoreToExistingInstanceRequestBody_source RestoreToExistingInstanceRequestBody::getSource() const
{
    return source_;
}

void RestoreToExistingInstanceRequestBody::setSource(const RestoreToExistingInstanceRequestBody_source& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool RestoreToExistingInstanceRequestBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void RestoreToExistingInstanceRequestBody::unsetsource()
{
    sourceIsSet_ = false;
}

RestoreToExistingInstanceRequestBody_target RestoreToExistingInstanceRequestBody::getTarget() const
{
    return target_;
}

void RestoreToExistingInstanceRequestBody::setTarget(const RestoreToExistingInstanceRequestBody_target& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool RestoreToExistingInstanceRequestBody::targetIsSet() const
{
    return targetIsSet_;
}

void RestoreToExistingInstanceRequestBody::unsettarget()
{
    targetIsSet_ = false;
}

}
}
}
}
}


