

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectNoteRequiredAttributesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectNoteRequiredAttributesRequest::UpdateProjectNoteRequiredAttributesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectNoteRequiredAttributesRequest::~UpdateProjectNoteRequiredAttributesRequest() = default;

void UpdateProjectNoteRequiredAttributesRequest::validate()
{
}

web::json::value UpdateProjectNoteRequiredAttributesRequest::toJson() const
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
bool UpdateProjectNoteRequiredAttributesRequest::fromJson(const web::json::value& val)
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
            PostNoteRequiredAttributeDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectNoteRequiredAttributesRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectNoteRequiredAttributesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectNoteRequiredAttributesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectNoteRequiredAttributesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

PostNoteRequiredAttributeDto UpdateProjectNoteRequiredAttributesRequest::getBody() const
{
    return body_;
}

void UpdateProjectNoteRequiredAttributesRequest::setBody(const PostNoteRequiredAttributeDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectNoteRequiredAttributesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectNoteRequiredAttributesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


