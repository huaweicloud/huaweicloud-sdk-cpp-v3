

#include "huaweicloud/cloudtest/v1/model/CreateApiTestSuiteByRepoFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateApiTestSuiteByRepoFileRequest::CreateApiTestSuiteByRepoFileRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateApiTestSuiteByRepoFileRequest::~CreateApiTestSuiteByRepoFileRequest() = default;

void CreateApiTestSuiteByRepoFileRequest::validate()
{
}

web::json::value CreateApiTestSuiteByRepoFileRequest::toJson() const
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
bool CreateApiTestSuiteByRepoFileRequest::fromJson(const web::json::value& val)
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
            CreateTestSuitByRepoFileInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateApiTestSuiteByRepoFileRequest::getProjectId() const
{
    return projectId_;
}

void CreateApiTestSuiteByRepoFileRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateApiTestSuiteByRepoFileRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateApiTestSuiteByRepoFileRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateTestSuitByRepoFileInfo CreateApiTestSuiteByRepoFileRequest::getBody() const
{
    return body_;
}

void CreateApiTestSuiteByRepoFileRequest::setBody(const CreateTestSuitByRepoFileInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateApiTestSuiteByRepoFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateApiTestSuiteByRepoFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


