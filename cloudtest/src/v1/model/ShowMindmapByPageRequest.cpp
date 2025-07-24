

#include "huaweicloud/cloudtest/v1/model/ShowMindmapByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapByPageRequest::ShowMindmapByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowMindmapByPageRequest::~ShowMindmapByPageRequest() = default;

void ShowMindmapByPageRequest::validate()
{
}

web::json::value ShowMindmapByPageRequest::toJson() const
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
bool ShowMindmapByPageRequest::fromJson(const web::json::value& val)
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
            CommRequestMindmapPageParamV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowMindmapByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowMindmapByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowMindmapByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowMindmapByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestMindmapPageParamV3 ShowMindmapByPageRequest::getBody() const
{
    return body_;
}

void ShowMindmapByPageRequest::setBody(const CommRequestMindmapPageParamV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowMindmapByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowMindmapByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


