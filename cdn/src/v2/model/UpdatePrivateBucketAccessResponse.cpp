

#include "huaweicloud/cdn/v2/model/UpdatePrivateBucketAccessResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdatePrivateBucketAccessResponse::UpdatePrivateBucketAccessResponse()
{
    status_ = false;
    statusIsSet_ = false;
}

UpdatePrivateBucketAccessResponse::~UpdatePrivateBucketAccessResponse() = default;

void UpdatePrivateBucketAccessResponse::validate()
{
}

web::json::value UpdatePrivateBucketAccessResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdatePrivateBucketAccessResponse::fromJson(const web::json::value& val)
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


bool UpdatePrivateBucketAccessResponse::isStatus() const
{
    return status_;
}

void UpdatePrivateBucketAccessResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdatePrivateBucketAccessResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdatePrivateBucketAccessResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


