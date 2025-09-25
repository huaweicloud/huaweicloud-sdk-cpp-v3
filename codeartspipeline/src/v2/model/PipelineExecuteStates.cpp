

#include "huaweicloud/codeartspipeline/v2/model/PipelineExecuteStates.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineExecuteStates::PipelineExecuteStates()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    stagesIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    buildId_ = "";
    buildIdIsSet_ = false;
    detailUrl_ = "";
    detailUrlIsSet_ = false;
    modifyUrl_ = "";
    modifyUrlIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

PipelineExecuteStates::~PipelineExecuteStates() = default;

void PipelineExecuteStates::validate()
{
}

web::json::value PipelineExecuteStates::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(buildIdIsSet_) {
        val[utility::conversions::to_string_t("build_id")] = ModelBase::toJson(buildId_);
    }
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }
    if(modifyUrlIsSet_) {
        val[utility::conversions::to_string_t("modify_url")] = ModelBase::toJson(modifyUrl_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool PipelineExecuteStates::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<Stages> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pipeline_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("build_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildId(refVal);
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
    return ok;
}


std::string PipelineExecuteStates::getResult() const
{
    return result_;
}

void PipelineExecuteStates::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool PipelineExecuteStates::resultIsSet() const
{
    return resultIsSet_;
}

void PipelineExecuteStates::unsetresult()
{
    resultIsSet_ = false;
}

std::string PipelineExecuteStates::getStatus() const
{
    return status_;
}

void PipelineExecuteStates::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineExecuteStates::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineExecuteStates::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<Stages>& PipelineExecuteStates::getStages()
{
    return stages_;
}

void PipelineExecuteStates::setStages(const std::vector<Stages>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool PipelineExecuteStates::stagesIsSet() const
{
    return stagesIsSet_;
}

void PipelineExecuteStates::unsetstages()
{
    stagesIsSet_ = false;
}

std::string PipelineExecuteStates::getExecutor() const
{
    return executor_;
}

void PipelineExecuteStates::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool PipelineExecuteStates::executorIsSet() const
{
    return executorIsSet_;
}

void PipelineExecuteStates::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string PipelineExecuteStates::getPipelineName() const
{
    return pipelineName_;
}

void PipelineExecuteStates::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool PipelineExecuteStates::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void PipelineExecuteStates::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

std::string PipelineExecuteStates::getPipelineId() const
{
    return pipelineId_;
}

void PipelineExecuteStates::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineExecuteStates::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineExecuteStates::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineExecuteStates::getBuildId() const
{
    return buildId_;
}

void PipelineExecuteStates::setBuildId(const std::string& value)
{
    buildId_ = value;
    buildIdIsSet_ = true;
}

bool PipelineExecuteStates::buildIdIsSet() const
{
    return buildIdIsSet_;
}

void PipelineExecuteStates::unsetbuildId()
{
    buildIdIsSet_ = false;
}

std::string PipelineExecuteStates::getDetailUrl() const
{
    return detailUrl_;
}

void PipelineExecuteStates::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool PipelineExecuteStates::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void PipelineExecuteStates::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

std::string PipelineExecuteStates::getModifyUrl() const
{
    return modifyUrl_;
}

void PipelineExecuteStates::setModifyUrl(const std::string& value)
{
    modifyUrl_ = value;
    modifyUrlIsSet_ = true;
}

bool PipelineExecuteStates::modifyUrlIsSet() const
{
    return modifyUrlIsSet_;
}

void PipelineExecuteStates::unsetmodifyUrl()
{
    modifyUrlIsSet_ = false;
}

std::string PipelineExecuteStates::getStartTime() const
{
    return startTime_;
}

void PipelineExecuteStates::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PipelineExecuteStates::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PipelineExecuteStates::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string PipelineExecuteStates::getEndTime() const
{
    return endTime_;
}

void PipelineExecuteStates::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool PipelineExecuteStates::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void PipelineExecuteStates::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


