

#include "huaweicloud/modelarts/v1/model/ShowPoolStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolStatisticsRequest::ShowPoolStatisticsRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowPoolStatisticsRequest::~ShowPoolStatisticsRequest() = default;

void ShowPoolStatisticsRequest::validate()
{
}

web::json::value ShowPoolStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspaceId")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowPoolStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspaceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


std::string ShowPoolStatisticsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowPoolStatisticsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowPoolStatisticsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowPoolStatisticsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


