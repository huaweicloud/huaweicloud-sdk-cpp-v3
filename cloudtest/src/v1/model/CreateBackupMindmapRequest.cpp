

#include "huaweicloud/cloudtest/v1/model/CreateBackupMindmapRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateBackupMindmapRequest::CreateBackupMindmapRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateBackupMindmapRequest::~CreateBackupMindmapRequest() = default;

void CreateBackupMindmapRequest::validate()
{
}

web::json::value CreateBackupMindmapRequest::toJson() const
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
bool CreateBackupMindmapRequest::fromJson(const web::json::value& val)
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
            CommRequestBackUpMindmapParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateBackupMindmapRequest::getProjectId() const
{
    return projectId_;
}

void CreateBackupMindmapRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateBackupMindmapRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateBackupMindmapRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestBackUpMindmapParam CreateBackupMindmapRequest::getBody() const
{
    return body_;
}

void CreateBackupMindmapRequest::setBody(const CommRequestBackUpMindmapParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBackupMindmapRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBackupMindmapRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


