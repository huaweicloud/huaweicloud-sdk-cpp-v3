

#include "huaweicloud/rds/v3/model/PackLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PackLogInfo::PackLogInfo()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    sizeUnit_ = "";
    sizeUnitIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    queryStartTime_ = 0L;
    queryStartTimeIsSet_ = false;
    queryEndTime_ = 0L;
    queryEndTimeIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
}

PackLogInfo::~PackLogInfo() = default;

void PackLogInfo::validate()
{
}

web::json::value PackLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(sizeUnitIsSet_) {
        val[utility::conversions::to_string_t("size_unit")] = ModelBase::toJson(sizeUnit_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(queryStartTimeIsSet_) {
        val[utility::conversions::to_string_t("query_start_time")] = ModelBase::toJson(queryStartTime_);
    }
    if(queryEndTimeIsSet_) {
        val[utility::conversions::to_string_t("query_end_time")] = ModelBase::toJson(queryEndTime_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }

    return val;
}
bool PackLogInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSizeUnit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    return ok;
}


std::string PackLogInfo::getId() const
{
    return id_;
}

void PackLogInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PackLogInfo::idIsSet() const
{
    return idIsSet_;
}

void PackLogInfo::unsetid()
{
    idIsSet_ = false;
}

std::string PackLogInfo::getInstanceId() const
{
    return instanceId_;
}

void PackLogInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PackLogInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PackLogInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

double PackLogInfo::getSize() const
{
    return size_;
}

void PackLogInfo::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PackLogInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void PackLogInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PackLogInfo::getSizeUnit() const
{
    return sizeUnit_;
}

void PackLogInfo::setSizeUnit(const std::string& value)
{
    sizeUnit_ = value;
    sizeUnitIsSet_ = true;
}

bool PackLogInfo::sizeUnitIsSet() const
{
    return sizeUnitIsSet_;
}

void PackLogInfo::unsetsizeUnit()
{
    sizeUnitIsSet_ = false;
}

std::string PackLogInfo::getStatus() const
{
    return status_;
}

void PackLogInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PackLogInfo::statusIsSet() const
{
    return statusIsSet_;
}

void PackLogInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t PackLogInfo::getQueryStartTime() const
{
    return queryStartTime_;
}

void PackLogInfo::setQueryStartTime(int64_t value)
{
    queryStartTime_ = value;
    queryStartTimeIsSet_ = true;
}

bool PackLogInfo::queryStartTimeIsSet() const
{
    return queryStartTimeIsSet_;
}

void PackLogInfo::unsetqueryStartTime()
{
    queryStartTimeIsSet_ = false;
}

int64_t PackLogInfo::getQueryEndTime() const
{
    return queryEndTime_;
}

void PackLogInfo::setQueryEndTime(int64_t value)
{
    queryEndTime_ = value;
    queryEndTimeIsSet_ = true;
}

bool PackLogInfo::queryEndTimeIsSet() const
{
    return queryEndTimeIsSet_;
}

void PackLogInfo::unsetqueryEndTime()
{
    queryEndTimeIsSet_ = false;
}

std::string PackLogInfo::getFileName() const
{
    return fileName_;
}

void PackLogInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool PackLogInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void PackLogInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

}
}
}
}
}


