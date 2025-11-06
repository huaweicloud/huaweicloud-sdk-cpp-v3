

#include "huaweicloud/codeartsrepo/v4/model/CreateProjectProtectedTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateProjectProtectedTagsRequest::CreateProjectProtectedTagsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProjectProtectedTagsRequest::~CreateProjectProtectedTagsRequest() = default;

void CreateProjectProtectedTagsRequest::validate()
{
}

web::json::value CreateProjectProtectedTagsRequest::toJson() const
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
bool CreateProjectProtectedTagsRequest::fromJson(const web::json::value& val)
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
            ProjectProtectedTagDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProjectProtectedTagsRequest::getProjectId() const
{
    return projectId_;
}

void CreateProjectProtectedTagsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateProjectProtectedTagsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateProjectProtectedTagsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ProjectProtectedTagDto CreateProjectProtectedTagsRequest::getBody() const
{
    return body_;
}

void CreateProjectProtectedTagsRequest::setBody(const ProjectProtectedTagDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectProtectedTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectProtectedTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


