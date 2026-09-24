

#include "huaweicloud/cbr/v1/model/OpExtendInfoUpdateExpirationTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoUpdateExpirationTime::OpExtendInfoUpdateExpirationTime()
{
    affectedBackupsCount_ = 0;
    affectedBackupsCountIsSet_ = false;
    expirationDay_ = "";
    expirationDayIsSet_ = false;
}

OpExtendInfoUpdateExpirationTime::~OpExtendInfoUpdateExpirationTime() = default;

void OpExtendInfoUpdateExpirationTime::validate()
{
}

web::json::value OpExtendInfoUpdateExpirationTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(affectedBackupsCountIsSet_) {
        val[utility::conversions::to_string_t("affected_backups_count")] = ModelBase::toJson(affectedBackupsCount_);
    }
    if(expirationDayIsSet_) {
        val[utility::conversions::to_string_t("expiration_day")] = ModelBase::toJson(expirationDay_);
    }

    return val;
}
bool OpExtendInfoUpdateExpirationTime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("affected_backups_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_backups_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedBackupsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationDay(refVal);
        }
    }
    return ok;
}


int32_t OpExtendInfoUpdateExpirationTime::getAffectedBackupsCount() const
{
    return affectedBackupsCount_;
}

void OpExtendInfoUpdateExpirationTime::setAffectedBackupsCount(int32_t value)
{
    affectedBackupsCount_ = value;
    affectedBackupsCountIsSet_ = true;
}

bool OpExtendInfoUpdateExpirationTime::affectedBackupsCountIsSet() const
{
    return affectedBackupsCountIsSet_;
}

void OpExtendInfoUpdateExpirationTime::unsetaffectedBackupsCount()
{
    affectedBackupsCountIsSet_ = false;
}

std::string OpExtendInfoUpdateExpirationTime::getExpirationDay() const
{
    return expirationDay_;
}

void OpExtendInfoUpdateExpirationTime::setExpirationDay(const std::string& value)
{
    expirationDay_ = value;
    expirationDayIsSet_ = true;
}

bool OpExtendInfoUpdateExpirationTime::expirationDayIsSet() const
{
    return expirationDayIsSet_;
}

void OpExtendInfoUpdateExpirationTime::unsetexpirationDay()
{
    expirationDayIsSet_ = false;
}

}
}
}
}
}


