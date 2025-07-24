

#include "huaweicloud/cloudtest/v1/model/ShowMindmapCreatorNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapCreatorNameRequest::ShowMindmapCreatorNameRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowMindmapCreatorNameRequest::~ShowMindmapCreatorNameRequest() = default;

void ShowMindmapCreatorNameRequest::validate()
{
}

web::json::value ShowMindmapCreatorNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowMindmapCreatorNameRequest::fromJson(const web::json::value& val)
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


std::string ShowMindmapCreatorNameRequest::getProjectId() const
{
    return projectId_;
}

void ShowMindmapCreatorNameRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowMindmapCreatorNameRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowMindmapCreatorNameRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


