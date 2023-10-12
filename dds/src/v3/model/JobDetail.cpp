

#include "huaweicloud/dds/v3/model/JobDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




JobDetail::JobDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    ended_ = "";
    endedIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    instanceIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

JobDetail::~JobDetail() = default;

void JobDetail::validate()
{
}

web::json::value JobDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(endedIsSet_) {
        val[utility::conversions::to_string_t("ended")] = ModelBase::toJson(ended_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool JobDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ended"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ended"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnded(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            JobInstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
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
    return ok;
}


std::string JobDetail::getId() const
{
    return id_;
}

void JobDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobDetail::idIsSet() const
{
    return idIsSet_;
}

void JobDetail::unsetid()
{
    idIsSet_ = false;
}

std::string JobDetail::getName() const
{
    return name_;
}

void JobDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobDetail::nameIsSet() const
{
    return nameIsSet_;
}

void JobDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string JobDetail::getStatus() const
{
    return status_;
}

void JobDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobDetail::statusIsSet() const
{
    return statusIsSet_;
}

void JobDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobDetail::getCreated() const
{
    return created_;
}

void JobDetail::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool JobDetail::createdIsSet() const
{
    return createdIsSet_;
}

void JobDetail::unsetcreated()
{
    createdIsSet_ = false;
}

std::string JobDetail::getEnded() const
{
    return ended_;
}

void JobDetail::setEnded(const std::string& value)
{
    ended_ = value;
    endedIsSet_ = true;
}

bool JobDetail::endedIsSet() const
{
    return endedIsSet_;
}

void JobDetail::unsetended()
{
    endedIsSet_ = false;
}

std::string JobDetail::getProgress() const
{
    return progress_;
}

void JobDetail::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool JobDetail::progressIsSet() const
{
    return progressIsSet_;
}

void JobDetail::unsetprogress()
{
    progressIsSet_ = false;
}

JobInstanceInfo JobDetail::getInstance() const
{
    return instance_;
}

void JobDetail::setInstance(const JobInstanceInfo& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool JobDetail::instanceIsSet() const
{
    return instanceIsSet_;
}

void JobDetail::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string JobDetail::getFailReason() const
{
    return failReason_;
}

void JobDetail::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool JobDetail::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void JobDetail::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


