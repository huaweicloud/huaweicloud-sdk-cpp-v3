

#include "huaweicloud/codeartsrepo/v4/model/ListProjectNoteRequiredAttributesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectNoteRequiredAttributesRequest::ListProjectNoteRequiredAttributesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListProjectNoteRequiredAttributesRequest::~ListProjectNoteRequiredAttributesRequest() = default;

void ListProjectNoteRequiredAttributesRequest::validate()
{
}

web::json::value ListProjectNoteRequiredAttributesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListProjectNoteRequiredAttributesRequest::fromJson(const web::json::value& val)
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


std::string ListProjectNoteRequiredAttributesRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectNoteRequiredAttributesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectNoteRequiredAttributesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectNoteRequiredAttributesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


