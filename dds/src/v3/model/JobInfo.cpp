

#include "huaweicloud/dds/v3/model/JobInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




JobInfo::JobInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    endedAt_ = "";
    endedAtIsSet_ = false;
}

JobInfo::~JobInfo() = default;

void JobInfo::validate()
{
}

web::json::value JobInfo::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(endedAtIsSet_) {
        val[utility::conversions::to_string_t("ended_at")] = ModelBase::toJson(endedAt_);
    }

    return val;
}

bool JobInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ended_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ended_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndedAt(refVal);
        }
    }
    return ok;
}

std::string JobInfo::getId() const
{
    return id_;
}

void JobInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobInfo::idIsSet() const
{
    return idIsSet_;
}

void JobInfo::unsetid()
{
    idIsSet_ = false;
}

std::string JobInfo::getName() const
{
    return name_;
}

void JobInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobInfo::nameIsSet() const
{
    return nameIsSet_;
}

void JobInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string JobInfo::getInstanceId() const
{
    return instanceId_;
}

void JobInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool JobInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void JobInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string JobInfo::getInstanceName() const
{
    return instanceName_;
}

void JobInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool JobInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void JobInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string JobInfo::getStatus() const
{
    return status_;
}

void JobInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobInfo::statusIsSet() const
{
    return statusIsSet_;
}

void JobInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobInfo::getProgress() const
{
    return progress_;
}

void JobInfo::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool JobInfo::progressIsSet() const
{
    return progressIsSet_;
}

void JobInfo::unsetprogress()
{
    progressIsSet_ = false;
}

std::string JobInfo::getFailReason() const
{
    return failReason_;
}

void JobInfo::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool JobInfo::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void JobInfo::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string JobInfo::getCreatedAt() const
{
    return createdAt_;
}

void JobInfo::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool JobInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void JobInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string JobInfo::getEndedAt() const
{
    return endedAt_;
}

void JobInfo::setEndedAt(const std::string& value)
{
    endedAt_ = value;
    endedAtIsSet_ = true;
}

bool JobInfo::endedAtIsSet() const
{
    return endedAtIsSet_;
}

void JobInfo::unsetendedAt()
{
    endedAtIsSet_ = false;
}

}
}
}
}
}


