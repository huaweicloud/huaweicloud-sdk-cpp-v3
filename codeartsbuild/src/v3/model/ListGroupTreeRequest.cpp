

#include "huaweicloud/codeartsbuild/v3/model/ListGroupTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListGroupTreeRequest::ListGroupTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListGroupTreeRequest::~ListGroupTreeRequest() = default;

void ListGroupTreeRequest::validate()
{
}

web::json::value ListGroupTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListGroupTreeRequest::fromJson(const web::json::value& val)
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


std::string ListGroupTreeRequest::getProjectId() const
{
    return projectId_;
}

void ListGroupTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListGroupTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListGroupTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


