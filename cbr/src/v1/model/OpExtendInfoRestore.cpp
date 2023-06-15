

#include "huaweicloud/cbr/v1/model/OpExtendInfoRestore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoRestore::OpExtendInfoRestore()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
    targetResourceId_ = "";
    targetResourceIdIsSet_ = false;
    targetResourceName_ = "";
    targetResourceNameIsSet_ = false;
}

OpExtendInfoRestore::~OpExtendInfoRestore() = default;

void OpExtendInfoRestore::validate()
{
}

web::json::value OpExtendInfoRestore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }
    if(targetResourceIdIsSet_) {
        val[utility::conversions::to_string_t("target_resource_id")] = ModelBase::toJson(targetResourceId_);
    }
    if(targetResourceNameIsSet_) {
        val[utility::conversions::to_string_t("target_resource_name")] = ModelBase::toJson(targetResourceName_);
    }

    return val;
}

bool OpExtendInfoRestore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetResourceName(refVal);
        }
    }
    return ok;
}


std::string OpExtendInfoRestore::getBackupId() const
{
    return backupId_;
}

void OpExtendInfoRestore::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool OpExtendInfoRestore::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void OpExtendInfoRestore::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string OpExtendInfoRestore::getBackupName() const
{
    return backupName_;
}

void OpExtendInfoRestore::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool OpExtendInfoRestore::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void OpExtendInfoRestore::unsetbackupName()
{
    backupNameIsSet_ = false;
}

std::string OpExtendInfoRestore::getTargetResourceId() const
{
    return targetResourceId_;
}

void OpExtendInfoRestore::setTargetResourceId(const std::string& value)
{
    targetResourceId_ = value;
    targetResourceIdIsSet_ = true;
}

bool OpExtendInfoRestore::targetResourceIdIsSet() const
{
    return targetResourceIdIsSet_;
}

void OpExtendInfoRestore::unsettargetResourceId()
{
    targetResourceIdIsSet_ = false;
}

std::string OpExtendInfoRestore::getTargetResourceName() const
{
    return targetResourceName_;
}

void OpExtendInfoRestore::setTargetResourceName(const std::string& value)
{
    targetResourceName_ = value;
    targetResourceNameIsSet_ = true;
}

bool OpExtendInfoRestore::targetResourceNameIsSet() const
{
    return targetResourceNameIsSet_;
}

void OpExtendInfoRestore::unsettargetResourceName()
{
    targetResourceNameIsSet_ = false;
}

}
}
}
}
}


