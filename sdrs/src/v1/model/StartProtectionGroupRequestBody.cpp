

#include "huaweicloud/sdrs/v1/model/StartProtectionGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StartProtectionGroupRequestBody::StartProtectionGroupRequestBody()
{
    startServerGroupIsSet_ = false;
}

StartProtectionGroupRequestBody::~StartProtectionGroupRequestBody() = default;

void StartProtectionGroupRequestBody::validate()
{
}

web::json::value StartProtectionGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startServerGroupIsSet_) {
        val[utility::conversions::to_string_t("start-server-group")] = ModelBase::toJson(startServerGroup_);
    }

    return val;
}

bool StartProtectionGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start-server-group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start-server-group"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartServerGroup(refVal);
        }
    }
    return ok;
}


Object StartProtectionGroupRequestBody::getStartServerGroup() const
{
    return startServerGroup_;
}

void StartProtectionGroupRequestBody::setStartServerGroup(const Object& value)
{
    startServerGroup_ = value;
    startServerGroupIsSet_ = true;
}

bool StartProtectionGroupRequestBody::startServerGroupIsSet() const
{
    return startServerGroupIsSet_;
}

void StartProtectionGroupRequestBody::unsetstartServerGroup()
{
    startServerGroupIsSet_ = false;
}

}
}
}
}
}


