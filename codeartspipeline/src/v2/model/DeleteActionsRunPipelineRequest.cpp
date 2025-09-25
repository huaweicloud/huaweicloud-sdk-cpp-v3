

#include "huaweicloud/codeartspipeline/v2/model/DeleteActionsRunPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteActionsRunPipelineRequest::DeleteActionsRunPipelineRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

DeleteActionsRunPipelineRequest::~DeleteActionsRunPipelineRequest() = default;

void DeleteActionsRunPipelineRequest::validate()
{
}

web::json::value DeleteActionsRunPipelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineRunIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_id")] = ModelBase::toJson(pipelineRunId_);
    }

    return val;
}
bool DeleteActionsRunPipelineRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pipeline_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRunId(refVal);
        }
    }
    return ok;
}


std::string DeleteActionsRunPipelineRequest::getDomainId() const
{
    return domainId_;
}

void DeleteActionsRunPipelineRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeleteActionsRunPipelineRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeleteActionsRunPipelineRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DeleteActionsRunPipelineRequest::getPipelineId() const
{
    return pipelineId_;
}

void DeleteActionsRunPipelineRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool DeleteActionsRunPipelineRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void DeleteActionsRunPipelineRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string DeleteActionsRunPipelineRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void DeleteActionsRunPipelineRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool DeleteActionsRunPipelineRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void DeleteActionsRunPipelineRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


