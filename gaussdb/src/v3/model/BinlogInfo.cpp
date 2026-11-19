

#include "huaweicloud/gaussdb/v3/model/BinlogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BinlogInfo::BinlogInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

BinlogInfo::~BinlogInfo() = default;

void BinlogInfo::validate()
{
}

web::json::value BinlogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool BinlogInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    return ok;
}


std::string BinlogInfo::getId() const
{
    return id_;
}

void BinlogInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BinlogInfo::idIsSet() const
{
    return idIsSet_;
}

void BinlogInfo::unsetid()
{
    idIsSet_ = false;
}

std::string BinlogInfo::getName() const
{
    return name_;
}

void BinlogInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BinlogInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BinlogInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string BinlogInfo::getInstanceId() const
{
    return instanceId_;
}

void BinlogInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BinlogInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BinlogInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BinlogInfo::getInstanceName() const
{
    return instanceName_;
}

void BinlogInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool BinlogInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void BinlogInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int64_t BinlogInfo::getSize() const
{
    return size_;
}

void BinlogInfo::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BinlogInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void BinlogInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BinlogInfo::getBeginTime() const
{
    return beginTime_;
}

void BinlogInfo::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool BinlogInfo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void BinlogInfo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string BinlogInfo::getEndTime() const
{
    return endTime_;
}

void BinlogInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BinlogInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BinlogInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


