

#include "huaweicloud/gaussdbforopengauss/v3/model/Backups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




Backups::Backups()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    datastoreIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

Backups::~Backups() = default;

void Backups::validate()
{
}

web::json::value Backups::toJson() const
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
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool Backups::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            OpenGaussDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    return ok;
}


std::string Backups::getId() const
{
    return id_;
}

void Backups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Backups::idIsSet() const
{
    return idIsSet_;
}

void Backups::unsetid()
{
    idIsSet_ = false;
}

std::string Backups::getName() const
{
    return name_;
}

void Backups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Backups::nameIsSet() const
{
    return nameIsSet_;
}

void Backups::unsetname()
{
    nameIsSet_ = false;
}

std::string Backups::getDescription() const
{
    return description_;
}

void Backups::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Backups::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Backups::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Backups::getBeginTime() const
{
    return beginTime_;
}

void Backups::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool Backups::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void Backups::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string Backups::getEndTime() const
{
    return endTime_;
}

void Backups::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Backups::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Backups::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string Backups::getStatus() const
{
    return status_;
}

void Backups::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Backups::statusIsSet() const
{
    return statusIsSet_;
}

void Backups::unsetstatus()
{
    statusIsSet_ = false;
}

double Backups::getSize() const
{
    return size_;
}

void Backups::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Backups::sizeIsSet() const
{
    return sizeIsSet_;
}

void Backups::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Backups::getType() const
{
    return type_;
}

void Backups::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Backups::typeIsSet() const
{
    return typeIsSet_;
}

void Backups::unsettype()
{
    typeIsSet_ = false;
}

OpenGaussDatastore Backups::getDatastore() const
{
    return datastore_;
}

void Backups::setDatastore(const OpenGaussDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool Backups::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void Backups::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string Backups::getInstanceId() const
{
    return instanceId_;
}

void Backups::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Backups::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Backups::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


