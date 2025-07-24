

#include "huaweicloud/cloudtest/v1/model/ListResourcePoolsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListResourcePoolsRequest::ListResourcePoolsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListResourcePoolsRequest::~ListResourcePoolsRequest() = default;

void ListResourcePoolsRequest::validate()
{
}

web::json::value ListResourcePoolsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListResourcePoolsRequest::fromJson(const web::json::value& val)
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


std::string ListResourcePoolsRequest::getProjectId() const
{
    return projectId_;
}

void ListResourcePoolsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListResourcePoolsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListResourcePoolsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


