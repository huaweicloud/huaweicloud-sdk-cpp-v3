

#include "huaweicloud/codeartsdeploy/v2/model/MoveAppGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




MoveAppGroupsRequest::MoveAppGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

MoveAppGroupsRequest::~MoveAppGroupsRequest() = default;

void MoveAppGroupsRequest::validate()
{
}

web::json::value MoveAppGroupsRequest::toJson() const
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
bool MoveAppGroupsRequest::fromJson(const web::json::value& val)
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
            MoveAppGroupsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MoveAppGroupsRequest::getProjectId() const
{
    return projectId_;
}

void MoveAppGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MoveAppGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MoveAppGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

MoveAppGroupsRequestBody MoveAppGroupsRequest::getBody() const
{
    return body_;
}

void MoveAppGroupsRequest::setBody(const MoveAppGroupsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MoveAppGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MoveAppGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


