

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineRunsPage_pipeline_runs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineRunsPage_pipeline_runs::ListPipelineRunsPage_pipeline_runs()
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
    detailUrl_ = "";
    detailUrlIsSet_ = false;
    modifyUrl_ = "";
    modifyUrlIsSet_ = false;
}

ListPipelineRunsPage_pipeline_runs::~ListPipelineRunsPage_pipeline_runs() = default;

void ListPipelineRunsPage_pipeline_runs::validate()
{
}

web::json::value ListPipelineRunsPage_pipeline_runs::toJson() const
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
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }
    if(modifyUrlIsSet_) {
        val[utility::conversions::to_string_t("modify_url")] = ModelBase::toJson(modifyUrl_);
    }

    return val;
}
bool ListPipelineRunsPage_pipeline_runs::fromJson(const web::json::value& val)
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
            std::vector<ListPipelineRunsPage_stage_status_list> refVal;
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
            ListPipelineRunsPage_build_params refVal;
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
    if(val.has_field(utility::conversions::to_string_t("detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailUrl(refVal);
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
    return ok;
}


std::string ListPipelineRunsPage_pipeline_runs::getPipelineId() const
{
    return pipelineId_;
}

void ListPipelineRunsPage_pipeline_runs::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ListPipelineRunsPage_pipeline_runs::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ListPipelineRunsPage_pipeline_runs::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

std::string ListPipelineRunsPage_pipeline_runs::getExecutorId() const
{
    return executorId_;
}

void ListPipelineRunsPage_pipeline_runs::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string ListPipelineRunsPage_pipeline_runs::getExecutorName() const
{
    return executorName_;
}

void ListPipelineRunsPage_pipeline_runs::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

std::vector<ListPipelineRunsPage_stage_status_list>& ListPipelineRunsPage_pipeline_runs::getStageStatusList()
{
    return stageStatusList_;
}

void ListPipelineRunsPage_pipeline_runs::setStageStatusList(const std::vector<ListPipelineRunsPage_stage_status_list>& value)
{
    stageStatusList_ = value;
    stageStatusListIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::stageStatusListIsSet() const
{
    return stageStatusListIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetstageStatusList()
{
    stageStatusListIsSet_ = false;
}

std::string ListPipelineRunsPage_pipeline_runs::getStatus() const
{
    return status_;
}

void ListPipelineRunsPage_pipeline_runs::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::statusIsSet() const
{
    return statusIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListPipelineRunsPage_pipeline_runs::getRunNumber() const
{
    return runNumber_;
}

void ListPipelineRunsPage_pipeline_runs::setRunNumber(int32_t value)
{
    runNumber_ = value;
    runNumberIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::runNumberIsSet() const
{
    return runNumberIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetrunNumber()
{
    runNumberIsSet_ = false;
}

std::string ListPipelineRunsPage_pipeline_runs::getTriggerType() const
{
    return triggerType_;
}

void ListPipelineRunsPage_pipeline_runs::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

ListPipelineRunsPage_build_params ListPipelineRunsPage_pipeline_runs::getBuildParams() const
{
    return buildParams_;
}

void ListPipelineRunsPage_pipeline_runs::setBuildParams(const ListPipelineRunsPage_build_params& value)
{
    buildParams_ = value;
    buildParamsIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::buildParamsIsSet() const
{
    return buildParamsIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetbuildParams()
{
    buildParamsIsSet_ = false;
}

PipelineLatestRun_artifact_params ListPipelineRunsPage_pipeline_runs::getArtifactParams() const
{
    return artifactParams_;
}

void ListPipelineRunsPage_pipeline_runs::setArtifactParams(const PipelineLatestRun_artifact_params& value)
{
    artifactParams_ = value;
    artifactParamsIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::artifactParamsIsSet() const
{
    return artifactParamsIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetartifactParams()
{
    artifactParamsIsSet_ = false;
}

int64_t ListPipelineRunsPage_pipeline_runs::getStartTime() const
{
    return startTime_;
}

void ListPipelineRunsPage_pipeline_runs::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListPipelineRunsPage_pipeline_runs::getEndTime() const
{
    return endTime_;
}

void ListPipelineRunsPage_pipeline_runs::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListPipelineRunsPage_pipeline_runs::getDetailUrl() const
{
    return detailUrl_;
}

void ListPipelineRunsPage_pipeline_runs::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

std::string ListPipelineRunsPage_pipeline_runs::getModifyUrl() const
{
    return modifyUrl_;
}

void ListPipelineRunsPage_pipeline_runs::setModifyUrl(const std::string& value)
{
    modifyUrl_ = value;
    modifyUrlIsSet_ = true;
}

bool ListPipelineRunsPage_pipeline_runs::modifyUrlIsSet() const
{
    return modifyUrlIsSet_;
}

void ListPipelineRunsPage_pipeline_runs::unsetmodifyUrl()
{
    modifyUrlIsSet_ = false;
}

}
}
}
}
}


