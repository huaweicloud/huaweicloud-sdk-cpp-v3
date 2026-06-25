

#include "huaweicloud/rds/v3/model/InstanceBackupSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceBackupSummary::InstanceBackupSummary()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    backupUseSpace_ = 0.0;
    backupUseSpaceIsSet_ = false;
    datastoreIsSet_ = false;
    spacesIsSet_ = false;
}

InstanceBackupSummary::~InstanceBackupSummary() = default;

void InstanceBackupSummary::validate()
{
}

web::json::value InstanceBackupSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(backupUseSpaceIsSet_) {
        val[utility::conversions::to_string_t("backup_use_space")] = ModelBase::toJson(backupUseSpace_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(spacesIsSet_) {
        val[utility::conversions::to_string_t("spaces")] = ModelBase::toJson(spaces_);
    }

    return val;
}
bool InstanceBackupSummary::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("backup_use_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_use_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUseSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            InstanceBackupDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spaces"));
        if(!fieldValue.is_null())
        {
            Spaces refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpaces(refVal);
        }
    }
    return ok;
}


std::string InstanceBackupSummary::getId() const
{
    return id_;
}

void InstanceBackupSummary::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstanceBackupSummary::idIsSet() const
{
    return idIsSet_;
}

void InstanceBackupSummary::unsetid()
{
    idIsSet_ = false;
}

std::string InstanceBackupSummary::getName() const
{
    return name_;
}

void InstanceBackupSummary::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstanceBackupSummary::nameIsSet() const
{
    return nameIsSet_;
}

void InstanceBackupSummary::unsetname()
{
    nameIsSet_ = false;
}

double InstanceBackupSummary::getBackupUseSpace() const
{
    return backupUseSpace_;
}

void InstanceBackupSummary::setBackupUseSpace(double value)
{
    backupUseSpace_ = value;
    backupUseSpaceIsSet_ = true;
}

bool InstanceBackupSummary::backupUseSpaceIsSet() const
{
    return backupUseSpaceIsSet_;
}

void InstanceBackupSummary::unsetbackupUseSpace()
{
    backupUseSpaceIsSet_ = false;
}

InstanceBackupDatastore InstanceBackupSummary::getDatastore() const
{
    return datastore_;
}

void InstanceBackupSummary::setDatastore(const InstanceBackupDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool InstanceBackupSummary::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void InstanceBackupSummary::unsetdatastore()
{
    datastoreIsSet_ = false;
}

Spaces InstanceBackupSummary::getSpaces() const
{
    return spaces_;
}

void InstanceBackupSummary::setSpaces(const Spaces& value)
{
    spaces_ = value;
    spacesIsSet_ = true;
}

bool InstanceBackupSummary::spacesIsSet() const
{
    return spacesIsSet_;
}

void InstanceBackupSummary::unsetspaces()
{
    spacesIsSet_ = false;
}

}
}
}
}
}


