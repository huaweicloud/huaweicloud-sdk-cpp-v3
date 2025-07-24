

#include "huaweicloud/cloudtest/v1/model/ListUserDnsMappingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUserDnsMappingRequest::ListUserDnsMappingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListUserDnsMappingRequest::~ListUserDnsMappingRequest() = default;

void ListUserDnsMappingRequest::validate()
{
}

web::json::value ListUserDnsMappingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListUserDnsMappingRequest::fromJson(const web::json::value& val)
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


std::string ListUserDnsMappingRequest::getProjectId() const
{
    return projectId_;
}

void ListUserDnsMappingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListUserDnsMappingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListUserDnsMappingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


