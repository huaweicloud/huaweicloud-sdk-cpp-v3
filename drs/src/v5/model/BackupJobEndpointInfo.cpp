

#include "huaweicloud/drs/v5/model/BackupJobEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BackupJobEndpointInfo::BackupJobEndpointInfo()
{
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    msFileStreamStatus_ = "";
    msFileStreamStatusIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
}

BackupJobEndpointInfo::~BackupJobEndpointInfo() = default;

void BackupJobEndpointInfo::validate()
{
}

web::json::value BackupJobEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(msFileStreamStatusIsSet_) {
        val[utility::conversions::to_string_t("ms_file_stream_status")] = ModelBase::toJson(msFileStreamStatus_);
    }
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }

    return val;
}
bool BackupJobEndpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ms_file_stream_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ms_file_stream_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMsFileStreamStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    return ok;
}


std::string BackupJobEndpointInfo::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void BackupJobEndpointInfo::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool BackupJobEndpointInfo::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void BackupJobEndpointInfo::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

std::string BackupJobEndpointInfo::getMsFileStreamStatus() const
{
    return msFileStreamStatus_;
}

void BackupJobEndpointInfo::setMsFileStreamStatus(const std::string& value)
{
    msFileStreamStatus_ = value;
    msFileStreamStatusIsSet_ = true;
}

bool BackupJobEndpointInfo::msFileStreamStatusIsSet() const
{
    return msFileStreamStatusIsSet_;
}

void BackupJobEndpointInfo::unsetmsFileStreamStatus()
{
    msFileStreamStatusIsSet_ = false;
}

std::string BackupJobEndpointInfo::getFileId() const
{
    return fileId_;
}

void BackupJobEndpointInfo::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool BackupJobEndpointInfo::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void BackupJobEndpointInfo::unsetfileId()
{
    fileIdIsSet_ = false;
}

}
}
}
}
}


