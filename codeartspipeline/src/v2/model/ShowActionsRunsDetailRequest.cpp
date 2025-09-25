

#include "huaweicloud/codeartspipeline/v2/model/ShowActionsRunsDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowActionsRunsDetailRequest::ShowActionsRunsDetailRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

ShowActionsRunsDetailRequest::~ShowActionsRunsDetailRequest() = default;

void ShowActionsRunsDetailRequest::validate()
{
}

web::json::value ShowActionsRunsDetailRequest::toJson() const
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
bool ShowActionsRunsDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowActionsRunsDetailRequest::getDomainId() const
{
    return domainId_;
}

void ShowActionsRunsDetailRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowActionsRunsDetailRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowActionsRunsDetailRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowActionsRunsDetailRequest::getPipelineId() const
{
    return pipelineId_;
}

void ShowActionsRunsDetailRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowActionsRunsDetailRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowActionsRunsDetailRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowActionsRunsDetailRequest::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ShowActionsRunsDetailRequest::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ShowActionsRunsDetailRequest::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ShowActionsRunsDetailRequest::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


