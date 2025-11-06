

#include "huaweicloud/codeartsrepo/v4/model/CreateGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateGroupRequest::CreateGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGroupRequest::~CreateGroupRequest() = default;

void CreateGroupRequest::validate()
{
}

web::json::value CreateGroupRequest::toJson() const
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
bool CreateGroupRequest::fromJson(const web::json::value& val)
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
            CreateGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateGroupRequest::getProjectId() const
{
    return projectId_;
}

void CreateGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateGroupRequestBody CreateGroupRequest::getBody() const
{
    return body_;
}

void CreateGroupRequest::setBody(const CreateGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


