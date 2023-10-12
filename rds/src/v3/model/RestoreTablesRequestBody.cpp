

#include "huaweicloud/rds/v3/model/RestoreTablesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTablesRequestBody::RestoreTablesRequestBody()
{
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    restoreTablesIsSet_ = false;
    isFastRestore_ = false;
    isFastRestoreIsSet_ = false;
}

RestoreTablesRequestBody::~RestoreTablesRequestBody() = default;

void RestoreTablesRequestBody::validate()
{
}

web::json::value RestoreTablesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restoreTime")] = ModelBase::toJson(restoreTime_);
    }
    if(restoreTablesIsSet_) {
        val[utility::conversions::to_string_t("restoreTables")] = ModelBase::toJson(restoreTables_);
    }
    if(isFastRestoreIsSet_) {
        val[utility::conversions::to_string_t("is_fast_restore")] = ModelBase::toJson(isFastRestore_);
    }

    return val;
}
bool RestoreTablesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restoreTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restoreTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restoreTables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restoreTables"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreDatabasesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_fast_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_fast_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFastRestore(refVal);
        }
    }
    return ok;
}


int64_t RestoreTablesRequestBody::getRestoreTime() const
{
    return restoreTime_;
}

void RestoreTablesRequestBody::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestoreTablesRequestBody::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestoreTablesRequestBody::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::vector<RestoreDatabasesInfo>& RestoreTablesRequestBody::getRestoreTables()
{
    return restoreTables_;
}

void RestoreTablesRequestBody::setRestoreTables(const std::vector<RestoreDatabasesInfo>& value)
{
    restoreTables_ = value;
    restoreTablesIsSet_ = true;
}

bool RestoreTablesRequestBody::restoreTablesIsSet() const
{
    return restoreTablesIsSet_;
}

void RestoreTablesRequestBody::unsetrestoreTables()
{
    restoreTablesIsSet_ = false;
}

bool RestoreTablesRequestBody::isIsFastRestore() const
{
    return isFastRestore_;
}

void RestoreTablesRequestBody::setIsFastRestore(bool value)
{
    isFastRestore_ = value;
    isFastRestoreIsSet_ = true;
}

bool RestoreTablesRequestBody::isFastRestoreIsSet() const
{
    return isFastRestoreIsSet_;
}

void RestoreTablesRequestBody::unsetisFastRestore()
{
    isFastRestoreIsSet_ = false;
}

}
}
}
}
}


