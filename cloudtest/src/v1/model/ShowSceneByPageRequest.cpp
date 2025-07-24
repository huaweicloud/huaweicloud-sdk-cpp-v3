

#include "huaweicloud/cloudtest/v1/model/ShowSceneByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowSceneByPageRequest::ShowSceneByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowSceneByPageRequest::~ShowSceneByPageRequest() = default;

void ShowSceneByPageRequest::validate()
{
}

web::json::value ShowSceneByPageRequest::toJson() const
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
bool ShowSceneByPageRequest::fromJson(const web::json::value& val)
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
            CommRequestScenePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowSceneByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowSceneByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowSceneByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowSceneByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestScenePageParam ShowSceneByPageRequest::getBody() const
{
    return body_;
}

void ShowSceneByPageRequest::setBody(const CommRequestScenePageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowSceneByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowSceneByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


