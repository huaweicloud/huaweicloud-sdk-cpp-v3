

#include "huaweicloud/gaussdbfornosql/v3/model/QueryInstanceBackupResponseBody_backups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




QueryInstanceBackupResponseBody_backups::QueryInstanceBackupResponseBody_backups()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    beginTime_ = utility::datetime();
    beginTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    datastoreIsSet_ = false;
}

QueryInstanceBackupResponseBody_backups::~QueryInstanceBackupResponseBody_backups() = default;

void QueryInstanceBackupResponseBody_backups::validate()
{
}

web::json::value QueryInstanceBackupResponseBody_backups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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

    return val;
}
bool QueryInstanceBackupResponseBody_backups::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
            QueryInstanceBackupResponseBody_datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    return ok;
}


std::string QueryInstanceBackupResponseBody_backups::getId() const
{
    return id_;
}

void QueryInstanceBackupResponseBody_backups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::idIsSet() const
{
    return idIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetid()
{
    idIsSet_ = false;
}

std::string QueryInstanceBackupResponseBody_backups::getName() const
{
    return name_;
}

void QueryInstanceBackupResponseBody_backups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::nameIsSet() const
{
    return nameIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryInstanceBackupResponseBody_backups::getDescription() const
{
    return description_;
}

void QueryInstanceBackupResponseBody_backups::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime QueryInstanceBackupResponseBody_backups::getBeginTime() const
{
    return beginTime_;
}

void QueryInstanceBackupResponseBody_backups::setBeginTime(const utility::datetime& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

utility::datetime QueryInstanceBackupResponseBody_backups::getEndTime() const
{
    return endTime_;
}

void QueryInstanceBackupResponseBody_backups::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string QueryInstanceBackupResponseBody_backups::getStatus() const
{
    return status_;
}

void QueryInstanceBackupResponseBody_backups::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::statusIsSet() const
{
    return statusIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetstatus()
{
    statusIsSet_ = false;
}

double QueryInstanceBackupResponseBody_backups::getSize() const
{
    return size_;
}

void QueryInstanceBackupResponseBody_backups::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::sizeIsSet() const
{
    return sizeIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetsize()
{
    sizeIsSet_ = false;
}

std::string QueryInstanceBackupResponseBody_backups::getType() const
{
    return type_;
}

void QueryInstanceBackupResponseBody_backups::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::typeIsSet() const
{
    return typeIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsettype()
{
    typeIsSet_ = false;
}

std::string QueryInstanceBackupResponseBody_backups::getInstanceId() const
{
    return instanceId_;
}

void QueryInstanceBackupResponseBody_backups::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string QueryInstanceBackupResponseBody_backups::getInstanceName() const
{
    return instanceName_;
}

void QueryInstanceBackupResponseBody_backups::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

QueryInstanceBackupResponseBody_datastore QueryInstanceBackupResponseBody_backups::getDatastore() const
{
    return datastore_;
}

void QueryInstanceBackupResponseBody_backups::setDatastore(const QueryInstanceBackupResponseBody_datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_backups::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void QueryInstanceBackupResponseBody_backups::unsetdatastore()
{
    datastoreIsSet_ = false;
}

}
}
}
}
}


