

#include "huaweicloud/cloudtest/v1/model/ListUsageInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUsageInfosRequest::ListUsageInfosRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ListUsageInfosRequest::~ListUsageInfosRequest() = default;

void ListUsageInfosRequest::validate()
{
}

web::json::value ListUsageInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ListUsageInfosRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    return ok;
}


std::string ListUsageInfosRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListUsageInfosRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListUsageInfosRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListUsageInfosRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


