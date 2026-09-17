

#include "huaweicloud/projectman/v4/model/ListWorkitemConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListWorkitemConfigsRequest::ListWorkitemConfigsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListWorkitemConfigsRequest::~ListWorkitemConfigsRequest() = default;

void ListWorkitemConfigsRequest::validate()
{
}

web::json::value ListWorkitemConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListWorkitemConfigsRequest::fromJson(const web::json::value& val)
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


std::string ListWorkitemConfigsRequest::getProjectId() const
{
    return projectId_;
}

void ListWorkitemConfigsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListWorkitemConfigsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListWorkitemConfigsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


