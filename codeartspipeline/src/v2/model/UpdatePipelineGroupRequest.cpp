

#include "huaweicloud/codeartspipeline/v2/model/UpdatePipelineGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePipelineGroupRequest::UpdatePipelineGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePipelineGroupRequest::~UpdatePipelineGroupRequest() = default;

void UpdatePipelineGroupRequest::validate()
{
}

web::json::value UpdatePipelineGroupRequest::toJson() const
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
bool UpdatePipelineGroupRequest::fromJson(const web::json::value& val)
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
            PipelineGroupUpdateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePipelineGroupRequest::getProjectId() const
{
    return projectId_;
}

void UpdatePipelineGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdatePipelineGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdatePipelineGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

PipelineGroupUpdateDTO UpdatePipelineGroupRequest::getBody() const
{
    return body_;
}

void UpdatePipelineGroupRequest::setBody(const PipelineGroupUpdateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePipelineGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePipelineGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


