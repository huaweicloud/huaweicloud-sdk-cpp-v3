

#include "huaweicloud/codeartsdeploy/v2/model/ListAppGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListAppGroupsRequest::ListAppGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListAppGroupsRequest::~ListAppGroupsRequest() = default;

void ListAppGroupsRequest::validate()
{
}

web::json::value ListAppGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListAppGroupsRequest::fromJson(const web::json::value& val)
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


std::string ListAppGroupsRequest::getProjectId() const
{
    return projectId_;
}

void ListAppGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAppGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAppGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


