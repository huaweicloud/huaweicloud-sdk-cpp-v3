

#include "huaweicloud/projectman/v4/model/BatchDeleteModuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteModuleRequestBody::BatchDeleteModuleRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueIds_ = "";
    issueIdsIsSet_ = false;
}

BatchDeleteModuleRequestBody::~BatchDeleteModuleRequestBody() = default;

void BatchDeleteModuleRequestBody::validate()
{
}

web::json::value BatchDeleteModuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdsIsSet_) {
        val[utility::conversions::to_string_t("issue_ids")] = ModelBase::toJson(issueIds_);
    }

    return val;
}
bool BatchDeleteModuleRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueIds(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteModuleRequestBody::getProjectId() const
{
    return projectId_;
}

void BatchDeleteModuleRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteModuleRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteModuleRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BatchDeleteModuleRequestBody::getIssueIds() const
{
    return issueIds_;
}

void BatchDeleteModuleRequestBody::setIssueIds(const std::string& value)
{
    issueIds_ = value;
    issueIdsIsSet_ = true;
}

bool BatchDeleteModuleRequestBody::issueIdsIsSet() const
{
    return issueIdsIsSet_;
}

void BatchDeleteModuleRequestBody::unsetissueIds()
{
    issueIdsIsSet_ = false;
}

}
}
}
}
}


