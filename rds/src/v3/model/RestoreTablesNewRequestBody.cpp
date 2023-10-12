

#include "huaweicloud/rds/v3/model/RestoreTablesNewRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTablesNewRequestBody::RestoreTablesNewRequestBody()
{
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    restoreTablesIsSet_ = false;
    isFastRestore_ = false;
    isFastRestoreIsSet_ = false;
}

RestoreTablesNewRequestBody::~RestoreTablesNewRequestBody() = default;

void RestoreTablesNewRequestBody::validate()
{
}

web::json::value RestoreTablesNewRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(restoreTablesIsSet_) {
        val[utility::conversions::to_string_t("restore_tables")] = ModelBase::toJson(restoreTables_);
    }
    if(isFastRestoreIsSet_) {
        val[utility::conversions::to_string_t("is_fast_restore")] = ModelBase::toJson(isFastRestore_);
    }

    return val;
}
bool RestoreTablesNewRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreDatabasesInfoNew> refVal;
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


int64_t RestoreTablesNewRequestBody::getRestoreTime() const
{
    return restoreTime_;
}

void RestoreTablesNewRequestBody::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestoreTablesNewRequestBody::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestoreTablesNewRequestBody::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::vector<RestoreDatabasesInfoNew>& RestoreTablesNewRequestBody::getRestoreTables()
{
    return restoreTables_;
}

void RestoreTablesNewRequestBody::setRestoreTables(const std::vector<RestoreDatabasesInfoNew>& value)
{
    restoreTables_ = value;
    restoreTablesIsSet_ = true;
}

bool RestoreTablesNewRequestBody::restoreTablesIsSet() const
{
    return restoreTablesIsSet_;
}

void RestoreTablesNewRequestBody::unsetrestoreTables()
{
    restoreTablesIsSet_ = false;
}

bool RestoreTablesNewRequestBody::isIsFastRestore() const
{
    return isFastRestore_;
}

void RestoreTablesNewRequestBody::setIsFastRestore(bool value)
{
    isFastRestore_ = value;
    isFastRestoreIsSet_ = true;
}

bool RestoreTablesNewRequestBody::isFastRestoreIsSet() const
{
    return isFastRestoreIsSet_;
}

void RestoreTablesNewRequestBody::unsetisFastRestore()
{
    isFastRestoreIsSet_ = false;
}

}
}
}
}
}


