

#include "huaweicloud/cloudtest/v1/model/ListUserPackageUsageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUserPackageUsageRequest::ListUserPackageUsageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListUserPackageUsageRequest::~ListUserPackageUsageRequest() = default;

void ListUserPackageUsageRequest::validate()
{
}

web::json::value ListUserPackageUsageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListUserPackageUsageRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListUserPackageUsageRequest::getProjectId() const
{
    return projectId_;
}

void ListUserPackageUsageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListUserPackageUsageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListUserPackageUsageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


