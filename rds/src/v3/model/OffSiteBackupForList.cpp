

#include "huaweicloud/rds/v3/model/OffSiteBackupForList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OffSiteBackupForList::OffSiteBackupForList()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    databasesIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    datastoreIsSet_ = false;
    associatedWithDdm_ = false;
    associatedWithDdmIsSet_ = false;
}

OffSiteBackupForList::~OffSiteBackupForList() = default;

void OffSiteBackupForList::validate()
{
}

web::json::value OffSiteBackupForList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(associatedWithDdmIsSet_) {
        val[utility::conversions::to_string_t("associated_with_ddm")] = ModelBase::toJson(associatedWithDdm_);
    }

    return val;
}
bool OffSiteBackupForList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            ParaGroupDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_with_ddm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_with_ddm"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedWithDdm(refVal);
        }
    }
    return ok;
}


std::string OffSiteBackupForList::getId() const
{
    return id_;
}

void OffSiteBackupForList::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OffSiteBackupForList::idIsSet() const
{
    return idIsSet_;
}

void OffSiteBackupForList::unsetid()
{
    idIsSet_ = false;
}

std::string OffSiteBackupForList::getInstanceId() const
{
    return instanceId_;
}

void OffSiteBackupForList::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool OffSiteBackupForList::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void OffSiteBackupForList::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string OffSiteBackupForList::getName() const
{
    return name_;
}

void OffSiteBackupForList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OffSiteBackupForList::nameIsSet() const
{
    return nameIsSet_;
}

void OffSiteBackupForList::unsetname()
{
    nameIsSet_ = false;
}

std::vector<BackupDatabase>& OffSiteBackupForList::getDatabases()
{
    return databases_;
}

void OffSiteBackupForList::setDatabases(const std::vector<BackupDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool OffSiteBackupForList::databasesIsSet() const
{
    return databasesIsSet_;
}

void OffSiteBackupForList::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string OffSiteBackupForList::getBeginTime() const
{
    return beginTime_;
}

void OffSiteBackupForList::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool OffSiteBackupForList::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void OffSiteBackupForList::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string OffSiteBackupForList::getEndTime() const
{
    return endTime_;
}

void OffSiteBackupForList::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool OffSiteBackupForList::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void OffSiteBackupForList::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string OffSiteBackupForList::getStatus() const
{
    return status_;
}

void OffSiteBackupForList::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OffSiteBackupForList::statusIsSet() const
{
    return statusIsSet_;
}

void OffSiteBackupForList::unsetstatus()
{
    statusIsSet_ = false;
}

std::string OffSiteBackupForList::getType() const
{
    return type_;
}

void OffSiteBackupForList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OffSiteBackupForList::typeIsSet() const
{
    return typeIsSet_;
}

void OffSiteBackupForList::unsettype()
{
    typeIsSet_ = false;
}

int64_t OffSiteBackupForList::getSize() const
{
    return size_;
}

void OffSiteBackupForList::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool OffSiteBackupForList::sizeIsSet() const
{
    return sizeIsSet_;
}

void OffSiteBackupForList::unsetsize()
{
    sizeIsSet_ = false;
}

ParaGroupDatastore OffSiteBackupForList::getDatastore() const
{
    return datastore_;
}

void OffSiteBackupForList::setDatastore(const ParaGroupDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool OffSiteBackupForList::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void OffSiteBackupForList::unsetdatastore()
{
    datastoreIsSet_ = false;
}

bool OffSiteBackupForList::isAssociatedWithDdm() const
{
    return associatedWithDdm_;
}

void OffSiteBackupForList::setAssociatedWithDdm(bool value)
{
    associatedWithDdm_ = value;
    associatedWithDdmIsSet_ = true;
}

bool OffSiteBackupForList::associatedWithDdmIsSet() const
{
    return associatedWithDdmIsSet_;
}

void OffSiteBackupForList::unsetassociatedWithDdm()
{
    associatedWithDdmIsSet_ = false;
}

}
}
}
}
}


