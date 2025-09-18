

#include "huaweicloud/projectman/v4/model/BatchAddMembersV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchAddMembersV4Request::BatchAddMembersV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddMembersV4Request::~BatchAddMembersV4Request() = default;

void BatchAddMembersV4Request::validate()
{
}

web::json::value BatchAddMembersV4Request::toJson() const
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
bool BatchAddMembersV4Request::fromJson(const web::json::value& val)
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
            BatchAddMembersV4RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddMembersV4Request::getProjectId() const
{
    return projectId_;
}

void BatchAddMembersV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchAddMembersV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchAddMembersV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchAddMembersV4RequestBody BatchAddMembersV4Request::getBody() const
{
    return body_;
}

void BatchAddMembersV4Request::setBody(const BatchAddMembersV4RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddMembersV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddMembersV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


