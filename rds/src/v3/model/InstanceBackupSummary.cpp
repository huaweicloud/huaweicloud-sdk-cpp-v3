

#include "huaweicloud/rds/v3/model/InstanceBackupSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceBackupSummary::InstanceBackupSummary()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    backupUsedSpace_ = 0.0;
    backupUsedSpaceIsSet_ = false;
    datastoreIsSet_ = false;
    spaceIsSet_ = false;
}

InstanceBackupSummary::~InstanceBackupSummary() = default;

void InstanceBackupSummary::validate()
{
}

web::json::value InstanceBackupSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(backupUsedSpaceIsSet_) {
        val[utility::conversions::to_string_t("backup_used_space")] = ModelBase::toJson(backupUsedSpace_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(spaceIsSet_) {
        val[utility::conversions::to_string_t("space")] = ModelBase::toJson(space_);
    }

    return val;
}
bool InstanceBackupSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_used_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_used_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUsedSpace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("space"));
        if(!fieldValue.is_null())
        {
            Space refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpace(refVal);
        }
    }
    return ok;
}


std::string InstanceBackupSummary::getInstanceId() const
{
    return instanceId_;
}

void InstanceBackupSummary::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceBackupSummary::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceBackupSummary::unsetinstanceId()
{
    instanceIdIsSet_ = false;
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

double InstanceBackupSummary::getBackupUsedSpace() const
{
    return backupUsedSpace_;
}

void InstanceBackupSummary::setBackupUsedSpace(double value)
{
    backupUsedSpace_ = value;
    backupUsedSpaceIsSet_ = true;
}

bool InstanceBackupSummary::backupUsedSpaceIsSet() const
{
    return backupUsedSpaceIsSet_;
}

void InstanceBackupSummary::unsetbackupUsedSpace()
{
    backupUsedSpaceIsSet_ = false;
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

Space InstanceBackupSummary::getSpace() const
{
    return space_;
}

void InstanceBackupSummary::setSpace(const Space& value)
{
    space_ = value;
    spaceIsSet_ = true;
}

bool InstanceBackupSummary::spaceIsSet() const
{
    return spaceIsSet_;
}

void InstanceBackupSummary::unsetspace()
{
    spaceIsSet_ = false;
}

}
}
}
}
}


