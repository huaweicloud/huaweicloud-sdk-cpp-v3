

#include "huaweicloud/gaussdb/v3/model/IncrementalBackups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




IncrementalBackups::IncrementalBackups()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

IncrementalBackups::~IncrementalBackups() = default;

void IncrementalBackups::validate()
{
}

web::json::value IncrementalBackups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool IncrementalBackups::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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


std::string IncrementalBackups::getId() const
{
    return id_;
}

void IncrementalBackups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IncrementalBackups::idIsSet() const
{
    return idIsSet_;
}

void IncrementalBackups::unsetid()
{
    idIsSet_ = false;
}

std::string IncrementalBackups::getName() const
{
    return name_;
}

void IncrementalBackups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IncrementalBackups::nameIsSet() const
{
    return nameIsSet_;
}

void IncrementalBackups::unsetname()
{
    nameIsSet_ = false;
}

std::string IncrementalBackups::getBeginTime() const
{
    return beginTime_;
}

void IncrementalBackups::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool IncrementalBackups::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void IncrementalBackups::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string IncrementalBackups::getEndTime() const
{
    return endTime_;
}

void IncrementalBackups::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool IncrementalBackups::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void IncrementalBackups::unsetendTime()
{
    endTimeIsSet_ = false;
}

double IncrementalBackups::getSize() const
{
    return size_;
}

void IncrementalBackups::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool IncrementalBackups::sizeIsSet() const
{
    return sizeIsSet_;
}

void IncrementalBackups::unsetsize()
{
    sizeIsSet_ = false;
}

std::string IncrementalBackups::getInstanceId() const
{
    return instanceId_;
}

void IncrementalBackups::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool IncrementalBackups::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void IncrementalBackups::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


