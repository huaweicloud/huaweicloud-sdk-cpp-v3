

#include "huaweicloud/codeartspipeline/v2/model/ShowInstanceStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowInstanceStatusResponse::ShowInstanceStatusResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
    pipelineUrl_ = "";
    pipelineUrlIsSet_ = false;
}

ShowInstanceStatusResponse::~ShowInstanceStatusResponse() = default;

void ShowInstanceStatusResponse::validate()
{
}

web::json::value ShowInstanceStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }
    if(pipelineUrlIsSet_) {
        val[utility::conversions::to_string_t("pipeline_url")] = ModelBase::toJson(pipelineUrl_);
    }

    return val;
}
bool ShowInstanceStatusResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pipeline_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineUrl(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceStatusResponse::getTaskId() const
{
    return taskId_;
}

void ShowInstanceStatusResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowInstanceStatusResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowInstanceStatusResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowInstanceStatusResponse::getTaskStatus() const
{
    return taskStatus_;
}

void ShowInstanceStatusResponse::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ShowInstanceStatusResponse::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ShowInstanceStatusResponse::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

std::string ShowInstanceStatusResponse::getPipelineId() const
{
    return pipelineId_;
}

void ShowInstanceStatusResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowInstanceStatusResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowInstanceStatusResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowInstanceStatusResponse::getPipelineName() const
{
    return pipelineName_;
}

void ShowInstanceStatusResponse::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool ShowInstanceStatusResponse::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void ShowInstanceStatusResponse::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

std::string ShowInstanceStatusResponse::getPipelineUrl() const
{
    return pipelineUrl_;
}

void ShowInstanceStatusResponse::setPipelineUrl(const std::string& value)
{
    pipelineUrl_ = value;
    pipelineUrlIsSet_ = true;
}

bool ShowInstanceStatusResponse::pipelineUrlIsSet() const
{
    return pipelineUrlIsSet_;
}

void ShowInstanceStatusResponse::unsetpipelineUrl()
{
    pipelineUrlIsSet_ = false;
}

}
}
}
}
}


