

#include "huaweicloud/cloudtest/v1/model/ShowUserAccessInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowUserAccessInfoRequest::ShowUserAccessInfoRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ShowUserAccessInfoRequest::~ShowUserAccessInfoRequest() = default;

void ShowUserAccessInfoRequest::validate()
{
}

web::json::value ShowUserAccessInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ShowUserAccessInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowUserAccessInfoRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowUserAccessInfoRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowUserAccessInfoRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowUserAccessInfoRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


