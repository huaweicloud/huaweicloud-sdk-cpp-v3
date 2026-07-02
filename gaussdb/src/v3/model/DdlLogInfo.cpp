

#include "huaweicloud/gaussdb/v3/model/DdlLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DdlLogInfo::DdlLogInfo()
{
    id_ = "";
    idIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = 0;
    fileSizeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DdlLogInfo::~DdlLogInfo() = default;

void DdlLogInfo::validate()
{
}

web::json::value DdlLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DdlLogInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    return ok;
}


std::string DdlLogInfo::getId() const
{
    return id_;
}

void DdlLogInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DdlLogInfo::idIsSet() const
{
    return idIsSet_;
}

void DdlLogInfo::unsetid()
{
    idIsSet_ = false;
}

std::string DdlLogInfo::getFileName() const
{
    return fileName_;
}

void DdlLogInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DdlLogInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DdlLogInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

int32_t DdlLogInfo::getFileSize() const
{
    return fileSize_;
}

void DdlLogInfo::setFileSize(int32_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool DdlLogInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void DdlLogInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string DdlLogInfo::getCreateTime() const
{
    return createTime_;
}

void DdlLogInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DdlLogInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DdlLogInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DdlLogInfo::getEndTime() const
{
    return endTime_;
}

void DdlLogInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DdlLogInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DdlLogInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string DdlLogInfo::getStatus() const
{
    return status_;
}

void DdlLogInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DdlLogInfo::statusIsSet() const
{
    return statusIsSet_;
}

void DdlLogInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


