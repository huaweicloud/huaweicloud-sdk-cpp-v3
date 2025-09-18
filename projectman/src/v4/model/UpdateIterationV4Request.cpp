

#include "huaweicloud/projectman/v4/model/UpdateIterationV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIterationV4Request::UpdateIterationV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    iterationId_ = 0;
    iterationIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIterationV4Request::~UpdateIterationV4Request() = default;

void UpdateIterationV4Request::validate()
{
}

web::json::value UpdateIterationV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateIterationV4Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateIterationRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIterationV4Request::getProjectId() const
{
    return projectId_;
}

void UpdateIterationV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateIterationV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateIterationV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UpdateIterationV4Request::getIterationId() const
{
    return iterationId_;
}

void UpdateIterationV4Request::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool UpdateIterationV4Request::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void UpdateIterationV4Request::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

UpdateIterationRequestV4 UpdateIterationV4Request::getBody() const
{
    return body_;
}

void UpdateIterationV4Request::setBody(const UpdateIterationRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIterationV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIterationV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


