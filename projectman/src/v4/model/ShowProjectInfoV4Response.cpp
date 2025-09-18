

#include "huaweicloud/projectman/v4/model/ShowProjectInfoV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectInfoV4Response::ShowProjectInfoV4Response()
{
    projectIsSet_ = false;
}

ShowProjectInfoV4Response::~ShowProjectInfoV4Response() = default;

void ShowProjectInfoV4Response::validate()
{
}

web::json::value ShowProjectInfoV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }

    return val;
}
bool ShowProjectInfoV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            GetProjectInfoV4Result_project refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    return ok;
}


GetProjectInfoV4Result_project ShowProjectInfoV4Response::getProject() const
{
    return project_;
}

void ShowProjectInfoV4Response::setProject(const GetProjectInfoV4Result_project& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool ShowProjectInfoV4Response::projectIsSet() const
{
    return projectIsSet_;
}

void ShowProjectInfoV4Response::unsetproject()
{
    projectIsSet_ = false;
}

}
}
}
}
}


