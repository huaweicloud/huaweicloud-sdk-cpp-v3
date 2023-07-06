

#include "huaweicloud/sdrs/v1/model/FailoverProtectionGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




FailoverProtectionGroupRequestBody::FailoverProtectionGroupRequestBody()
{
    failoverServerGroupIsSet_ = false;
}

FailoverProtectionGroupRequestBody::~FailoverProtectionGroupRequestBody() = default;

void FailoverProtectionGroupRequestBody::validate()
{
}

web::json::value FailoverProtectionGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failoverServerGroupIsSet_) {
        val[utility::conversions::to_string_t("failover-server-group")] = ModelBase::toJson(failoverServerGroup_);
    }

    return val;
}

bool FailoverProtectionGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failover-server-group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failover-server-group"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailoverServerGroup(refVal);
        }
    }
    return ok;
}

Object FailoverProtectionGroupRequestBody::getFailoverServerGroup() const
{
    return failoverServerGroup_;
}

void FailoverProtectionGroupRequestBody::setFailoverServerGroup(const Object& value)
{
    failoverServerGroup_ = value;
    failoverServerGroupIsSet_ = true;
}

bool FailoverProtectionGroupRequestBody::failoverServerGroupIsSet() const
{
    return failoverServerGroupIsSet_;
}

void FailoverProtectionGroupRequestBody::unsetfailoverServerGroup()
{
    failoverServerGroupIsSet_ = false;
}

}
}
}
}
}


