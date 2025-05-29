

#include "huaweicloud/codeartsbuild/v3/model/RecyclingJob.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RecyclingJob::RecyclingJob()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    deleteTime_ = "";
    deleteTimeIsSet_ = false;
    createTimeStamp_ = "";
    createTimeStampIsSet_ = false;
    deleteTimeStamp_ = "";
    deleteTimeStampIsSet_ = false;
}

RecyclingJob::~RecyclingJob() = default;

void RecyclingJob::validate()
{
}

web::json::value RecyclingJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(deleteTimeIsSet_) {
        val[utility::conversions::to_string_t("delete_time")] = ModelBase::toJson(deleteTime_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(deleteTimeStampIsSet_) {
        val[utility::conversions::to_string_t("delete_time_stamp")] = ModelBase::toJson(deleteTimeStamp_);
    }

    return val;
}
bool RecyclingJob::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("delete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_time_stamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTimeStamp(refVal);
        }
    }
    return ok;
}


std::string RecyclingJob::getJobId() const
{
    return jobId_;
}

void RecyclingJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RecyclingJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RecyclingJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string RecyclingJob::getJobName() const
{
    return jobName_;
}

void RecyclingJob::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool RecyclingJob::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void RecyclingJob::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string RecyclingJob::getProjectId() const
{
    return projectId_;
}

void RecyclingJob::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RecyclingJob::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RecyclingJob::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RecyclingJob::getCreatorName() const
{
    return creatorName_;
}

void RecyclingJob::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool RecyclingJob::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void RecyclingJob::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string RecyclingJob::getCreatorId() const
{
    return creatorId_;
}

void RecyclingJob::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool RecyclingJob::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void RecyclingJob::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string RecyclingJob::getCreateTime() const
{
    return createTime_;
}

void RecyclingJob::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool RecyclingJob::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void RecyclingJob::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string RecyclingJob::getDeleteTime() const
{
    return deleteTime_;
}

void RecyclingJob::setDeleteTime(const std::string& value)
{
    deleteTime_ = value;
    deleteTimeIsSet_ = true;
}

bool RecyclingJob::deleteTimeIsSet() const
{
    return deleteTimeIsSet_;
}

void RecyclingJob::unsetdeleteTime()
{
    deleteTimeIsSet_ = false;
}

std::string RecyclingJob::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void RecyclingJob::setCreateTimeStamp(const std::string& value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool RecyclingJob::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void RecyclingJob::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string RecyclingJob::getDeleteTimeStamp() const
{
    return deleteTimeStamp_;
}

void RecyclingJob::setDeleteTimeStamp(const std::string& value)
{
    deleteTimeStamp_ = value;
    deleteTimeStampIsSet_ = true;
}

bool RecyclingJob::deleteTimeStampIsSet() const
{
    return deleteTimeStampIsSet_;
}

void RecyclingJob::unsetdeleteTimeStamp()
{
    deleteTimeStampIsSet_ = false;
}

}
}
}
}
}


