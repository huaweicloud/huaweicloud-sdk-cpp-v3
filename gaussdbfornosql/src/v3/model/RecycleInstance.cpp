

#include "huaweicloud/gaussdbfornosql/v3/model/RecycleInstance.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RecycleInstance::RecycleInstance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    datastoreIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    deletedAt_ = "";
    deletedAtIsSet_ = false;
    retainedUntil_ = "";
    retainedUntilIsSet_ = false;
}

RecycleInstance::~RecycleInstance() = default;

void RecycleInstance::validate()
{
}

web::json::value RecycleInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(deletedAtIsSet_) {
        val[utility::conversions::to_string_t("deleted_at")] = ModelBase::toJson(deletedAt_);
    }
    if(retainedUntilIsSet_) {
        val[utility::conversions::to_string_t("retained_until")] = ModelBase::toJson(retainedUntil_);
    }

    return val;
}

bool RecycleInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            RecycleDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retained_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retained_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetainedUntil(refVal);
        }
    }
    return ok;
}

std::string RecycleInstance::getId() const
{
    return id_;
}

void RecycleInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecycleInstance::idIsSet() const
{
    return idIsSet_;
}

void RecycleInstance::unsetid()
{
    idIsSet_ = false;
}

std::string RecycleInstance::getName() const
{
    return name_;
}

void RecycleInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RecycleInstance::nameIsSet() const
{
    return nameIsSet_;
}

void RecycleInstance::unsetname()
{
    nameIsSet_ = false;
}

std::string RecycleInstance::getMode() const
{
    return mode_;
}

void RecycleInstance::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool RecycleInstance::modeIsSet() const
{
    return modeIsSet_;
}

void RecycleInstance::unsetmode()
{
    modeIsSet_ = false;
}

RecycleDatastore RecycleInstance::getDatastore() const
{
    return datastore_;
}

void RecycleInstance::setDatastore(const RecycleDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool RecycleInstance::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void RecycleInstance::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string RecycleInstance::getChargeMode() const
{
    return chargeMode_;
}

void RecycleInstance::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool RecycleInstance::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void RecycleInstance::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string RecycleInstance::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecycleInstance::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecycleInstance::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecycleInstance::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RecycleInstance::getBackupId() const
{
    return backupId_;
}

void RecycleInstance::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RecycleInstance::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RecycleInstance::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string RecycleInstance::getCreatedAt() const
{
    return createdAt_;
}

void RecycleInstance::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RecycleInstance::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RecycleInstance::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RecycleInstance::getDeletedAt() const
{
    return deletedAt_;
}

void RecycleInstance::setDeletedAt(const std::string& value)
{
    deletedAt_ = value;
    deletedAtIsSet_ = true;
}

bool RecycleInstance::deletedAtIsSet() const
{
    return deletedAtIsSet_;
}

void RecycleInstance::unsetdeletedAt()
{
    deletedAtIsSet_ = false;
}

std::string RecycleInstance::getRetainedUntil() const
{
    return retainedUntil_;
}

void RecycleInstance::setRetainedUntil(const std::string& value)
{
    retainedUntil_ = value;
    retainedUntilIsSet_ = true;
}

bool RecycleInstance::retainedUntilIsSet() const
{
    return retainedUntilIsSet_;
}

void RecycleInstance::unsetretainedUntil()
{
    retainedUntilIsSet_ = false;
}

}
}
}
}
}


