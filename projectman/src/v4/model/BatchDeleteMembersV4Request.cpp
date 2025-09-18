

#include "huaweicloud/projectman/v4/model/BatchDeleteMembersV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteMembersV4Request::BatchDeleteMembersV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteMembersV4Request::~BatchDeleteMembersV4Request() = default;

void BatchDeleteMembersV4Request::validate()
{
}

web::json::value BatchDeleteMembersV4Request::toJson() const
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
bool BatchDeleteMembersV4Request::fromJson(const web::json::value& val)
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
            BatchDeleteMembersV4RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteMembersV4Request::getProjectId() const
{
    return projectId_;
}

void BatchDeleteMembersV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteMembersV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteMembersV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchDeleteMembersV4RequestBody BatchDeleteMembersV4Request::getBody() const
{
    return body_;
}

void BatchDeleteMembersV4Request::setBody(const BatchDeleteMembersV4RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteMembersV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteMembersV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


