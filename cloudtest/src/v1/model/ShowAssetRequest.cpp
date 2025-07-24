

#include "huaweicloud/cloudtest/v1/model/ShowAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowAssetRequest::ShowAssetRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowAssetRequest::~ShowAssetRequest() = default;

void ShowAssetRequest::validate()
{
}

web::json::value ShowAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowAssetRequest::fromJson(const web::json::value& val)
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


std::string ShowAssetRequest::getProjectId() const
{
    return projectId_;
}

void ShowAssetRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAssetRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAssetRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


