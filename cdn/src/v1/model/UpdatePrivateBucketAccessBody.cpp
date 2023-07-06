

#include "huaweicloud/cdn/v1/model/UpdatePrivateBucketAccessBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdatePrivateBucketAccessBody::UpdatePrivateBucketAccessBody()
{
    status_ = false;
    statusIsSet_ = false;
}

UpdatePrivateBucketAccessBody::~UpdatePrivateBucketAccessBody() = default;

void UpdatePrivateBucketAccessBody::validate()
{
}

web::json::value UpdatePrivateBucketAccessBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool UpdatePrivateBucketAccessBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}

bool UpdatePrivateBucketAccessBody::isStatus() const
{
    return status_;
}

void UpdatePrivateBucketAccessBody::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdatePrivateBucketAccessBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdatePrivateBucketAccessBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


