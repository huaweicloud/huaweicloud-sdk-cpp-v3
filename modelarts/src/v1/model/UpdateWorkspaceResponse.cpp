

#include "huaweicloud/modelarts/v1/model/UpdateWorkspaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkspaceResponse::UpdateWorkspaceResponse()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

UpdateWorkspaceResponse::~UpdateWorkspaceResponse() = default;

void UpdateWorkspaceResponse::validate()
{
}

web::json::value UpdateWorkspaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool UpdateWorkspaceResponse::fromJson(const web::json::value& val)
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


std::string UpdateWorkspaceResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateWorkspaceResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateWorkspaceResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateWorkspaceResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


