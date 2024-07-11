

#include "huaweicloud/codeartsdeploy/v2/model/CreateAppGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateAppGroupsRequest::CreateAppGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAppGroupsRequest::~CreateAppGroupsRequest() = default;

void CreateAppGroupsRequest::validate()
{
}

web::json::value CreateAppGroupsRequest::toJson() const
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
bool CreateAppGroupsRequest::fromJson(const web::json::value& val)
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
            CreateAppGroupsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAppGroupsRequest::getProjectId() const
{
    return projectId_;
}

void CreateAppGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateAppGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateAppGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateAppGroupsRequestBody CreateAppGroupsRequest::getBody() const
{
    return body_;
}

void CreateAppGroupsRequest::setBody(const CreateAppGroupsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAppGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAppGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


