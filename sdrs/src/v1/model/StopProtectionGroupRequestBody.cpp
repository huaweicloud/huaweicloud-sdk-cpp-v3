

#include "huaweicloud/sdrs/v1/model/StopProtectionGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StopProtectionGroupRequestBody::StopProtectionGroupRequestBody()
{
    stopServerGroupIsSet_ = false;
}

StopProtectionGroupRequestBody::~StopProtectionGroupRequestBody() = default;

void StopProtectionGroupRequestBody::validate()
{
}

web::json::value StopProtectionGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stopServerGroupIsSet_) {
        val[utility::conversions::to_string_t("stop-server-group")] = ModelBase::toJson(stopServerGroup_);
    }

    return val;
}
bool StopProtectionGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("stop-server-group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stop-server-group"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStopServerGroup(refVal);
        }
    }
    return ok;
}


Object StopProtectionGroupRequestBody::getStopServerGroup() const
{
    return stopServerGroup_;
}

void StopProtectionGroupRequestBody::setStopServerGroup(const Object& value)
{
    stopServerGroup_ = value;
    stopServerGroupIsSet_ = true;
}

bool StopProtectionGroupRequestBody::stopServerGroupIsSet() const
{
    return stopServerGroupIsSet_;
}

void StopProtectionGroupRequestBody::unsetstopServerGroup()
{
    stopServerGroupIsSet_ = false;
}

}
}
}
}
}


