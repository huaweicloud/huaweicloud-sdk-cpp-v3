

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineGroupRequest::CreatePipelineGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePipelineGroupRequest::~CreatePipelineGroupRequest() = default;

void CreatePipelineGroupRequest::validate()
{
}

web::json::value CreatePipelineGroupRequest::toJson() const
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
bool CreatePipelineGroupRequest::fromJson(const web::json::value& val)
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
            PipelineGroupCreateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePipelineGroupRequest::getProjectId() const
{
    return projectId_;
}

void CreatePipelineGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatePipelineGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatePipelineGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

PipelineGroupCreateDTO CreatePipelineGroupRequest::getBody() const
{
    return body_;
}

void CreatePipelineGroupRequest::setBody(const PipelineGroupCreateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePipelineGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePipelineGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


