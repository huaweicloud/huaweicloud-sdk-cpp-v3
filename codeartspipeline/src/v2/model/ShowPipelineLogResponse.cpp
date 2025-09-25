

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineLogResponse::ShowPipelineLogResponse()
{
    hasMore_ = false;
    hasMoreIsSet_ = false;
    endOffset_ = "";
    endOffsetIsSet_ = false;
    startOffset_ = "";
    startOffsetIsSet_ = false;
    log_ = "";
    logIsSet_ = false;
    stepRunId_ = "";
    stepRunIdIsSet_ = false;
}

ShowPipelineLogResponse::~ShowPipelineLogResponse() = default;

void ShowPipelineLogResponse::validate()
{
}

web::json::value ShowPipelineLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hasMoreIsSet_) {
        val[utility::conversions::to_string_t("has_more")] = ModelBase::toJson(hasMore_);
    }
    if(endOffsetIsSet_) {
        val[utility::conversions::to_string_t("end_offset")] = ModelBase::toJson(endOffset_);
    }
    if(startOffsetIsSet_) {
        val[utility::conversions::to_string_t("start_offset")] = ModelBase::toJson(startOffset_);
    }
    if(logIsSet_) {
        val[utility::conversions::to_string_t("log")] = ModelBase::toJson(log_);
    }
    if(stepRunIdIsSet_) {
        val[utility::conversions::to_string_t("step_run_id")] = ModelBase::toJson(stepRunId_);
    }

    return val;
}
bool ShowPipelineLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("has_more"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_more"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasMore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepRunId(refVal);
        }
    }
    return ok;
}


bool ShowPipelineLogResponse::isHasMore() const
{
    return hasMore_;
}

void ShowPipelineLogResponse::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ShowPipelineLogResponse::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ShowPipelineLogResponse::unsethasMore()
{
    hasMoreIsSet_ = false;
}

std::string ShowPipelineLogResponse::getEndOffset() const
{
    return endOffset_;
}

void ShowPipelineLogResponse::setEndOffset(const std::string& value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool ShowPipelineLogResponse::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void ShowPipelineLogResponse::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

std::string ShowPipelineLogResponse::getStartOffset() const
{
    return startOffset_;
}

void ShowPipelineLogResponse::setStartOffset(const std::string& value)
{
    startOffset_ = value;
    startOffsetIsSet_ = true;
}

bool ShowPipelineLogResponse::startOffsetIsSet() const
{
    return startOffsetIsSet_;
}

void ShowPipelineLogResponse::unsetstartOffset()
{
    startOffsetIsSet_ = false;
}

std::string ShowPipelineLogResponse::getLog() const
{
    return log_;
}

void ShowPipelineLogResponse::setLog(const std::string& value)
{
    log_ = value;
    logIsSet_ = true;
}

bool ShowPipelineLogResponse::logIsSet() const
{
    return logIsSet_;
}

void ShowPipelineLogResponse::unsetlog()
{
    logIsSet_ = false;
}

std::string ShowPipelineLogResponse::getStepRunId() const
{
    return stepRunId_;
}

void ShowPipelineLogResponse::setStepRunId(const std::string& value)
{
    stepRunId_ = value;
    stepRunIdIsSet_ = true;
}

bool ShowPipelineLogResponse::stepRunIdIsSet() const
{
    return stepRunIdIsSet_;
}

void ShowPipelineLogResponse::unsetstepRunId()
{
    stepRunIdIsSet_ = false;
}

}
}
}
}
}


