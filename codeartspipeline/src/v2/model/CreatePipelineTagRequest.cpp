

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineTagRequest::CreatePipelineTagRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePipelineTagRequest::~CreatePipelineTagRequest() = default;

void CreatePipelineTagRequest::validate()
{
}

web::json::value CreatePipelineTagRequest::toJson() const
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
bool CreatePipelineTagRequest::fromJson(const web::json::value& val)
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
            CreateTagReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePipelineTagRequest::getProjectId() const
{
    return projectId_;
}

void CreatePipelineTagRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatePipelineTagRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatePipelineTagRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateTagReq CreatePipelineTagRequest::getBody() const
{
    return body_;
}

void CreatePipelineTagRequest::setBody(const CreateTagReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePipelineTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePipelineTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


