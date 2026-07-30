

#include "huaweicloud/modelarts/v1/model/ShowWorkspaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkspaceRequest::ShowWorkspaceRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowWorkspaceRequest::~ShowWorkspaceRequest() = default;

void ShowWorkspaceRequest::validate()
{
}

web::json::value ShowWorkspaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowWorkspaceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


std::string ShowWorkspaceRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowWorkspaceRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowWorkspaceRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowWorkspaceRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


