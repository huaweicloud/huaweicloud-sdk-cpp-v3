

#include "huaweicloud/modelarts/v1/model/ShowNotebookTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNotebookTagsRequest::ShowNotebookTagsRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowNotebookTagsRequest::~ShowNotebookTagsRequest() = default;

void ShowNotebookTagsRequest::validate()
{
}

web::json::value ShowNotebookTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowNotebookTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowNotebookTagsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowNotebookTagsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowNotebookTagsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowNotebookTagsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


