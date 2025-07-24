

#include "huaweicloud/cloudtest/v1/model/ShowMindmapRecycleByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapRecycleByPageRequest::ShowMindmapRecycleByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowMindmapRecycleByPageRequest::~ShowMindmapRecycleByPageRequest() = default;

void ShowMindmapRecycleByPageRequest::validate()
{
}

web::json::value ShowMindmapRecycleByPageRequest::toJson() const
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
bool ShowMindmapRecycleByPageRequest::fromJson(const web::json::value& val)
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
            CommRequestMindmapRecyclePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowMindmapRecycleByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowMindmapRecycleByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowMindmapRecycleByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowMindmapRecycleByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestMindmapRecyclePageParam ShowMindmapRecycleByPageRequest::getBody() const
{
    return body_;
}

void ShowMindmapRecycleByPageRequest::setBody(const CommRequestMindmapRecyclePageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowMindmapRecycleByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowMindmapRecycleByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


