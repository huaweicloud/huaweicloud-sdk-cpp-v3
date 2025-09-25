

#include "huaweicloud/codehub/v4/model/ListGroupPermissionResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupPermissionResourcesResponse::ListGroupPermissionResourcesResponse()
{
    useProjectPermission_ = false;
    useProjectPermissionIsSet_ = false;
    resourcesIsSet_ = false;
}

ListGroupPermissionResourcesResponse::~ListGroupPermissionResourcesResponse() = default;

void ListGroupPermissionResourcesResponse::validate()
{
}

web::json::value ListGroupPermissionResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(useProjectPermissionIsSet_) {
        val[utility::conversions::to_string_t("use_project_permission")] = ModelBase::toJson(useProjectPermission_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ListGroupPermissionResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("use_project_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_project_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseProjectPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<PermissionResourcesDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


bool ListGroupPermissionResourcesResponse::isUseProjectPermission() const
{
    return useProjectPermission_;
}

void ListGroupPermissionResourcesResponse::setUseProjectPermission(bool value)
{
    useProjectPermission_ = value;
    useProjectPermissionIsSet_ = true;
}

bool ListGroupPermissionResourcesResponse::useProjectPermissionIsSet() const
{
    return useProjectPermissionIsSet_;
}

void ListGroupPermissionResourcesResponse::unsetuseProjectPermission()
{
    useProjectPermissionIsSet_ = false;
}

std::vector<PermissionResourcesDto>& ListGroupPermissionResourcesResponse::getResources()
{
    return resources_;
}

void ListGroupPermissionResourcesResponse::setResources(const std::vector<PermissionResourcesDto>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListGroupPermissionResourcesResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListGroupPermissionResourcesResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


