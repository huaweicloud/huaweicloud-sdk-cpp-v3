

#include "huaweicloud/cbr/v1/model/OpExtraInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtraInfo::OpExtraInfo()
{
    backupIsSet_ = false;
    commonIsSet_ = false;
    deleteIsSet_ = false;
    syncIsSet_ = false;
    removeResourcesIsSet_ = false;
    replicationIsSet_ = false;
    resourceIsSet_ = false;
    restoreIsSet_ = false;
    vaultDeleteIsSet_ = false;
}

OpExtraInfo::~OpExtraInfo() = default;

void OpExtraInfo::validate()
{
}

web::json::value OpExtraInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIsSet_) {
        val[utility::conversions::to_string_t("backup")] = ModelBase::toJson(backup_);
    }
    if(commonIsSet_) {
        val[utility::conversions::to_string_t("common")] = ModelBase::toJson(common_);
    }
    if(deleteIsSet_) {
        val[utility::conversions::to_string_t("delete")] = ModelBase::toJson(delete_);
    }
    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }
    if(removeResourcesIsSet_) {
        val[utility::conversions::to_string_t("remove_resources")] = ModelBase::toJson(removeResources_);
    }
    if(replicationIsSet_) {
        val[utility::conversions::to_string_t("replication")] = ModelBase::toJson(replication_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(restoreIsSet_) {
        val[utility::conversions::to_string_t("restore")] = ModelBase::toJson(restore_);
    }
    if(vaultDeleteIsSet_) {
        val[utility::conversions::to_string_t("vault_delete")] = ModelBase::toJson(vaultDelete_);
    }

    return val;
}

bool OpExtraInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoBckup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoCommon refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoDelete refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoSync refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remove_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remove_resources"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoRemoveResources refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoReplication refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            Resource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoRestore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_delete"));
        if(!fieldValue.is_null())
        {
            OpExtendInfoVaultDelete refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultDelete(refVal);
        }
    }
    return ok;
}

OpExtendInfoBckup OpExtraInfo::getBackup() const
{
    return backup_;
}

void OpExtraInfo::setBackup(const OpExtendInfoBckup& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool OpExtraInfo::backupIsSet() const
{
    return backupIsSet_;
}

void OpExtraInfo::unsetbackup()
{
    backupIsSet_ = false;
}

OpExtendInfoCommon OpExtraInfo::getCommon() const
{
    return common_;
}

void OpExtraInfo::setCommon(const OpExtendInfoCommon& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool OpExtraInfo::commonIsSet() const
{
    return commonIsSet_;
}

void OpExtraInfo::unsetcommon()
{
    commonIsSet_ = false;
}

OpExtendInfoDelete OpExtraInfo::getDelete() const
{
    return delete_;
}

void OpExtraInfo::setDelete(const OpExtendInfoDelete& value)
{
    delete_ = value;
    deleteIsSet_ = true;
}

bool OpExtraInfo::deleteIsSet() const
{
    return deleteIsSet_;
}

void OpExtraInfo::unsetdelete()
{
    deleteIsSet_ = false;
}

OpExtendInfoSync OpExtraInfo::getSync() const
{
    return sync_;
}

void OpExtraInfo::setSync(const OpExtendInfoSync& value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool OpExtraInfo::syncIsSet() const
{
    return syncIsSet_;
}

void OpExtraInfo::unsetsync()
{
    syncIsSet_ = false;
}

OpExtendInfoRemoveResources OpExtraInfo::getRemoveResources() const
{
    return removeResources_;
}

void OpExtraInfo::setRemoveResources(const OpExtendInfoRemoveResources& value)
{
    removeResources_ = value;
    removeResourcesIsSet_ = true;
}

bool OpExtraInfo::removeResourcesIsSet() const
{
    return removeResourcesIsSet_;
}

void OpExtraInfo::unsetremoveResources()
{
    removeResourcesIsSet_ = false;
}

OpExtendInfoReplication OpExtraInfo::getReplication() const
{
    return replication_;
}

void OpExtraInfo::setReplication(const OpExtendInfoReplication& value)
{
    replication_ = value;
    replicationIsSet_ = true;
}

bool OpExtraInfo::replicationIsSet() const
{
    return replicationIsSet_;
}

void OpExtraInfo::unsetreplication()
{
    replicationIsSet_ = false;
}

Resource OpExtraInfo::getResource() const
{
    return resource_;
}

void OpExtraInfo::setResource(const Resource& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool OpExtraInfo::resourceIsSet() const
{
    return resourceIsSet_;
}

void OpExtraInfo::unsetresource()
{
    resourceIsSet_ = false;
}

OpExtendInfoRestore OpExtraInfo::getRestore() const
{
    return restore_;
}

void OpExtraInfo::setRestore(const OpExtendInfoRestore& value)
{
    restore_ = value;
    restoreIsSet_ = true;
}

bool OpExtraInfo::restoreIsSet() const
{
    return restoreIsSet_;
}

void OpExtraInfo::unsetrestore()
{
    restoreIsSet_ = false;
}

OpExtendInfoVaultDelete OpExtraInfo::getVaultDelete() const
{
    return vaultDelete_;
}

void OpExtraInfo::setVaultDelete(const OpExtendInfoVaultDelete& value)
{
    vaultDelete_ = value;
    vaultDeleteIsSet_ = true;
}

bool OpExtraInfo::vaultDeleteIsSet() const
{
    return vaultDeleteIsSet_;
}

void OpExtraInfo::unsetvaultDelete()
{
    vaultDeleteIsSet_ = false;
}

}
}
}
}
}


