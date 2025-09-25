

#include "huaweicloud/gaussdbforopengauss/v3/model/ResourceWaitEvenTimeDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResourceWaitEvenTimeDetails::ResourceWaitEvenTimeDetails()
{
    dataIoTimeIsSet_ = false;
    lockTimeIsSet_ = false;
    lwlockTimeIsSet_ = false;
}

ResourceWaitEvenTimeDetails::~ResourceWaitEvenTimeDetails() = default;

void ResourceWaitEvenTimeDetails::validate()
{
}

web::json::value ResourceWaitEvenTimeDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIoTimeIsSet_) {
        val[utility::conversions::to_string_t("data_io_time")] = ModelBase::toJson(dataIoTime_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }
    if(lwlockTimeIsSet_) {
        val[utility::conversions::to_string_t("lwlock_time")] = ModelBase::toJson(lwlockTime_);
    }

    return val;
}
bool ResourceWaitEvenTimeDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_io_time"));
        if(!fieldValue.is_null())
        {
            DataIoTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time"));
        if(!fieldValue.is_null())
        {
            LockTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lwlock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lwlock_time"));
        if(!fieldValue.is_null())
        {
            LwlockTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLwlockTime(refVal);
        }
    }
    return ok;
}


DataIoTime ResourceWaitEvenTimeDetails::getDataIoTime() const
{
    return dataIoTime_;
}

void ResourceWaitEvenTimeDetails::setDataIoTime(const DataIoTime& value)
{
    dataIoTime_ = value;
    dataIoTimeIsSet_ = true;
}

bool ResourceWaitEvenTimeDetails::dataIoTimeIsSet() const
{
    return dataIoTimeIsSet_;
}

void ResourceWaitEvenTimeDetails::unsetdataIoTime()
{
    dataIoTimeIsSet_ = false;
}

LockTime ResourceWaitEvenTimeDetails::getLockTime() const
{
    return lockTime_;
}

void ResourceWaitEvenTimeDetails::setLockTime(const LockTime& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool ResourceWaitEvenTimeDetails::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void ResourceWaitEvenTimeDetails::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

LwlockTime ResourceWaitEvenTimeDetails::getLwlockTime() const
{
    return lwlockTime_;
}

void ResourceWaitEvenTimeDetails::setLwlockTime(const LwlockTime& value)
{
    lwlockTime_ = value;
    lwlockTimeIsSet_ = true;
}

bool ResourceWaitEvenTimeDetails::lwlockTimeIsSet() const
{
    return lwlockTimeIsSet_;
}

void ResourceWaitEvenTimeDetails::unsetlwlockTime()
{
    lwlockTimeIsSet_ = false;
}

}
}
}
}
}


