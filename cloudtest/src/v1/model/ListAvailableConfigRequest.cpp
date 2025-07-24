

#include "huaweicloud/cloudtest/v1/model/ListAvailableConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAvailableConfigRequest::ListAvailableConfigRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListAvailableConfigRequest::~ListAvailableConfigRequest() = default;

void ListAvailableConfigRequest::validate()
{
}

web::json::value ListAvailableConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListAvailableConfigRequest::fromJson(const web::json::value& val)
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


std::string ListAvailableConfigRequest::getProjectId() const
{
    return projectId_;
}

void ListAvailableConfigRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAvailableConfigRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAvailableConfigRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


