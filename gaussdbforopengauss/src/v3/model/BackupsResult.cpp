

#include "huaweicloud/gaussdbforopengauss/v3/model/BackupsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BackupsResult::BackupsResult()
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

BackupsResult::~BackupsResult() = default;

void BackupsResult::validate()
{
}

web::json::value BackupsResult::toJson() const
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
bool BackupsResult::fromJson(const web::json::value& val)
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
            OpenGaussDatastoreResult refVal;
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


std::string BackupsResult::getId() const
{
    return id_;
}

void BackupsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackupsResult::idIsSet() const
{
    return idIsSet_;
}

void BackupsResult::unsetid()
{
    idIsSet_ = false;
}

std::string BackupsResult::getName() const
{
    return name_;
}

void BackupsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupsResult::nameIsSet() const
{
    return nameIsSet_;
}

void BackupsResult::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupsResult::getDescription() const
{
    return description_;
}

void BackupsResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BackupsResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BackupsResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BackupsResult::getBeginTime() const
{
    return beginTime_;
}

void BackupsResult::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool BackupsResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void BackupsResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string BackupsResult::getEndTime() const
{
    return endTime_;
}

void BackupsResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BackupsResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BackupsResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string BackupsResult::getStatus() const
{
    return status_;
}

void BackupsResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BackupsResult::statusIsSet() const
{
    return statusIsSet_;
}

void BackupsResult::unsetstatus()
{
    statusIsSet_ = false;
}

double BackupsResult::getSize() const
{
    return size_;
}

void BackupsResult::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BackupsResult::sizeIsSet() const
{
    return sizeIsSet_;
}

void BackupsResult::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BackupsResult::getType() const
{
    return type_;
}

void BackupsResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BackupsResult::typeIsSet() const
{
    return typeIsSet_;
}

void BackupsResult::unsettype()
{
    typeIsSet_ = false;
}

OpenGaussDatastoreResult BackupsResult::getDatastore() const
{
    return datastore_;
}

void BackupsResult::setDatastore(const OpenGaussDatastoreResult& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool BackupsResult::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void BackupsResult::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string BackupsResult::getInstanceId() const
{
    return instanceId_;
}

void BackupsResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BackupsResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BackupsResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


