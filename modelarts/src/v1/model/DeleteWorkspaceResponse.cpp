

#include "huaweicloud/modelarts/v1/model/DeleteWorkspaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteWorkspaceResponse::DeleteWorkspaceResponse()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

DeleteWorkspaceResponse::~DeleteWorkspaceResponse() = default;

void DeleteWorkspaceResponse::validate()
{
}

web::json::value DeleteWorkspaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool DeleteWorkspaceResponse::fromJson(const web::json::value& val)
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


std::string DeleteWorkspaceResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteWorkspaceResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteWorkspaceResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteWorkspaceResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


