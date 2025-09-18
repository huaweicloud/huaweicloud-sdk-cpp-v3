

#include "huaweicloud/projectman/v4/model/CreateIterationV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIterationV4Request::CreateIterationV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIterationV4Request::~CreateIterationV4Request() = default;

void CreateIterationV4Request::validate()
{
}

web::json::value CreateIterationV4Request::toJson() const
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
bool CreateIterationV4Request::fromJson(const web::json::value& val)
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
            CreateIterationRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIterationV4Request::getProjectId() const
{
    return projectId_;
}

void CreateIterationV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateIterationV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateIterationV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateIterationRequestV4 CreateIterationV4Request::getBody() const
{
    return body_;
}

void CreateIterationV4Request::setBody(const CreateIterationRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIterationV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIterationV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


