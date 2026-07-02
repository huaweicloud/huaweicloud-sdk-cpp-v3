

#include "huaweicloud/gaussdb/v3/model/ShowLockWaitSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowLockWaitSessionResponse::ShowLockWaitSessionResponse()
{
    abnormalRootCauseIsSet_ = false;
}

ShowLockWaitSessionResponse::~ShowLockWaitSessionResponse() = default;

void ShowLockWaitSessionResponse::validate()
{
}

web::json::value ShowLockWaitSessionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(abnormalRootCauseIsSet_) {
        val[utility::conversions::to_string_t("abnormal_root_cause")] = ModelBase::toJson(abnormalRootCause_);
    }

    return val;
}
bool ShowLockWaitSessionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("abnormal_root_cause"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_root_cause"));
        if(!fieldValue.is_null())
        {
            AbnormalRootCause refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalRootCause(refVal);
        }
    }
    return ok;
}


AbnormalRootCause ShowLockWaitSessionResponse::getAbnormalRootCause() const
{
    return abnormalRootCause_;
}

void ShowLockWaitSessionResponse::setAbnormalRootCause(const AbnormalRootCause& value)
{
    abnormalRootCause_ = value;
    abnormalRootCauseIsSet_ = true;
}

bool ShowLockWaitSessionResponse::abnormalRootCauseIsSet() const
{
    return abnormalRootCauseIsSet_;
}

void ShowLockWaitSessionResponse::unsetabnormalRootCause()
{
    abnormalRootCauseIsSet_ = false;
}

}
}
}
}
}


