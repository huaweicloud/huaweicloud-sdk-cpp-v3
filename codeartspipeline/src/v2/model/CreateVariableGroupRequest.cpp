

#include "huaweicloud/codeartspipeline/v2/model/CreateVariableGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateVariableGroupRequest::CreateVariableGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVariableGroupRequest::~CreateVariableGroupRequest() = default;

void CreateVariableGroupRequest::validate()
{
}

web::json::value CreateVariableGroupRequest::toJson() const
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
bool CreateVariableGroupRequest::fromJson(const web::json::value& val)
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
            CreateVariableGroupReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVariableGroupRequest::getProjectId() const
{
    return projectId_;
}

void CreateVariableGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateVariableGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateVariableGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateVariableGroupReq CreateVariableGroupRequest::getBody() const
{
    return body_;
}

void CreateVariableGroupRequest::setBody(const CreateVariableGroupReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVariableGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVariableGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


