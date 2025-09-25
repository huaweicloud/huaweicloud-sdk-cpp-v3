

#include "huaweicloud/codeartspipeline/v2/model/BatchMovePipelineToGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




BatchMovePipelineToGroupRequest::BatchMovePipelineToGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchMovePipelineToGroupRequest::~BatchMovePipelineToGroupRequest() = default;

void BatchMovePipelineToGroupRequest::validate()
{
}

web::json::value BatchMovePipelineToGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchMovePipelineToGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PipelineGroupBindDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchMovePipelineToGroupRequest::getProjectId() const
{
    return projectId_;
}

void BatchMovePipelineToGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchMovePipelineToGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchMovePipelineToGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

PipelineGroupBindDTO BatchMovePipelineToGroupRequest::getBody() const
{
    return body_;
}

void BatchMovePipelineToGroupRequest::setBody(const PipelineGroupBindDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchMovePipelineToGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchMovePipelineToGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


