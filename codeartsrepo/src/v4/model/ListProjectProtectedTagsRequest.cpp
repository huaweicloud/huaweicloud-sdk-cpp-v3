

#include "huaweicloud/codeartsrepo/v4/model/ListProjectProtectedTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectProtectedTagsRequest::ListProjectProtectedTagsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListProjectProtectedTagsRequest::~ListProjectProtectedTagsRequest() = default;

void ListProjectProtectedTagsRequest::validate()
{
}

web::json::value ListProjectProtectedTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListProjectProtectedTagsRequest::fromJson(const web::json::value& val)
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


std::string ListProjectProtectedTagsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectProtectedTagsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectProtectedTagsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectProtectedTagsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


