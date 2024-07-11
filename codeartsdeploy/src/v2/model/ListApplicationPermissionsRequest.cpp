

#include "huaweicloud/codeartsdeploy/v2/model/ListApplicationPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListApplicationPermissionsRequest::ListApplicationPermissionsRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListApplicationPermissionsRequest::~ListApplicationPermissionsRequest() = default;

void ListApplicationPermissionsRequest::validate()
{
}

web::json::value ListApplicationPermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListApplicationPermissionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string ListApplicationPermissionsRequest::getAppId() const
{
    return appId_;
}

void ListApplicationPermissionsRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListApplicationPermissionsRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListApplicationPermissionsRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListApplicationPermissionsRequest::getProjectId() const
{
    return projectId_;
}

void ListApplicationPermissionsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListApplicationPermissionsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListApplicationPermissionsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


