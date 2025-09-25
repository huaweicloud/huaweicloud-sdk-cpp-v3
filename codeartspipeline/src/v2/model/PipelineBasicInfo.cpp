

#include "huaweicloud/codeartspipeline/v2/model/PipelineBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineBasicInfo::PipelineBasicInfo()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorName_ = "";
    executorNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    watched_ = "";
    watchedIsSet_ = false;
}

PipelineBasicInfo::~PipelineBasicInfo() = default;

void PipelineBasicInfo::validate()
{
}

web::json::value PipelineBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNameIsSet_) {
        val[utility::conversions::to_string_t("executor_name")] = ModelBase::toJson(executorName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(watchedIsSet_) {
        val[utility::conversions::to_string_t("watched")] = ModelBase::toJson(watched_);
    }

    return val;
}
bool PipelineBasicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("watched"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watched"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatched(refVal);
        }
    }
    return ok;
}


std::string PipelineBasicInfo::getProjectId() const
{
    return projectId_;
}

void PipelineBasicInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PipelineBasicInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PipelineBasicInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PipelineBasicInfo::getProjectName() const
{
    return projectName_;
}

void PipelineBasicInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool PipelineBasicInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void PipelineBasicInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string PipelineBasicInfo::getPipelineId() const
{
    return pipelineId_;
}

void PipelineBasicInfo::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineBasicInfo::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineBasicInfo::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineBasicInfo::getPipelineName() const
{
    return pipelineName_;
}

void PipelineBasicInfo::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool PipelineBasicInfo::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void PipelineBasicInfo::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

std::string PipelineBasicInfo::getCreatorId() const
{
    return creatorId_;
}

void PipelineBasicInfo::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool PipelineBasicInfo::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void PipelineBasicInfo::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string PipelineBasicInfo::getCreatorName() const
{
    return creatorName_;
}

void PipelineBasicInfo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool PipelineBasicInfo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void PipelineBasicInfo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string PipelineBasicInfo::getExecutorId() const
{
    return executorId_;
}

void PipelineBasicInfo::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool PipelineBasicInfo::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void PipelineBasicInfo::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string PipelineBasicInfo::getExecutorName() const
{
    return executorName_;
}

void PipelineBasicInfo::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool PipelineBasicInfo::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void PipelineBasicInfo::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

std::string PipelineBasicInfo::getStartTime() const
{
    return startTime_;
}

void PipelineBasicInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PipelineBasicInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PipelineBasicInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string PipelineBasicInfo::getCreateTime() const
{
    return createTime_;
}

void PipelineBasicInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PipelineBasicInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PipelineBasicInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PipelineBasicInfo::getWatched() const
{
    return watched_;
}

void PipelineBasicInfo::setWatched(const std::string& value)
{
    watched_ = value;
    watchedIsSet_ = true;
}

bool PipelineBasicInfo::watchedIsSet() const
{
    return watchedIsSet_;
}

void PipelineBasicInfo::unsetwatched()
{
    watchedIsSet_ = false;
}

}
}
}
}
}


