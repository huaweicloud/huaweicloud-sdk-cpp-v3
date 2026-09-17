

#include "huaweicloud/cloudtest/v1/model/ListVisibleServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListVisibleServicesRequest::ListVisibleServicesRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ListVisibleServicesRequest::~ListVisibleServicesRequest() = default;

void ListVisibleServicesRequest::validate()
{
}

web::json::value ListVisibleServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ListVisibleServicesRequest::fromJson(const web::json::value& val)
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


std::string ListVisibleServicesRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListVisibleServicesRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListVisibleServicesRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListVisibleServicesRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


