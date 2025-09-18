

#include "huaweicloud/projectman/v4/model/UpdateMembesRoleV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateMembesRoleV4Request::UpdateMembesRoleV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMembesRoleV4Request::~UpdateMembesRoleV4Request() = default;

void UpdateMembesRoleV4Request::validate()
{
}

web::json::value UpdateMembesRoleV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMembesRoleV4Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateMembesRoleV4RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMembesRoleV4Request::getProjectId() const
{
    return projectId_;
}

void UpdateMembesRoleV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateMembesRoleV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateMembesRoleV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UpdateMembesRoleV4RequestBody UpdateMembesRoleV4Request::getBody() const
{
    return body_;
}

void UpdateMembesRoleV4Request::setBody(const UpdateMembesRoleV4RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMembesRoleV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMembesRoleV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


