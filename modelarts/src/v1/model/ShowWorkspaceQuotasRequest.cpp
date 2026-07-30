

#include "huaweicloud/modelarts/v1/model/ShowWorkspaceQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkspaceQuotasRequest::ShowWorkspaceQuotasRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowWorkspaceQuotasRequest::~ShowWorkspaceQuotasRequest() = default;

void ShowWorkspaceQuotasRequest::validate()
{
}

web::json::value ShowWorkspaceQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowWorkspaceQuotasRequest::fromJson(const web::json::value& val)
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


std::string ShowWorkspaceQuotasRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowWorkspaceQuotasRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowWorkspaceQuotasRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowWorkspaceQuotasRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


