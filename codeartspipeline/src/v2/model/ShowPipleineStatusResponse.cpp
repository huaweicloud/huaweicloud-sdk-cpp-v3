

#include "huaweicloud/codeartspipeline/v2/model/ShowPipleineStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipleineStatusResponse::ShowPipleineStatusResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
    buildId_ = "";
    buildIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    parametersIsSet_ = false;
    statesIsSet_ = false;
    elapsedTime_ = "";
    elapsedTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    outcome_ = "";
    outcomeIsSet_ = false;
    detailUrl_ = "";
    detailUrlIsSet_ = false;
}

ShowPipleineStatusResponse::~ShowPipleineStatusResponse() = default;

void ShowPipleineStatusResponse::validate()
{
}

web::json::value ShowPipleineStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(buildIdIsSet_) {
        val[utility::conversions::to_string_t("build_id")] = ModelBase::toJson(buildId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }
    if(elapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("elapsed_time")] = ModelBase::toJson(elapsedTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(outcomeIsSet_) {
        val[utility::conversions::to_string_t("outcome")] = ModelBase::toJson(outcome_);
    }
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }

    return val;
}
bool ShowPipleineStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineStateStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elapsed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElapsedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("outcome"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outcome"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutcome(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailUrl(refVal);
        }
    }
    return ok;
}


std::string ShowPipleineStatusResponse::getPipelineId() const
{
    return pipelineId_;
}

void ShowPipleineStatusResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowPipleineStatusResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowPipleineStatusResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getPipelineName() const
{
    return pipelineName_;
}

void ShowPipleineStatusResponse::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool ShowPipleineStatusResponse::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void ShowPipleineStatusResponse::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getExecutor() const
{
    return executor_;
}

void ShowPipleineStatusResponse::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool ShowPipleineStatusResponse::executorIsSet() const
{
    return executorIsSet_;
}

void ShowPipleineStatusResponse::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getBuildId() const
{
    return buildId_;
}

void ShowPipleineStatusResponse::setBuildId(const std::string& value)
{
    buildId_ = value;
    buildIdIsSet_ = true;
}

bool ShowPipleineStatusResponse::buildIdIsSet() const
{
    return buildIdIsSet_;
}

void ShowPipleineStatusResponse::unsetbuildId()
{
    buildIdIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getStartTime() const
{
    return startTime_;
}

void ShowPipleineStatusResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowPipleineStatusResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowPipleineStatusResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getEndTime() const
{
    return endTime_;
}

void ShowPipleineStatusResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowPipleineStatusResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowPipleineStatusResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<PipelineParameter>& ShowPipleineStatusResponse::getParameters()
{
    return parameters_;
}

void ShowPipleineStatusResponse::setParameters(const std::vector<PipelineParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ShowPipleineStatusResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void ShowPipleineStatusResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<PipelineStateStatus>& ShowPipleineStatusResponse::getStates()
{
    return states_;
}

void ShowPipleineStatusResponse::setStates(const std::vector<PipelineStateStatus>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool ShowPipleineStatusResponse::statesIsSet() const
{
    return statesIsSet_;
}

void ShowPipleineStatusResponse::unsetstates()
{
    statesIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getElapsedTime() const
{
    return elapsedTime_;
}

void ShowPipleineStatusResponse::setElapsedTime(const std::string& value)
{
    elapsedTime_ = value;
    elapsedTimeIsSet_ = true;
}

bool ShowPipleineStatusResponse::elapsedTimeIsSet() const
{
    return elapsedTimeIsSet_;
}

void ShowPipleineStatusResponse::unsetelapsedTime()
{
    elapsedTimeIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getStatus() const
{
    return status_;
}

void ShowPipleineStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPipleineStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPipleineStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getOutcome() const
{
    return outcome_;
}

void ShowPipleineStatusResponse::setOutcome(const std::string& value)
{
    outcome_ = value;
    outcomeIsSet_ = true;
}

bool ShowPipleineStatusResponse::outcomeIsSet() const
{
    return outcomeIsSet_;
}

void ShowPipleineStatusResponse::unsetoutcome()
{
    outcomeIsSet_ = false;
}

std::string ShowPipleineStatusResponse::getDetailUrl() const
{
    return detailUrl_;
}

void ShowPipleineStatusResponse::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool ShowPipleineStatusResponse::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void ShowPipleineStatusResponse::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

}
}
}
}
}


