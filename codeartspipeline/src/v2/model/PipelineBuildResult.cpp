

#include "huaweicloud/codeartspipeline/v2/model/PipelineBuildResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineBuildResult::PipelineBuildResult()
{
    buildId_ = "";
    buildIdIsSet_ = false;
    elapseTime_ = "";
    elapseTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    outcome_ = "";
    outcomeIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

PipelineBuildResult::~PipelineBuildResult() = default;

void PipelineBuildResult::validate()
{
}

web::json::value PipelineBuildResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildIdIsSet_) {
        val[utility::conversions::to_string_t("build_id")] = ModelBase::toJson(buildId_);
    }
    if(elapseTimeIsSet_) {
        val[utility::conversions::to_string_t("elapse_time")] = ModelBase::toJson(elapseTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(outcomeIsSet_) {
        val[utility::conversions::to_string_t("outcome")] = ModelBase::toJson(outcome_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool PipelineBuildResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elapse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elapse_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElapseTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("outcome"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outcome"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutcome(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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


std::string PipelineBuildResult::getBuildId() const
{
    return buildId_;
}

void PipelineBuildResult::setBuildId(const std::string& value)
{
    buildId_ = value;
    buildIdIsSet_ = true;
}

bool PipelineBuildResult::buildIdIsSet() const
{
    return buildIdIsSet_;
}

void PipelineBuildResult::unsetbuildId()
{
    buildIdIsSet_ = false;
}

std::string PipelineBuildResult::getElapseTime() const
{
    return elapseTime_;
}

void PipelineBuildResult::setElapseTime(const std::string& value)
{
    elapseTime_ = value;
    elapseTimeIsSet_ = true;
}

bool PipelineBuildResult::elapseTimeIsSet() const
{
    return elapseTimeIsSet_;
}

void PipelineBuildResult::unsetelapseTime()
{
    elapseTimeIsSet_ = false;
}

std::string PipelineBuildResult::getEndTime() const
{
    return endTime_;
}

void PipelineBuildResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool PipelineBuildResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void PipelineBuildResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string PipelineBuildResult::getOutcome() const
{
    return outcome_;
}

void PipelineBuildResult::setOutcome(const std::string& value)
{
    outcome_ = value;
    outcomeIsSet_ = true;
}

bool PipelineBuildResult::outcomeIsSet() const
{
    return outcomeIsSet_;
}

void PipelineBuildResult::unsetoutcome()
{
    outcomeIsSet_ = false;
}

std::string PipelineBuildResult::getPipelineId() const
{
    return pipelineId_;
}

void PipelineBuildResult::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineBuildResult::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineBuildResult::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineBuildResult::getPipelineName() const
{
    return pipelineName_;
}

void PipelineBuildResult::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool PipelineBuildResult::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void PipelineBuildResult::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

std::string PipelineBuildResult::getStartTime() const
{
    return startTime_;
}

void PipelineBuildResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PipelineBuildResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PipelineBuildResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string PipelineBuildResult::getStatus() const
{
    return status_;
}

void PipelineBuildResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineBuildResult::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineBuildResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


