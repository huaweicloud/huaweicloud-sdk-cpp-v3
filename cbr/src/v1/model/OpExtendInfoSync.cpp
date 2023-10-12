

#include "huaweicloud/cbr/v1/model/OpExtendInfoSync.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoSync::OpExtendInfoSync()
{
    syncBackupNum_ = 0;
    syncBackupNumIsSet_ = false;
    deleteBackupNum_ = 0;
    deleteBackupNumIsSet_ = false;
    errSyncBackupNum_ = 0;
    errSyncBackupNumIsSet_ = false;
}

OpExtendInfoSync::~OpExtendInfoSync() = default;

void OpExtendInfoSync::validate()
{
}

web::json::value OpExtendInfoSync::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncBackupNumIsSet_) {
        val[utility::conversions::to_string_t("sync_backup_num")] = ModelBase::toJson(syncBackupNum_);
    }
    if(deleteBackupNumIsSet_) {
        val[utility::conversions::to_string_t("delete_backup_num")] = ModelBase::toJson(deleteBackupNum_);
    }
    if(errSyncBackupNumIsSet_) {
        val[utility::conversions::to_string_t("err_sync_backup_num")] = ModelBase::toJson(errSyncBackupNum_);
    }

    return val;
}
bool OpExtendInfoSync::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sync_backup_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_backup_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncBackupNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_backup_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_backup_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteBackupNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("err_sync_backup_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("err_sync_backup_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrSyncBackupNum(refVal);
        }
    }
    return ok;
}


int32_t OpExtendInfoSync::getSyncBackupNum() const
{
    return syncBackupNum_;
}

void OpExtendInfoSync::setSyncBackupNum(int32_t value)
{
    syncBackupNum_ = value;
    syncBackupNumIsSet_ = true;
}

bool OpExtendInfoSync::syncBackupNumIsSet() const
{
    return syncBackupNumIsSet_;
}

void OpExtendInfoSync::unsetsyncBackupNum()
{
    syncBackupNumIsSet_ = false;
}

int32_t OpExtendInfoSync::getDeleteBackupNum() const
{
    return deleteBackupNum_;
}

void OpExtendInfoSync::setDeleteBackupNum(int32_t value)
{
    deleteBackupNum_ = value;
    deleteBackupNumIsSet_ = true;
}

bool OpExtendInfoSync::deleteBackupNumIsSet() const
{
    return deleteBackupNumIsSet_;
}

void OpExtendInfoSync::unsetdeleteBackupNum()
{
    deleteBackupNumIsSet_ = false;
}

int32_t OpExtendInfoSync::getErrSyncBackupNum() const
{
    return errSyncBackupNum_;
}

void OpExtendInfoSync::setErrSyncBackupNum(int32_t value)
{
    errSyncBackupNum_ = value;
    errSyncBackupNumIsSet_ = true;
}

bool OpExtendInfoSync::errSyncBackupNumIsSet() const
{
    return errSyncBackupNumIsSet_;
}

void OpExtendInfoSync::unseterrSyncBackupNum()
{
    errSyncBackupNumIsSet_ = false;
}

}
}
}
}
}


