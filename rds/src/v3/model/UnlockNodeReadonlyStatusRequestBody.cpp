

#include "huaweicloud/rds/v3/model/UnlockNodeReadonlyStatusRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UnlockNodeReadonlyStatusRequestBody::UnlockNodeReadonlyStatusRequestBody()
{
    statusPreservationTime_ = 0;
    statusPreservationTimeIsSet_ = false;
}

UnlockNodeReadonlyStatusRequestBody::~UnlockNodeReadonlyStatusRequestBody() = default;

void UnlockNodeReadonlyStatusRequestBody::validate()
{
}

web::json::value UnlockNodeReadonlyStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusPreservationTimeIsSet_) {
        val[utility::conversions::to_string_t("status_preservation_time")] = ModelBase::toJson(statusPreservationTime_);
    }

    return val;
}
bool UnlockNodeReadonlyStatusRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status_preservation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_preservation_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusPreservationTime(refVal);
        }
    }
    return ok;
}


int32_t UnlockNodeReadonlyStatusRequestBody::getStatusPreservationTime() const
{
    return statusPreservationTime_;
}

void UnlockNodeReadonlyStatusRequestBody::setStatusPreservationTime(int32_t value)
{
    statusPreservationTime_ = value;
    statusPreservationTimeIsSet_ = true;
}

bool UnlockNodeReadonlyStatusRequestBody::statusPreservationTimeIsSet() const
{
    return statusPreservationTimeIsSet_;
}

void UnlockNodeReadonlyStatusRequestBody::unsetstatusPreservationTime()
{
    statusPreservationTimeIsSet_ = false;
}

}
}
}
}
}


