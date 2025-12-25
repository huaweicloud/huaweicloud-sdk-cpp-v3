

#include "huaweicloud/codeartsartifact/v2/model/SecGuardTaskDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




SecGuardTaskDetail::SecGuardTaskDetail()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    scanPath_ = "";
    scanPathIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    opensourceIsSet_ = false;
    virus_ = 0;
    virusIsSet_ = false;
    malwareIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SecGuardTaskDetail::~SecGuardTaskDetail() = default;

void SecGuardTaskDetail::validate()
{
}

web::json::value SecGuardTaskDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(scanPathIsSet_) {
        val[utility::conversions::to_string_t("scan_path")] = ModelBase::toJson(scanPath_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(opensourceIsSet_) {
        val[utility::conversions::to_string_t("opensource")] = ModelBase::toJson(opensource_);
    }
    if(virusIsSet_) {
        val[utility::conversions::to_string_t("virus")] = ModelBase::toJson(virus_);
    }
    if(malwareIsSet_) {
        val[utility::conversions::to_string_t("malware")] = ModelBase::toJson(malware_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SecGuardTaskDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scan_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scan_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScanPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opensource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opensource"));
        if(!fieldValue.is_null())
        {
            OpensourceCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpensource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("malware"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("malware"));
        if(!fieldValue.is_null())
        {
            MalwareCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMalware(refVal);
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


std::string SecGuardTaskDetail::getTaskId() const
{
    return taskId_;
}

void SecGuardTaskDetail::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool SecGuardTaskDetail::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void SecGuardTaskDetail::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string SecGuardTaskDetail::getTaskName() const
{
    return taskName_;
}

void SecGuardTaskDetail::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool SecGuardTaskDetail::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void SecGuardTaskDetail::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string SecGuardTaskDetail::getScanPath() const
{
    return scanPath_;
}

void SecGuardTaskDetail::setScanPath(const std::string& value)
{
    scanPath_ = value;
    scanPathIsSet_ = true;
}

bool SecGuardTaskDetail::scanPathIsSet() const
{
    return scanPathIsSet_;
}

void SecGuardTaskDetail::unsetscanPath()
{
    scanPathIsSet_ = false;
}

std::string SecGuardTaskDetail::getFileName() const
{
    return fileName_;
}

void SecGuardTaskDetail::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool SecGuardTaskDetail::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void SecGuardTaskDetail::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string SecGuardTaskDetail::getDisplayName() const
{
    return displayName_;
}

void SecGuardTaskDetail::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool SecGuardTaskDetail::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void SecGuardTaskDetail::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string SecGuardTaskDetail::getPath() const
{
    return path_;
}

void SecGuardTaskDetail::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool SecGuardTaskDetail::pathIsSet() const
{
    return pathIsSet_;
}

void SecGuardTaskDetail::unsetpath()
{
    pathIsSet_ = false;
}

std::string SecGuardTaskDetail::getCreatedTime() const
{
    return createdTime_;
}

void SecGuardTaskDetail::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool SecGuardTaskDetail::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void SecGuardTaskDetail::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

OpensourceCount SecGuardTaskDetail::getOpensource() const
{
    return opensource_;
}

void SecGuardTaskDetail::setOpensource(const OpensourceCount& value)
{
    opensource_ = value;
    opensourceIsSet_ = true;
}

bool SecGuardTaskDetail::opensourceIsSet() const
{
    return opensourceIsSet_;
}

void SecGuardTaskDetail::unsetopensource()
{
    opensourceIsSet_ = false;
}

int32_t SecGuardTaskDetail::getVirus() const
{
    return virus_;
}

void SecGuardTaskDetail::setVirus(int32_t value)
{
    virus_ = value;
    virusIsSet_ = true;
}

bool SecGuardTaskDetail::virusIsSet() const
{
    return virusIsSet_;
}

void SecGuardTaskDetail::unsetvirus()
{
    virusIsSet_ = false;
}

MalwareCount SecGuardTaskDetail::getMalware() const
{
    return malware_;
}

void SecGuardTaskDetail::setMalware(const MalwareCount& value)
{
    malware_ = value;
    malwareIsSet_ = true;
}

bool SecGuardTaskDetail::malwareIsSet() const
{
    return malwareIsSet_;
}

void SecGuardTaskDetail::unsetmalware()
{
    malwareIsSet_ = false;
}

std::string SecGuardTaskDetail::getStatus() const
{
    return status_;
}

void SecGuardTaskDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SecGuardTaskDetail::statusIsSet() const
{
    return statusIsSet_;
}

void SecGuardTaskDetail::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


