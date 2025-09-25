

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineRunsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineRunsRequest::ListPipelineRunsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListPipelineRunsRequest::~ListPipelineRunsRequest() = default;

void ListPipelineRunsRequest::validate()
{
}

web::json::value ListPipelineRunsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPipelineRunsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListPipelineRunsQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListPipelineRunsRequest::getProjectId() const
{
    return projectId_;
}

void ListPipelineRunsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPipelineRunsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPipelineRunsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListPipelineRunsRequest::getPipelineId() const
{
    return pipelineId_;
}

void ListPipelineRunsRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ListPipelineRunsRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ListPipelineRunsRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

ListPipelineRunsQuery ListPipelineRunsRequest::getBody() const
{
    return body_;
}

void ListPipelineRunsRequest::setBody(const ListPipelineRunsQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPipelineRunsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPipelineRunsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


