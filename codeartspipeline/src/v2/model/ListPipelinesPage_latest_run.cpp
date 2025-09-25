

#include "huaweicloud/codeartspipeline/v2/model/ListPipelinesPage_latest_run.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelinesPage_latest_run::ListPipelinesPage_latest_run()
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

ListPipelinesPage_latest_run::~ListPipelinesPage_latest_run() = default;

void ListPipelinesPage_latest_run::validate()
{
}

web::json::value ListPipelinesPage_latest_run::toJson() const
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
bool ListPipelinesPage_latest_run::fromJson(const web::json::value& val)
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
            std::vector<ListPipelinesPage_latest_run_stage_status_list> refVal;
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
            ListPipelinesPage_latest_run_build_params refVal;
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


std::string ListPipelinesPage_latest_run::getPipelineId() const
{
    return pipelineId_;
}

void ListPipelinesPage_latest_run::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ListPipelinesPage_latest_run::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ListPipelinesPage_latest_run::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ListPipelinesPage_latest_run::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ListPipelinesPage_latest_run::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ListPipelinesPage_latest_run::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ListPipelinesPage_latest_run::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

std::string ListPipelinesPage_latest_run::getExecutorId() const
{
    return executorId_;
}

void ListPipelinesPage_latest_run::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool ListPipelinesPage_latest_run::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void ListPipelinesPage_latest_run::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string ListPipelinesPage_latest_run::getExecutorName() const
{
    return executorName_;
}

void ListPipelinesPage_latest_run::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool ListPipelinesPage_latest_run::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void ListPipelinesPage_latest_run::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

std::vector<ListPipelinesPage_latest_run_stage_status_list>& ListPipelinesPage_latest_run::getStageStatusList()
{
    return stageStatusList_;
}

void ListPipelinesPage_latest_run::setStageStatusList(const std::vector<ListPipelinesPage_latest_run_stage_status_list>& value)
{
    stageStatusList_ = value;
    stageStatusListIsSet_ = true;
}

bool ListPipelinesPage_latest_run::stageStatusListIsSet() const
{
    return stageStatusListIsSet_;
}

void ListPipelinesPage_latest_run::unsetstageStatusList()
{
    stageStatusListIsSet_ = false;
}

std::string ListPipelinesPage_latest_run::getStatus() const
{
    return status_;
}

void ListPipelinesPage_latest_run::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPipelinesPage_latest_run::statusIsSet() const
{
    return statusIsSet_;
}

void ListPipelinesPage_latest_run::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListPipelinesPage_latest_run::getRunNumber() const
{
    return runNumber_;
}

void ListPipelinesPage_latest_run::setRunNumber(int32_t value)
{
    runNumber_ = value;
    runNumberIsSet_ = true;
}

bool ListPipelinesPage_latest_run::runNumberIsSet() const
{
    return runNumberIsSet_;
}

void ListPipelinesPage_latest_run::unsetrunNumber()
{
    runNumberIsSet_ = false;
}

std::string ListPipelinesPage_latest_run::getTriggerType() const
{
    return triggerType_;
}

void ListPipelinesPage_latest_run::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool ListPipelinesPage_latest_run::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void ListPipelinesPage_latest_run::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

ListPipelinesPage_latest_run_build_params ListPipelinesPage_latest_run::getBuildParams() const
{
    return buildParams_;
}

void ListPipelinesPage_latest_run::setBuildParams(const ListPipelinesPage_latest_run_build_params& value)
{
    buildParams_ = value;
    buildParamsIsSet_ = true;
}

bool ListPipelinesPage_latest_run::buildParamsIsSet() const
{
    return buildParamsIsSet_;
}

void ListPipelinesPage_latest_run::unsetbuildParams()
{
    buildParamsIsSet_ = false;
}

PipelineLatestRun_artifact_params ListPipelinesPage_latest_run::getArtifactParams() const
{
    return artifactParams_;
}

void ListPipelinesPage_latest_run::setArtifactParams(const PipelineLatestRun_artifact_params& value)
{
    artifactParams_ = value;
    artifactParamsIsSet_ = true;
}

bool ListPipelinesPage_latest_run::artifactParamsIsSet() const
{
    return artifactParamsIsSet_;
}

void ListPipelinesPage_latest_run::unsetartifactParams()
{
    artifactParamsIsSet_ = false;
}

int64_t ListPipelinesPage_latest_run::getStartTime() const
{
    return startTime_;
}

void ListPipelinesPage_latest_run::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListPipelinesPage_latest_run::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListPipelinesPage_latest_run::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListPipelinesPage_latest_run::getEndTime() const
{
    return endTime_;
}

void ListPipelinesPage_latest_run::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListPipelinesPage_latest_run::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListPipelinesPage_latest_run::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListPipelinesPage_latest_run::getModifyUrl() const
{
    return modifyUrl_;
}

void ListPipelinesPage_latest_run::setModifyUrl(const std::string& value)
{
    modifyUrl_ = value;
    modifyUrlIsSet_ = true;
}

bool ListPipelinesPage_latest_run::modifyUrlIsSet() const
{
    return modifyUrlIsSet_;
}

void ListPipelinesPage_latest_run::unsetmodifyUrl()
{
    modifyUrlIsSet_ = false;
}

std::string ListPipelinesPage_latest_run::getDetailUrl() const
{
    return detailUrl_;
}

void ListPipelinesPage_latest_run::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool ListPipelinesPage_latest_run::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void ListPipelinesPage_latest_run::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

}
}
}
}
}


