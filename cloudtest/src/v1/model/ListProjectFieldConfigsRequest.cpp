

#include "huaweicloud/cloudtest/v1/model/ListProjectFieldConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListProjectFieldConfigsRequest::ListProjectFieldConfigsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListProjectFieldConfigsRequest::~ListProjectFieldConfigsRequest() = default;

void ListProjectFieldConfigsRequest::validate()
{
}

web::json::value ListProjectFieldConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListProjectFieldConfigsRequest::fromJson(const web::json::value& val)
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


std::string ListProjectFieldConfigsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectFieldConfigsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectFieldConfigsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectFieldConfigsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


