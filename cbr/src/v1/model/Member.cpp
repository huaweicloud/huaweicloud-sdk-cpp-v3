

#include "huaweicloud/cbr/v1/model/Member.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Member::Member()
{
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    destProjectId_ = "";
    destProjectIdIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

Member::~Member() = default;

void Member::validate()
{
}

web::json::value Member::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(destProjectIdIsSet_) {
        val[utility::conversions::to_string_t("dest_project_id")] = ModelBase::toJson(destProjectId_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool Member::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}

std::string Member::getStatus() const
{
    return status_;
}

void Member::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Member::statusIsSet() const
{
    return statusIsSet_;
}

void Member::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Member::getCreatedAt() const
{
    return createdAt_;
}

void Member::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Member::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Member::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string Member::getUpdatedAt() const
{
    return updatedAt_;
}

void Member::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool Member::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void Member::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string Member::getBackupId() const
{
    return backupId_;
}

void Member::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool Member::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void Member::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string Member::getImageId() const
{
    return imageId_;
}

void Member::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool Member::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void Member::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string Member::getDestProjectId() const
{
    return destProjectId_;
}

void Member::setDestProjectId(const std::string& value)
{
    destProjectId_ = value;
    destProjectIdIsSet_ = true;
}

bool Member::destProjectIdIsSet() const
{
    return destProjectIdIsSet_;
}

void Member::unsetdestProjectId()
{
    destProjectIdIsSet_ = false;
}

std::string Member::getVaultId() const
{
    return vaultId_;
}

void Member::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool Member::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void Member::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

std::string Member::getId() const
{
    return id_;
}

void Member::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Member::idIsSet() const
{
    return idIsSet_;
}

void Member::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


