

#include "huaweicloud/gaussdbfornosql/v3/model/Backup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




Backup::Backup()
{
    id_ = "";
    idIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    datastoreIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    databaseTablesIsSet_ = false;
}

Backup::~Backup() = default;

void Backup::validate()
{
}

web::json::value Backup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(databaseTablesIsSet_) {
        val[utility::conversions::to_string_t("database_tables")] = ModelBase::toJson(databaseTables_);
    }

    return val;
}

bool Backup::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            Datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("database_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDatabaseTableInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseTables(refVal);
        }
    }
    return ok;
}

std::string Backup::getId() const
{
    return id_;
}

void Backup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Backup::idIsSet() const
{
    return idIsSet_;
}

void Backup::unsetid()
{
    idIsSet_ = false;
}

std::string Backup::getDescription() const
{
    return description_;
}

void Backup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Backup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Backup::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Backup::getInstanceId() const
{
    return instanceId_;
}

void Backup::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Backup::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Backup::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string Backup::getInstanceName() const
{
    return instanceName_;
}

void Backup::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool Backup::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void Backup::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

Datastore Backup::getDatastore() const
{
    return datastore_;
}

void Backup::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool Backup::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void Backup::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string Backup::getName() const
{
    return name_;
}

void Backup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Backup::nameIsSet() const
{
    return nameIsSet_;
}

void Backup::unsetname()
{
    nameIsSet_ = false;
}

std::string Backup::getType() const
{
    return type_;
}

void Backup::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Backup::typeIsSet() const
{
    return typeIsSet_;
}

void Backup::unsettype()
{
    typeIsSet_ = false;
}

double Backup::getSize() const
{
    return size_;
}

void Backup::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Backup::sizeIsSet() const
{
    return sizeIsSet_;
}

void Backup::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Backup::getStatus() const
{
    return status_;
}

void Backup::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Backup::statusIsSet() const
{
    return statusIsSet_;
}

void Backup::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Backup::getBeginTime() const
{
    return beginTime_;
}

void Backup::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool Backup::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void Backup::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string Backup::getEndTime() const
{
    return endTime_;
}

void Backup::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Backup::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Backup::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<QueryDatabaseTableInfo>& Backup::getDatabaseTables()
{
    return databaseTables_;
}

void Backup::setDatabaseTables(const std::vector<QueryDatabaseTableInfo>& value)
{
    databaseTables_ = value;
    databaseTablesIsSet_ = true;
}

bool Backup::databaseTablesIsSet() const
{
    return databaseTablesIsSet_;
}

void Backup::unsetdatabaseTables()
{
    databaseTablesIsSet_ = false;
}

}
}
}
}
}


