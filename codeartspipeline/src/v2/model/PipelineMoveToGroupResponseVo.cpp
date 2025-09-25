

#include "huaweicloud/codeartspipeline/v2/model/PipelineMoveToGroupResponseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineMoveToGroupResponseVo::PipelineMoveToGroupResponseVo()
{
    code_ = "";
    codeIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
}

PipelineMoveToGroupResponseVo::~PipelineMoveToGroupResponseVo() = default;

void PipelineMoveToGroupResponseVo::validate()
{
}

web::json::value PipelineMoveToGroupResponseVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }

    return val;
}
bool PipelineMoveToGroupResponseVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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
    return ok;
}


std::string PipelineMoveToGroupResponseVo::getCode() const
{
    return code_;
}

void PipelineMoveToGroupResponseVo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool PipelineMoveToGroupResponseVo::codeIsSet() const
{
    return codeIsSet_;
}

void PipelineMoveToGroupResponseVo::unsetcode()
{
    codeIsSet_ = false;
}

std::string PipelineMoveToGroupResponseVo::getPipelineId() const
{
    return pipelineId_;
}

void PipelineMoveToGroupResponseVo::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineMoveToGroupResponseVo::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineMoveToGroupResponseVo::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineMoveToGroupResponseVo::getPipelineName() const
{
    return pipelineName_;
}

void PipelineMoveToGroupResponseVo::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool PipelineMoveToGroupResponseVo::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void PipelineMoveToGroupResponseVo::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

}
}
}
}
}


