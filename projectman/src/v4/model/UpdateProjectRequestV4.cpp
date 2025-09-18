

#include "huaweicloud/projectman/v4/model/UpdateProjectRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateProjectRequestV4::UpdateProjectRequestV4()
{
    description_ = "";
    descriptionIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

UpdateProjectRequestV4::~UpdateProjectRequestV4() = default;

void UpdateProjectRequestV4::validate()
{
}

web::json::value UpdateProjectRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool UpdateProjectRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectRequestV4::getDescription() const
{
    return description_;
}

void UpdateProjectRequestV4::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProjectRequestV4::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProjectRequestV4::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateProjectRequestV4::getProjectName() const
{
    return projectName_;
}

void UpdateProjectRequestV4::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool UpdateProjectRequestV4::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void UpdateProjectRequestV4::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


