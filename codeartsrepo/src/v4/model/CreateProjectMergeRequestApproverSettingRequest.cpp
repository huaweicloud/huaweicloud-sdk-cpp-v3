

#include "huaweicloud/codeartsrepo/v4/model/CreateProjectMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateProjectMergeRequestApproverSettingRequest::CreateProjectMergeRequestApproverSettingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProjectMergeRequestApproverSettingRequest::~CreateProjectMergeRequestApproverSettingRequest() = default;

void CreateProjectMergeRequestApproverSettingRequest::validate()
{
}

web::json::value CreateProjectMergeRequestApproverSettingRequest::toJson() const
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
bool CreateProjectMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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
            CreateMergeRequestApproverSettingDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProjectMergeRequestApproverSettingRequest::getProjectId() const
{
    return projectId_;
}

void CreateProjectMergeRequestApproverSettingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateProjectMergeRequestApproverSettingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateMergeRequestApproverSettingDto CreateProjectMergeRequestApproverSettingRequest::getBody() const
{
    return body_;
}

void CreateProjectMergeRequestApproverSettingRequest::setBody(const CreateMergeRequestApproverSettingDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectMergeRequestApproverSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


