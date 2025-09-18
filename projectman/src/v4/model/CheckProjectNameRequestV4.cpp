

#include "huaweicloud/projectman/v4/model/CheckProjectNameRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CheckProjectNameRequestV4::CheckProjectNameRequestV4()
{
    projectName_ = "";
    projectNameIsSet_ = false;
}

CheckProjectNameRequestV4::~CheckProjectNameRequestV4() = default;

void CheckProjectNameRequestV4::validate()
{
}

web::json::value CheckProjectNameRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool CheckProjectNameRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CheckProjectNameRequestV4::getProjectName() const
{
    return projectName_;
}

void CheckProjectNameRequestV4::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool CheckProjectNameRequestV4::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void CheckProjectNameRequestV4::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


