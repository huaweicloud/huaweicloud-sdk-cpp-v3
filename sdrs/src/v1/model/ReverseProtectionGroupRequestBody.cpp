

#include "huaweicloud/sdrs/v1/model/ReverseProtectionGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ReverseProtectionGroupRequestBody::ReverseProtectionGroupRequestBody()
{
    reverseServerGroupIsSet_ = false;
}

ReverseProtectionGroupRequestBody::~ReverseProtectionGroupRequestBody() = default;

void ReverseProtectionGroupRequestBody::validate()
{
}

web::json::value ReverseProtectionGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reverseServerGroupIsSet_) {
        val[utility::conversions::to_string_t("reverse-server-group")] = ModelBase::toJson(reverseServerGroup_);
    }

    return val;
}

bool ReverseProtectionGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reverse-server-group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reverse-server-group"));
        if(!fieldValue.is_null())
        {
            ReverseProtectionGroupRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReverseServerGroup(refVal);
        }
    }
    return ok;
}

ReverseProtectionGroupRequestParams ReverseProtectionGroupRequestBody::getReverseServerGroup() const
{
    return reverseServerGroup_;
}

void ReverseProtectionGroupRequestBody::setReverseServerGroup(const ReverseProtectionGroupRequestParams& value)
{
    reverseServerGroup_ = value;
    reverseServerGroupIsSet_ = true;
}

bool ReverseProtectionGroupRequestBody::reverseServerGroupIsSet() const
{
    return reverseServerGroupIsSet_;
}

void ReverseProtectionGroupRequestBody::unsetreverseServerGroup()
{
    reverseServerGroupIsSet_ = false;
}

}
}
}
}
}


