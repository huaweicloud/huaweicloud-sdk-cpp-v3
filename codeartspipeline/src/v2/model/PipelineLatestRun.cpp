

#include "huaweicloud/codeartspipeline/v2/model/PipelineLatestRun.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineLatestRun::PipelineLatestRun()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorName_ = "";
    executorNameIsSet_ = false;
    stageStatusListIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    runNumber_ = 0;
    runNumberIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    buildParamsIsSet_ = false;
    artifactParamsIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    modifyUrl_ = "";
    modifyUrlIsSet_ = false;
    detailUrl_ = "";
    detailUrlIsSet_ = false;
}

PipelineLatestRun::~PipelineLatestRun() = default;

void PipelineLatestRun::validate()
{
}

web::json::value PipelineLatestRun::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineRunIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_id")] = ModelBase::toJson(pipelineRunId_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNameIsSet_) {
        val[utility::conversions::to_string_t("executor_name")] = ModelBase::toJson(executorName_);
    }
    if(stageStatusListIsSet_) {
        val[utility::conversions::to_string_t("stage_status_list")] = ModelBase::toJson(stageStatusList_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(runNumberIsSet_) {
        val[utility::conversions::to_string_t("run_number")] = ModelBase::toJson(runNumber_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(buildParamsIsSet_) {
        val[utility::conversions::to_string_t("build_params")] = ModelBase::toJson(buildParams_);
    }
    if(artifactParamsIsSet_) {
        val[utility::conversions::to_string_t("artifact_params")] = ModelBase::toJson(artifactParams_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(modifyUrlIsSet_) {
        val[utility::conversions::to_string_t("modify_url")] = ModelBase::toJson(modifyUrl_);
    }
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }

    return val;
}
bool PipelineLatestRun::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pipeline_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRunId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stage_status_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_status_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineLatestRun_stage_status_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageStatusList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("run_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_params"));
        if(!fieldValue.is_null())
        {
            PipelineLatestRun_build_params refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_params"));
        if(!fieldValue.is_null())
        {
            PipelineLatestRun_artifact_params refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyUrl(refVal);
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


std::string PipelineLatestRun::getPipelineId() const
{
    return pipelineId_;
}

void PipelineLatestRun::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineLatestRun::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineLatestRun::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineLatestRun::getPipelineRunId() const
{
    return pipelineRunId_;
}

void PipelineLatestRun::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool PipelineLatestRun::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void PipelineLatestRun::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

std::string PipelineLatestRun::getExecutorId() const
{
    return executorId_;
}

void PipelineLatestRun::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool PipelineLatestRun::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void PipelineLatestRun::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string PipelineLatestRun::getExecutorName() const
{
    return executorName_;
}

void PipelineLatestRun::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool PipelineLatestRun::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void PipelineLatestRun::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

std::vector<PipelineLatestRun_stage_status_list>& PipelineLatestRun::getStageStatusList()
{
    return stageStatusList_;
}

void PipelineLatestRun::setStageStatusList(const std::vector<PipelineLatestRun_stage_status_list>& value)
{
    stageStatusList_ = value;
    stageStatusListIsSet_ = true;
}

bool PipelineLatestRun::stageStatusListIsSet() const
{
    return stageStatusListIsSet_;
}

void PipelineLatestRun::unsetstageStatusList()
{
    stageStatusListIsSet_ = false;
}

std::string PipelineLatestRun::getStatus() const
{
    return status_;
}

void PipelineLatestRun::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineLatestRun::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineLatestRun::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t PipelineLatestRun::getRunNumber() const
{
    return runNumber_;
}

void PipelineLatestRun::setRunNumber(int32_t value)
{
    runNumber_ = value;
    runNumberIsSet_ = true;
}

bool PipelineLatestRun::runNumberIsSet() const
{
    return runNumberIsSet_;
}

void PipelineLatestRun::unsetrunNumber()
{
    runNumberIsSet_ = false;
}

std::string PipelineLatestRun::getTriggerType() const
{
    return triggerType_;
}

void PipelineLatestRun::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool PipelineLatestRun::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void PipelineLatestRun::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

PipelineLatestRun_build_params PipelineLatestRun::getBuildParams() const
{
    return buildParams_;
}

void PipelineLatestRun::setBuildParams(const PipelineLatestRun_build_params& value)
{
    buildParams_ = value;
    buildParamsIsSet_ = true;
}

bool PipelineLatestRun::buildParamsIsSet() const
{
    return buildParamsIsSet_;
}

void PipelineLatestRun::unsetbuildParams()
{
    buildParamsIsSet_ = false;
}

PipelineLatestRun_artifact_params PipelineLatestRun::getArtifactParams() const
{
    return artifactParams_;
}

void PipelineLatestRun::setArtifactParams(const PipelineLatestRun_artifact_params& value)
{
    artifactParams_ = value;
    artifactParamsIsSet_ = true;
}

bool PipelineLatestRun::artifactParamsIsSet() const
{
    return artifactParamsIsSet_;
}

void PipelineLatestRun::unsetartifactParams()
{
    artifactParamsIsSet_ = false;
}

int64_t PipelineLatestRun::getStartTime() const
{
    return startTime_;
}

void PipelineLatestRun::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PipelineLatestRun::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PipelineLatestRun::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t PipelineLatestRun::getEndTime() const
{
    return endTime_;
}

void PipelineLatestRun::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool PipelineLatestRun::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void PipelineLatestRun::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string PipelineLatestRun::getModifyUrl() const
{
    return modifyUrl_;
}

void PipelineLatestRun::setModifyUrl(const std::string& value)
{
    modifyUrl_ = value;
    modifyUrlIsSet_ = true;
}

bool PipelineLatestRun::modifyUrlIsSet() const
{
    return modifyUrlIsSet_;
}

void PipelineLatestRun::unsetmodifyUrl()
{
    modifyUrlIsSet_ = false;
}

std::string PipelineLatestRun::getDetailUrl() const
{
    return detailUrl_;
}

void PipelineLatestRun::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool PipelineLatestRun::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void PipelineLatestRun::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

}
}
}
}
}


