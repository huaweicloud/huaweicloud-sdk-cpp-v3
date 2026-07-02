

#include "huaweicloud/gaussdb/v3/model/AbnormalRootCause.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AbnormalRootCause::AbnormalRootCause()
{
    abnormalType_ = "";
    abnormalTypeIsSet_ = false;
    lockRootCauseIsSet_ = false;
}

AbnormalRootCause::~AbnormalRootCause() = default;

void AbnormalRootCause::validate()
{
}

web::json::value AbnormalRootCause::toJson() const
{
    web::json::value val = web::json::value::object();

    if(abnormalTypeIsSet_) {
        val[utility::conversions::to_string_t("abnormal_type")] = ModelBase::toJson(abnormalType_);
    }
    if(lockRootCauseIsSet_) {
        val[utility::conversions::to_string_t("lock_root_cause")] = ModelBase::toJson(lockRootCause_);
    }

    return val;
}
bool AbnormalRootCause::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("abnormal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_root_cause"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_root_cause"));
        if(!fieldValue.is_null())
        {
            LockRootCause refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockRootCause(refVal);
        }
    }
    return ok;
}


std::string AbnormalRootCause::getAbnormalType() const
{
    return abnormalType_;
}

void AbnormalRootCause::setAbnormalType(const std::string& value)
{
    abnormalType_ = value;
    abnormalTypeIsSet_ = true;
}

bool AbnormalRootCause::abnormalTypeIsSet() const
{
    return abnormalTypeIsSet_;
}

void AbnormalRootCause::unsetabnormalType()
{
    abnormalTypeIsSet_ = false;
}

LockRootCause AbnormalRootCause::getLockRootCause() const
{
    return lockRootCause_;
}

void AbnormalRootCause::setLockRootCause(const LockRootCause& value)
{
    lockRootCause_ = value;
    lockRootCauseIsSet_ = true;
}

bool AbnormalRootCause::lockRootCauseIsSet() const
{
    return lockRootCauseIsSet_;
}

void AbnormalRootCause::unsetlockRootCause()
{
    lockRootCauseIsSet_ = false;
}

}
}
}
}
}


