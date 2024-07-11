

#include "huaweicloud/codeartsdeploy/v2/model/AppBatchDeleteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppBatchDeleteRequest::AppBatchDeleteRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    applicationIdsIsSet_ = false;
}

AppBatchDeleteRequest::~AppBatchDeleteRequest() = default;

void AppBatchDeleteRequest::validate()
{
}

web::json::value AppBatchDeleteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(applicationIdsIsSet_) {
        val[utility::conversions::to_string_t("application_ids")] = ModelBase::toJson(applicationIds_);
    }

    return val;
}
bool AppBatchDeleteRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("application_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationIds(refVal);
        }
    }
    return ok;
}


std::string AppBatchDeleteRequest::getProjectId() const
{
    return projectId_;
}

void AppBatchDeleteRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AppBatchDeleteRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AppBatchDeleteRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& AppBatchDeleteRequest::getApplicationIds()
{
    return applicationIds_;
}

void AppBatchDeleteRequest::setApplicationIds(const std::vector<std::string>& value)
{
    applicationIds_ = value;
    applicationIdsIsSet_ = true;
}

bool AppBatchDeleteRequest::applicationIdsIsSet() const
{
    return applicationIdsIsSet_;
}

void AppBatchDeleteRequest::unsetapplicationIds()
{
    applicationIdsIsSet_ = false;
}

}
}
}
}
}


