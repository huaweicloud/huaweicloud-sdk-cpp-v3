

#include "huaweicloud/modelarts/v1/model/DeleteWorkspaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteWorkspaceRequest::DeleteWorkspaceRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

DeleteWorkspaceRequest::~DeleteWorkspaceRequest() = default;

void DeleteWorkspaceRequest::validate()
{
}

web::json::value DeleteWorkspaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool DeleteWorkspaceRequest::fromJson(const web::json::value& val)
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


std::string DeleteWorkspaceRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteWorkspaceRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteWorkspaceRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteWorkspaceRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


