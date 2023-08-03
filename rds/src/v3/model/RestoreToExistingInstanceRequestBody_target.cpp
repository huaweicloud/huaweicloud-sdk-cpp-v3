

#include "huaweicloud/rds/v3/model/RestoreToExistingInstanceRequestBody_target.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreToExistingInstanceRequestBody_target::RestoreToExistingInstanceRequestBody_target()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

RestoreToExistingInstanceRequestBody_target::~RestoreToExistingInstanceRequestBody_target() = default;

void RestoreToExistingInstanceRequestBody_target::validate()
{
}

web::json::value RestoreToExistingInstanceRequestBody_target::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool RestoreToExistingInstanceRequestBody_target::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}

std::string RestoreToExistingInstanceRequestBody_target::getInstanceId() const
{
    return instanceId_;
}

void RestoreToExistingInstanceRequestBody_target::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreToExistingInstanceRequestBody_target::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreToExistingInstanceRequestBody_target::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


